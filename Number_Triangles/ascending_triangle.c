#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Prints an ascending number triangle with the specified number of rows.
 * Each row contains increasing consecutive numbers starting from 1.
 */
void printAscendingTriangle(int rows) {
    int row, col, num = 1; // Initialize row, column, and starting number
    
    // Outer loop for each row
    for(row = 1; row <= rows; row++) {
        // Inner loop for each column in the current row
        for(col = 1; col <= row; col++) {
            printf("%2d ", num++); // Print the current number with alignment
        }
        printf("\n"); // Move to the next line after each row
    }
}

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int rows;
    char choice = 'y';
    
    do {
        // Get user input
        printf("\nEnter the number of rows for the ascending triangle: ");
        if (scanf("%d", &rows) != 1) {
            printf("\nError: Invalid input. Please enter a valid integer.\n");
            clearInputBuffer();
            continue; // Skip to next iteration
        }
        clearInputBuffer(); // Clear buffer after successful read
        
        // Input validation
        if (rows <= 0) {
            printf("\nError: Number of rows must be greater than zero.\n");
            continue; // Skip to next iteration
        }
        
        printf("\nAscending Number Triangle:\n\n");
        
        // Call the function to print the triangle
        printAscendingTriangle(rows);
        
        // Ask user if they want to continue
        printf("\nDo you want to generate another triangle? (y/n): ");
        scanf(" %c", &choice);
        clearInputBuffer();
        
    } while (tolower(choice) == 'y');
    
    printf("\nThank you for using the triangle generator!\n\n");
    return 0; // Indicate successful program termination
}