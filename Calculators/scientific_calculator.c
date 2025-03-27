/**
 * Scientific Calculator
 * 
 * A comprehensive console-based scientific calculator supporting various
 * mathematical operations including basic arithmetic, trigonometric functions,
 * logarithms, and more. Features include angle mode switching, previous result
 * memory, and mathematical constant access.
 * 
 * Author: innoxent_ghost
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<float.h>

/**
 * Clears the input buffer to prevent unexpected behavior when reading input
 * This is especially important after a failed scanf operation
 */
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/**
 * Clears the console screen in a cross-platform manner
 * Uses the appropriate system command based on the operating system
 */
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/**
 * Validates numeric input from the user
 * 
 * @param num Pointer to store the validated number
 * @return 1 if input is valid, 0 otherwise
 */
int validate_input(double *num) {
    if (scanf("%lf", num) != 1) {
        clear_input_buffer();
        printf("\nError: Invalid input. Please enter a valid number.\n");
        return 0;
    }
    return 1;
}

// Mathematical constants with high precision
#define PI 3.14159265358979323846  // π (pi) value
#define E 2.71828182845904523536   // e (Euler's number)

/**
 * Checks if a calculation result is valid (not NaN or infinity)
 * 
 * @param result The calculated result to check
 * @return 1 if result is valid, 0 otherwise
 */
int is_valid_result(double result) {
    return !isnan(result) && !isinf(result);
}

/**
 * Displays calculation results with appropriate formatting
 * Uses scientific notation for very small or very large numbers
 * 
 * @param result The result to display
 */
void display_result(double result) {
    if (!is_valid_result(result)) {
        printf("\nError: Calculation resulted in an invalid value (NaN or Infinity).\n");
        return;
    }
    
    // Use appropriate precision based on the magnitude
    if (fabs(result) < 0.0001 || fabs(result) > 100000) {
        printf("\nResult: %e", result);
    } else {
        printf("\nResult: %.6lf", result);
    }
}

/**
 * Calculates factorial of a non-negative integer
 * Handles potential overflow by returning INFINITY when appropriate
 * 
 * @param n The non-negative integer input
 * @return The factorial result or NAN/INFINITY for invalid inputs/overflow
 */
double factorial(int n) {
    if (n < 0) return NAN;
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result *= i;
        if (result > DBL_MAX / (i+1)) return INFINITY; // Prevent overflow
    }
    return result;
}

int main()
{
    // Control variables
    int choice;               // User's menu selection
    int loop = 1;             // Controls the main program loop
    int angle_mode = 0;       // Angle mode: 0 = radians, 1 = degrees
    
    // Calculation variables
    double num1, num2;        // Input numbers for operations
    double result;            // Current calculation result
    double prev_result = 0;   // Stores previous calculation result
    int use_prev_result = 0;  // Flag to use previous result as input
    
    // Main program loop
    while (loop) {
        clear_screen();

        // Display calculator menu with all available options
        printf("============================= SCIENTIFIC CALCULATOR =============================\n\n");
        printf("\n\t-- AVAILABLE OPERATIONS --\n");
        printf("\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Power of a Value");
        printf("\n 6. Square Root\n 7. Logarithm (base 10)\n 8. Natural Logarithm (base e)\n 9. Exponent (e^x)");
        printf("\n10. Sine\n11. Cosine\n12. Tangent\n13. Factorial\n14. Absolute Value\n15. Floor\n16. Ceiling");
        printf("\n\n\t-- SETTINGS --");
        printf("\n17. Toggle Angle Mode (Current: %s)", angle_mode ? "Degrees" : "Radians");
        printf("\n18. Use Previous Result (%s)", use_prev_result ? "Enabled" : "Disabled");
        printf("\n\n\t-- CONSTANTS --");
        printf("\n19. Pi (π)\n20. Euler's Number (e)");
        
        printf("\n\nPlease enter the serial number of the operation you want to perform: ");
        
        // Get and validate the user's choice
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 20) {
            clear_input_buffer();
            printf("\nError: Invalid choice. Please enter a number between 1 and 20.\n");
            printf("\nPress Enter to restart... ");
            getchar();
            continue;
        }

        // Handle settings and mathematical constants
        if (choice == 17) {
            // Toggle between radians and degrees mode
            angle_mode = !angle_mode;
            printf("\nAngle mode set to: %s", angle_mode ? "Degrees" : "Radians");
            printf("\n\nPress Enter to continue... ");
            clear_input_buffer();
            getchar();
            continue;
        } else if (choice == 18) {
            // Toggle the use of previous result
            use_prev_result = !use_prev_result;
            printf("\nUse previous result: %s", use_prev_result ? "Enabled" : "Disabled");
            printf("\nPrevious result: %.6lf", prev_result);
            printf("\n\nPress Enter to continue... ");
            clear_input_buffer();
            getchar();
            continue;
        } else if (choice == 19) {
            // Display the value of Pi
            printf("\nPi (π) = %.15lf", PI);
            printf("\n\nPress Enter to continue... ");
            clear_input_buffer();
            getchar();
            continue;
        } else if (choice == 20) {
            // Display the value of Euler's number
            printf("\nEuler's Number (e) = %.15lf", E);
            printf("\n\nPress Enter to continue... ");
            clear_input_buffer();
            getchar();
            continue;
        }

        // Input acquisition based on operation type
        if (choice >= 1 && choice <= 5) {
            // Binary operations - require two operands
            if (use_prev_result) {
                num1 = prev_result;
                printf("\nUsing previous result as first number: %.6lf", num1);
                printf("\nEnter second number: ");
                if (!validate_input(&num2)) {
                    printf("\nPress Enter to restart... ");
                    getchar();
                    continue;
                }
            } else {
                printf("\nEnter two numbers: ");
                if (!validate_input(&num1) || !validate_input(&num2)) {
                    printf("\nPress Enter to restart... ");
                    getchar();
                    continue;
                }
            }
        } else if (choice >= 6 && choice <= 16) {
            // Unary operations - require one operand
            if (use_prev_result) {
                num1 = prev_result;
                printf("\nUsing previous result: %.6lf", num1);
            } else {
                if (choice == 13) {
                    printf("\nEnter a non-negative integer: ");
                } else if (choice >= 10 && choice <= 12) {
                    printf("\nEnter an angle in %s: ", angle_mode ? "degrees" : "radians");
                } else {
                    printf("\nEnter a number: ");
                }
                
                if (!validate_input(&num1)) {
                    printf("\nPress Enter to restart... ");
                    getchar();
                    continue;
                }
            }
        }

        // Angle conversion for trigonometric functions
        if (angle_mode && (choice >= 10 && choice <= 12)) {
            // Convert from degrees to radians
            num1 = num1 * PI / 180.0;
        }

        // Process the selected operation
        switch (choice) {
            case 1:
                // Addition
                result = num1 + num2;
                display_result(result);
                break;

            case 2:
                // Subtraction
                result = num1 - num2;
                display_result(result);
                break;

            case 3:
                // Multiplication
                result = num1 * num2;
                display_result(result);
                break;

            case 4:
                // Division - check for division by zero
                if (num2 == 0) {
                    printf("\nError: Division by zero.\n");
                } else {
                    result = num1 / num2;
                    display_result(result);
                }
                break;

            case 5:
                // Power function - check for mathematical validity
                if ((num1 == 0 && num2 <= 0) || (fabs(num1) < 1 && num2 == INFINITY)) {
                    printf("\nError: Undefined mathematical operation.\n");
                } else {
                    result = pow(num1, num2);
                    display_result(result);
                }
                break;

            case 6:
                // Square root - check for negative input
                if (num1 < 0) {
                    printf("\nError: Square root of a negative number.\n");
                } else {
                    result = sqrt(num1);
                    display_result(result);
                }
                break;

            case 7:
                // Logarithm base 10 - check for non-positive input
                if (num1 <= 0) {
                    printf("\nError: Logarithm of a non-positive number.\n");
                } else {
                    result = log10(num1);
                    display_result(result);
                }
                break;
                
            case 8:
                // Natural logarithm - check for non-positive input
                if (num1 <= 0) {
                    printf("\nError: Natural logarithm of a non-positive number.\n");
                } else {
                    result = log(num1);
                    display_result(result);
                }
                break;

            case 9:
                // Exponential function e^x
                result = exp(num1);
                display_result(result);
                break;

            case 10:
                // Sine function
                result = sin(num1);
                display_result(result);
                break;

            case 11:
                // Cosine function
                result = cos(num1);
                display_result(result);
                break;

            case 12:
                // Tangent function - check for undefined points (where cos = 0)
                if (cos(num1) == 0) {
                    printf("\nError: Tangent is undefined at this angle.\n");
                } else {
                    result = tan(num1);
                    display_result(result);
                }
                break;
                
            case 13:
                // Factorial - check for valid input (non-negative integer < 171)
                if (num1 < 0 || num1 != floor(num1) || num1 > 170) {
                    printf("\nError: Factorial requires a non-negative integer less than 171.\n");
                } else {
                    result = factorial((int)num1);
                    display_result(result);
                }
                break;
                
            case 14:
                // Absolute value
                result = fabs(num1);
                display_result(result);
                break;
                
            case 15:
                // Floor function (greatest integer less than or equal to x)
                result = floor(num1);
                display_result(result);
                break;
                
            case 16:
                // Ceiling function (smallest integer greater than or equal to x)
                result = ceil(num1);
                display_result(result);
                break;
        }

        // Store valid results for future operations
        if (is_valid_result(result)) {
            prev_result = result;
        }

        // Prompt user to continue or exit
        printf("\n\nPress 0 to exit or any other key to continue: ");
        if (scanf("%d", &loop) != 1) {
            // Handle invalid input by continuing the program
            clear_input_buffer();
            loop = 1; // Default to restart if invalid input
        }
        
        if (loop != 0) {
            // Reset loop to continue and clear buffer
            loop = 1;
            clear_input_buffer();
        }
    }

    return 0;
}