/**
 * Basic Calculator Program
 * 
 * This program implements a simple calculator that can perform basic arithmetic
 * operations (addition, subtraction, multiplication, division) on two numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
bool getNumbers(float *a, float *b);      // Gets two numbers from user input
void clearInputBuffer(void);              // Clears any remaining characters in input buffer
void clearScreen(void);                   // Clears the terminal screen
void add(void);                           // Performs addition operation
void sub(void);                           // Performs subtraction operation
void mul(void);                           // Performs multiplication operation
void divi(void);                          // Performs division operation

/**
 * Add two numbers and display the result
 */
void add(void) {
    float a, b;
    if (getNumbers(&a, &b)) {
        printf("\n%.3f + %.3f = %.3f\n", a, b, a + b);
    }
}

/**
 * Subtract two numbers and display the result
 */
void sub(void) {
    float a, b;
    if (getNumbers(&a, &b)) {
        printf("\n%.3f - %.3f = %.3f\n", a, b, a - b);
    }
}

/**
 * Multiply two numbers and display the result
 */
void mul(void) {
    float a, b;
    if (getNumbers(&a, &b)) {
        printf("\n%.3f × %.3f = %.3f\n", a, b, a * b);
    }
}

/**
 * Divide two numbers and display the result
 * Checks for division by zero and displays an error if attempted
 */
void divi(void) {
    float a, b;
    if (getNumbers(&a, &b)) {
        if (b == 0) {
            printf("\nError: Cannot divide by zero\n");
            return;
        }
        printf("\n%.3f / %.3f = %.3f\n", a, b, a / b);
    }
}

/**
 * Gets two floating-point numbers from user input
 * 
 * @param a Pointer to store the first number
 * @param b Pointer to store the second number
 * @return true if input was successfully read, false otherwise
 */
bool getNumbers(float *a, float *b) {
    printf("\nPlease enter two numbers separated by a space: ");
    if (scanf("%f %f", a, b) != 2) {
        printf("\nError: Invalid input. Please enter numbers only.\n");
        clearInputBuffer();
        return false;
    }
    return true;
}

/**
 * Clears the input buffer by consuming all characters until newline or EOF
 */
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/**
 * Clears the terminal screen
 * Uses appropriate command based on operating system
 */
void clearScreen(void) {
    #ifdef _WIN32
        system("cls");  // For Windows systems
    #else
        system("clear"); // For Unix/Linux systems
    #endif
}

/**
 * Main function - program entry point
 */
int main(void) {
    char op, choice;
    bool running = true;

    // Main program loop
    while (running) {
        clearScreen();
        printf("======================= BASIC CALCULATOR =======================\n\n");
        printf("\nPlease enter the operation you want to perform (+,-,*,/): ");
        scanf(" %c", &op);  // Space before %c ignores any whitespace

        // Process the selected operation
        switch (op) {
            case '+':
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
            case 'x':
            case 'X':  // Allow different symbols for multiplication
                mul();
                break;
            case '/':
                divi();
                break;
            default:
                printf("\n\nError: Undefined Operator\n");
                break;
        }

        // Ask user whether to continue or exit
        printf("\nPress 0 to exit or any other key to continue: ");
        clearInputBuffer();
        choice = getchar();
        clearInputBuffer();
        running = (choice != '0');  // Exit if user enters 0
    }

    return 0;
}