#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * Clears the terminal screen in a cross-platform way
 */
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/**
 * Prints a border pattern with specified dimensions
 * Outer border is filled with "00" and inner area with "11"
 */
int main(void)
{
    int currentRow, currentColumn;
    int numberOfRows, numberOfColumns;
    char userInput;
    int scanResult;
    
    do {
        // Clear screen at the start of each iteration
        clearScreen();
        
        // Get input with error handling
        printf("Enter the number of rows and columns (e.g., 5 7): ");
        scanResult = scanf("%d %d", &numberOfRows, &numberOfColumns);
        
        // Clear input buffer to prevent issues with bad input
        while (getchar() != '\n');
        
        // Check if scanf was successful and inputs are valid
        if (scanResult != 2) {
            printf("\n\nError: Please enter two numeric values.\n");
        }
        else if (numberOfRows <= 0 || numberOfColumns <= 0) {
            printf("\nError: Please enter only positive numbers for rows and columns.\n");
        }
        else if (numberOfRows > 100 || numberOfColumns > 100) {
            printf("\nError: Values too large. Please use numbers below 100 for better display.\n");
        }
        else {
            // Print the pattern
            printf("\nPattern with %d rows and %d columns:\n\n", numberOfRows, numberOfColumns);
            
            for (currentRow = 1; currentRow <= numberOfRows; currentRow++) {
                for (currentColumn = 1; currentColumn <= numberOfColumns; currentColumn++) {
                    // Print border elements (first/last row or first/last column)
                    if (currentRow == 1 || currentColumn == 1 || 
                        currentRow == numberOfRows || currentColumn == numberOfColumns) {
                        printf("00 ");
                    } else {
                        printf("11 ");
                    }
                }
                printf("\n");
            }
        }
        
        // Ask user if they want to continue
        printf("\nPress 0 to exit or any other key to continue: ");
        userInput = getchar();
        printf("\n");
        
    } while (userInput != '0');
    
    return 0;
}