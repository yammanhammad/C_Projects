#include <stdio.h>
#include <stdlib.h>  // For EXIT_SUCCESS and EXIT_FAILURE

/**
 * Clears the input buffer to prevent scanf issues after invalid input
 */
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/**
 * Prints a number triangle with the specified number of rows
 * Each row contains numbers from 1 to the row number
 * @param rows The number of rows to print
 */
void printNumberTriangle(int rows) {
    int row, column;
    
    printf("\n");

    for (row = 1; row <= rows; row++) {
        for (column = 1; column <= row; column++) {
            printf("%d ", column);
            
            // Add extra space for single-digit numbers to improve alignment
            if (column < 10) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    int scanResult;
    
    while (1) {
        // Get user input for the number of rows
        printf("\nEnter the number of rows for the triangle (1-20, 0 to exit): ");
        scanResult = scanf("%d", &numRows);
        
        // Check if input was valid
        if (scanResult != 1) {
            printf("\nError: Please enter a valid number.\n");
            clearInputBuffer();  // Clear the input buffer
            continue;
        }
        
        // Check if user wants to exit
        if (numRows == 0) {
            printf("\nExiting program. Goodbye!\n\n");
            break;
        }
        
        // Validate input range
        if (numRows < 1) {
            printf("\nError: Number of rows cannot be negative.\n");
            continue;
        }
        
        if (numRows > 20) {
            printf("\nError: Number of rows is too large (maximum 20).\n");
            continue;
        }
        
        // Print the triangle
        printNumberTriangle(numRows);
        
        printf("\n"); // Add a blank line between triangles for better readability
    }
    
    return EXIT_SUCCESS;
}