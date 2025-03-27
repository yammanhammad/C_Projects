/**
 * Pattern Printing Program
 * 
 * This program displays various patterns using asterisks and numbers.
 * It provides a menu-driven interface where users can select which pattern to display,
 * change the number of rows for the patterns, or display all patterns sequentially.
 */
#include <stdio.h>
#include <stdlib.h>

// Function prototypes for all patterns
void printPattern1(int rows);
void printPattern2(int rows);
void printPattern3(int rows);
void printPattern4(int rows);
void printPattern5(int rows);
void printPattern6(int rows);
void printPattern7(int rows);
void printPattern8(int rows);
void printPattern9(int rows);
void printPattern10(int rows);
void printPattern11(int rows);
void printPattern12(int rows);
void printPattern13(int rows);
void printPattern14(int rows);
void printPattern15(int rows);
void printPattern16(int rows);
void printPattern17(int rows);
void printPattern18(int rows);
void printPattern19(int rows);
void printPattern20(int rows);
void printPattern21(int rows);
void printPattern22(int rows);
void printPattern23(int rows);
void printPattern24(int rows);
void printPattern25(int rows);
void printPattern26(int rows);
void displayMenu();
int getValidInput(int min, int max);

int main(void)
{
    int choice = 0;
    int patternRows = 5; // Default number of rows
    int running = 1;
    
    printf("\nWelcome to Pattern Printing Program!\n");
    
    // Main program loop
    while (running) {
        displayMenu();
        
        printf("\nEnter your choice (0-28): ");
        choice = getValidInput(0, 28);
        
        // Handle menu choices
        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            running = 0;
            continue;
        } else if (choice == 27) {
            // Change number of rows
            printf("\nEnter number of rows for patterns (1-15): ");
            patternRows = getValidInput(1, 15);
            continue;
        } else if (choice == 28) {
            // Display all patterns
            printf("\n===== DISPLAYING ALL PATTERNS =====\n");
            for (int pattern = 1; pattern <= 26; pattern++) {
                printf("\n===== PATTERN %d =====\n\n", pattern);
                
                switch (pattern) {
                    case 1: printPattern1(patternRows); break;
                    case 2: printPattern2(patternRows); break;
                    case 3: printPattern3(patternRows); break;
                    case 4: printPattern4(patternRows); break;
                    case 5: printPattern5(patternRows); break;
                    case 6: printPattern6(patternRows); break;
                    case 7: printPattern7(patternRows); break;
                    case 8: printPattern8(patternRows); break;
                    case 9: printPattern9(patternRows); break;
                    case 10: printPattern10(patternRows); break;
                    case 11: printPattern11(patternRows); break;
                    case 12: printPattern12(patternRows); break;
                    case 13: printPattern13(patternRows); break;
                    case 14: printPattern14(patternRows); break;
                    case 15: printPattern15(patternRows); break;
                    case 16: printPattern16(patternRows); break;
                    case 17: printPattern17(patternRows); break;
                    case 18: printPattern18(patternRows); break;
                    case 19: printPattern19(patternRows); break;
                    case 20: printPattern20(patternRows); break;
                    case 21: printPattern21(patternRows); break;
                    case 22: printPattern22(patternRows); break;
                    case 23: printPattern23(patternRows); break;
                    case 24: printPattern24(patternRows); break;
                    case 25: printPattern25(patternRows); break;
                    case 26: printPattern26(patternRows); break;
                }
                
                printf("\nPress Enter to continue to next pattern...");
                while (getchar() != '\n'); // Clear input buffer
                getchar(); // Wait for Enter
            }
            continue;
        }
        
        // Display selected pattern
        printf("\n===== PATTERN %d =====\n\n", choice);
        
        // Call appropriate pattern function
        switch (choice) {
            case 1: printPattern1(patternRows); break;
            case 2: printPattern2(patternRows); break;
            case 3: printPattern3(patternRows); break;
            case 4: printPattern4(patternRows); break;
            case 5: printPattern5(patternRows); break;
            case 6: printPattern6(patternRows); break;
            case 7: printPattern7(patternRows); break;
            case 8: printPattern8(patternRows); break;
            case 9: printPattern9(patternRows); break;
            case 10: printPattern10(patternRows); break;
            case 11: printPattern11(patternRows); break;
            case 12: printPattern12(patternRows); break;
            case 13: printPattern13(patternRows); break;
            case 14: printPattern14(patternRows); break;
            case 15: printPattern15(patternRows); break;
            case 16: printPattern16(patternRows); break;
            case 17: printPattern17(patternRows); break;
            case 18: printPattern18(patternRows); break;
            case 19: printPattern19(patternRows); break;
            case 20: printPattern20(patternRows); break;
            case 21: printPattern21(patternRows); break;
            case 22: printPattern22(patternRows); break;
            case 23: printPattern23(patternRows); break;
            case 24: printPattern24(patternRows); break;
            case 25: printPattern25(patternRows); break;
            case 26: printPattern26(patternRows); break;
            default: printf("\nInvalid choice! Please try again.\n");
        }
        
        // Wait for user before returning to menu
        printf("\nPress Enter to continue...");
        while (getchar() != '\n'); // Clear input buffer
        getchar(); // Wait for Enter
    }
    
    return 0;
}

/**
 * Displays the program menu with available options
 */
void displayMenu() {
    printf("\n===== PATTERN PRINTING MENU =====\n");
    printf("0. Exit Program\n");
    printf("1-26. Display Pattern (1-26)\n");
    printf("27. Change Number of Rows\n");
    printf("28. Display All Patterns\n");
    printf("==============================\n");
}

/**
 * Gets and validates user input within a specified range
 * 
 * @param min Minimum acceptable value
 * @param max Maximum acceptable value
 * @return The validated integer input
 */
int getValidInput(int min, int max) {
    int input;
    char buffer[100];
    
    while (1) {
        // Read input as string first to handle non-numeric input
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("\nError reading input. Please try again: ");
            continue;
        }
        
        // Convert to integer and validate
        if (sscanf(buffer, "%d", &input) != 1) {
            printf("\nPlease enter a valid number: ");
            continue;
        }
        
        // Check if in range
        if (input < min || input > max) {
            printf("\nPlease enter a number between %d and %d: ", min, max);
            continue;
        }
        
        break;
    }
    
    return input;
}

/**
 * Pattern 1: Solid Rectangle
 * Prints a rectangle filled with asterisks
 * 
 * Example (rows=3):
 * ***
 * ***
 * ***
 */
void printPattern1(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= rows; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 2: Right Triangle
 * Prints a right-aligned triangle
 * 
 * Example (rows=4):
 * *
 * **
 * ***
 * ****
 */
void printPattern2(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 3: Inverted Right Triangle
 * Prints an inverted right-aligned triangle
 * 
 * Example (rows=4):
 * ****
 * ***
 * **
 * *
 */
void printPattern3(int rows) {
    int row, col;
    
    for (row = rows; row >= 1; row--) {
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 4: Number Triangle
 * Prints a triangle with incremental numbers in each row
 * 
 * Example (rows=4):
 * 1 
 * 1 2 
 * 1 2 3 
 * 1 2 3 4 
 */
void printPattern4(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= row; col++)
            printf("%d ", col);
        
        printf("\n");
    }
}

/**
 * Pattern 5: Diamond (Half)
 * Prints a half diamond pattern using asterisks
 * 
 * Example (rows=3):
 * *
 * **
 * ***
 * **
 * *
 */
void printPattern5(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
    
    for (row = rows - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 6: Right-Aligned Pyramid
 * Prints a right-aligned pyramid with spaces
 * 
 * Example (rows=3):
 *   *
 *  **
 * ***
 */
void printPattern6(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows; row++) {
        // Print leading spaces
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        // Print stars
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 7: Inverted Right-Aligned Pyramid
 * Prints an inverted right-aligned pyramid with spaces
 * 
 * Example (rows=3):
 * ***
 *  **
 *   *
 */
void printPattern7(int rows) {
    int row, col, space;
    
    for (row = rows; row >= 1; row--) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 8: Pyramid
 * Prints a pyramid with increasing width
 * 
 * Example (rows=3):
 *   *
 *  ***
 * *****
 */
void printPattern8(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows * 2 - 1; row += 2) {
        for (space = rows * 2 - 2; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 9: Inverted Pyramid
 * Prints an inverted pyramid
 * 
 * Example (rows=3):
 * *****
 *  ***
 *   *
 */
void printPattern9(int rows) {
    int row, col, space;
    
    for (row = rows * 2 - 1; row >= 1; row -= 2) {
        for (space = rows * 2 - 3; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 10: Double-Width Pyramid
 * Prints a pyramid with double spacing between stars
 * 
 * Example (rows=3):
 *    *
 *   * *
 *  * * *
 * * * * *
 */
void printPattern10(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows; row++) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("* ");
        
        printf("\n");
    }
}

/**
 * Pattern 11: Inverted Double-Width Pyramid
 * Prints an inverted pyramid with double spacing between stars
 * 
 * Example (rows=3):
 * * * * *
 *  * * *
 *   * *
 *    *
 */
void printPattern11(int rows) {
    int row, col, space;
    
    for (row = rows; row >= 1; row--) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("* ");
        
        printf("\n");
    }
}

/**
 * Pattern 12: Hour Glass
 * Prints an hour glass pattern with double spacing
 * 
 * Example (rows=3):
 *  * * *
 *   * *
 *    *
 *    *
 *   * *
 *  * * *
 */
void printPattern12(int rows) {
    int row, col, space;
    
    for (row = rows; row >= 1; row--) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("* ");
        
        printf("\n");
    }
    
    for (row = 1; row <= rows; row++) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= row; col++)
            printf("* ");
        
        printf("\n");
    }
}

/**
 * Pattern 13: Hollow Pyramid
 * Prints a hollow pyramid (only outline)
 * 
 * Example (rows=3):
 *   *
 *  * *
 * *****
 */
void printPattern13(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows * 2 - 1; row += 2) {
        for (space = rows * 2 - 3; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row || row == rows * 2 - 1)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 14: Hollow Inverted Pyramid
 * Prints a hollow inverted pyramid
 * 
 * Example (rows=3):
 * *****
 *  * *
 *   *
 */
void printPattern14(int rows) {
    int row, col, space;
    
    for (row = rows * 2 - 1; row >= 1; row -= 2) {
        for (space = rows * 2 - 3; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row || row == rows * 2 - 1)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 15: Hollow Diamond
 * Prints a hollow diamond shape
 * 
 * Example (rows=3):
 *   *
 *  * *
 * *   *
 *  * *
 *   *
 */
void printPattern15(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows * 2 - 1; row += 2) {
        for (space = rows * 2 - 3; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
    
    for (row = rows * 2 - 3; row >= 1; row -= 2) {
        for (space = rows * 2 - 3; space >= row; space -= 2)
            printf(" ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 16: Number Triangle with Boundary Values
 * Prints a triangle with 1s on the boundary and other numbers inside
 * 
 * Example (rows=3):
 *     1
 *   1   1
 * 1   2   1
 */
void printPattern16(int rows) {
    int row, col, space, o = 0;
    
    for (row = 1; row <= rows; row++) {
        for (space = rows - 1; space >= row; space--)
            printf("  ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row)
                printf("1   ");
            else
                printf("%d   ", o);
        }
        
        o++;
        printf("\n");
    }
}

/**
 * Pattern 17: Number Diamond
 * Prints a diamond pattern with numbers
 * 
 * Example (rows=3):
 *   
 *   1
 *  212
 * 32123
 *  212
 *   1
 */
void printPattern17(int rows) {
    int row, col, space;
    int num;
    
    // Upper half of the diamond
    for (row = 1; row <= rows; row++) {
        num = row;
        
        // Print spaces
        for (space = 1; space <= rows - row; space++) {
            printf(" ");
        }
        
        // First part - decreasing numbers
        for (col = 1; col <= row; col++) {
            printf("%d", num--);
            if (num == 0) num = 1; // Prevent zero
        }
        
        // Second part - increasing numbers (excluding the middle)
        num = 2;
        for (col = 1; col < row; col++) {
            printf("%d", num++);
        }
        
        printf("\n");
    }
    
    // Lower half of the diamond
    for (row = rows - 1; row >= 1; row--) {
        num = row;
        
        // Print spaces
        for (space = 1; space <= rows - row; space++) {
            printf(" ");
        }
        
        // First part - decreasing numbers
        for (col = 1; col <= row; col++) {
            printf("%d", num--);
            if (num == 0) num = 1; // Prevent zero
        }
        
        // Second part - increasing numbers (excluding the middle)
        num = 2;
        for (col = 1; col < row; col++) {
            printf("%d", num++);
        }
        
        printf("\n");
    }
}

/**
 * Pattern 18: Butterfly Pattern
 * Prints a butterfly/hourglass pattern with asterisks
 * 
 * Example (rows=3):
 * ******
 * **  **
 * *    *
 * **  **
 * ******
 */
void printPattern18(int rows) {
    int row, col, space;
    
    // Upper half
    for (row = 1; row <= rows; row++) {
        // Left stars
        for (col = 1; col <= rows - row + 1; col++) {
            printf("*");
        }
        
        // Middle spaces
        for (space = 1; space <= (row - 1) * 2; space++) {
            printf(" ");
        }
        
        // Right stars
        for (col = 1; col <= rows - row + 1; col++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Lower half (excluding the middle row which is already printed)
    for (row = rows - 1; row >= 1; row--) {
        // Left stars
        for (col = 1; col <= rows - row + 1; col++) {
            printf("*");
        }
        
        // Middle spaces
        for (space = 1; space <= (row - 1) * 2; space++) {
            printf(" ");
        }
        
        // Right stars
        for (col = 1; col <= rows - row + 1; col++) {
            printf("*");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 19: Inverted Butterfly Pattern
 * Prints an inverted butterfly pattern
 * 
 * Example (rows=3):
 * *    *
 * **  **
 * ******
 * **  **
 * *    *
 */
void printPattern19(int rows) {
    int row, col, space;
    
    for (row = rows * 2 - 2; row >= 0; row -= 2) {
        for (col = rows * 2 - 2; col >= row; col -= 2)
            printf("*");
        
        for (space = 1; space <= row; space++)
            printf(" ");
        
        for (col = rows * 2 - 2; col >= row; col -= 2)
            printf("*");
        
        printf("\n");
    }
    
    for (row = 2; row <= rows * 2 - 2; row += 2) {
        for (col = rows * 2 - 2; col >= row; col -= 2)
            printf("*");
        
        for (space = 1; space <= row; space++)
            printf(" ");
        
        for (col = rows * 2 - 2; col >= row; col -= 2)
            printf("*");
        
        printf("\n");
    }
}

/**
 * Pattern 20: Hollow Square
 * Prints a hollow square (only outline)
 * 
 * Example (rows=3):
 * ***
 * * *
 * ***
 */
void printPattern20(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= rows; col++) {
            if (col == 1 || row == 1 || col == rows || row == rows)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 21: Number Sequence Triangle
 * Prints a triangle with sequential numbers
 * 
 * Example (rows=3):
 * 1  
 * 2  3  
 * 4  5  6
 */
void printPattern21(int rows) {
    int row, col, o = 1;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= row; col++) {
            if (o < 10)
                printf("%d  ", o++);
            else
                printf("%d ", o++);
        }
        
        printf("\n");
    }
}

/**
 * Pattern 22: Binary Pattern
 * Prints a triangle with alternating 1s and 0s
 * 
 * Example (rows=3):
 * 1 
 * 0 1 
 * 1 0 1
 */
void printPattern22(int rows) {
    int row, col;
    
    for (row = 1; row <= rows; row++) {
        for (col = 1; col <= row; col++) {
            if ((row % 2 == 1 && col % 2 == 1) || (row % 2 == 0 && col % 2 == 0))
                printf("1 ");
            else
                printf("0 ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 23: Double Hollow Triangle
 * Prints two hollow triangles side by side
 * 
 * Example (rows=3):
 *   *    *
 * *   *    *
 */
void printPattern23(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows * 2 - 1; row += 4) {
        for (space = rows * 2 - 3; space >= row; space -= 4)
            printf("  ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        for (space = rows * 2 - 3; space >= row; space -= 4)
            printf("  ");
        
        for (space = rows * 2 - 3; space >= row; space -= 4)
            printf("  ");
        
        for (col = 1; col <= row; col++) {
            if (col == 1 && row == rows * 2 - 1)
                printf(" ");
            else if (col == 1 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 24: Hollow Butterfly
 * Prints a hollow butterfly pattern (only outline)
 * 
 * Example (rows=3):
 * *    *
 * **  **
 * * ** *
 * * ** *
 * **  **
 * *    *
 */
void printPattern24(int rows) {
    int row, col, space;
    
    for (row = rows * 2 - 2; row >= 0; row -= 2) {
        for (col = rows * 2 - 2; col >= row; col -= 2) {
            if (col == rows * 2 - 2 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        for (space = 1; space <= row; space++)
            printf(" ");
        
        for (col = rows * 2 - 2; col >= row; col -= 2) {
            if (col == rows * 2 - 2 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
    
    for (row = 0; row <= rows * 2 - 2; row += 2) {
        for (col = rows * 2 - 2; col >= row; col -= 2) {
            if (col == rows * 2 - 2 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        for (space = 1; space <= row; space++)
            printf(" ");
        
        for (col = rows * 2 - 2; col >= row; col -= 2) {
            if (col == rows * 2 - 2 || col == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 25: Shifted Hollow Square
 * Prints a hollow square with left alignment shifting
 * 
 * Example (rows=3):
 *   ***
 *  * *
 * ***
 */
void printPattern25(int rows) {
    int row, col, space;
    
    for (row = 1; row <= rows; row++) {
        for (space = rows - 1; space >= row; space--)
            printf(" ");
        
        for (col = 1; col <= rows; col++) {
            if (col == 1 || col == rows || row == 1 || row == rows)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
}

/**
 * Pattern 26: Staircase Number Pattern
 * Prints a descending staircase with increasing numbers
 * 
 * Example (rows=3):
 * 1 1 1
 * 2 2
 * 3
 */
void printPattern26(int rows) {
    int row, col, o = 1;
    
    for (row = rows; row >= 1; row--) {
        for (col = 1; col <= row; col++)
            printf("%d ", o);
        
        o++;
        printf("\n");
    }
}