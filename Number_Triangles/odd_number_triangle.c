#include <stdio.h>
#include <stdlib.h>

void printTriangle(int maxRows);
void clearInputBuffer();

int main()
{
    int choice = 0;
    int maxRows = 0;
    
    printf("=== Number Triangle Generator ===\n");
    
    while (1) {
        // Display menu
        printf("\nMENU:\n\n");
        printf("1. Generate number triangle\n");
        printf("2. Exit program\n");
        printf("\nEnter your choice (1-2): ");
        
        // Get user choice with error handling
        if (scanf("%d", &choice) != 1) {
            printf("\nError: Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }
        
        switch (choice) {
            case 1: {
                int validInput = 0;
                
                while (!validInput) {
                    // Get maximum rows from user
                    printf("\nEnter maximum number of rows (odd number, 1-99) or 0 to return to menu: ");
                    if (scanf("%d", &maxRows) != 1) {
                        printf("\nError: Invalid input. Please enter a number.\n");
                        clearInputBuffer();
                        continue;
                    }
                    
                    // Option to return to main menu
                    if (maxRows == 0) {
                        break;
                    }
                    
                    // Validate input
                    if (maxRows < 1) {
                        printf("\nError: Number of rows cannot be less than 1.\n");
                    } else if (maxRows > 99) {
                        printf("\nError: Number of rows cannot exceed 99.\n");
                    } else {
                        if (maxRows % 2 == 0) {
                            printf("\nNote: Converting %d to %d for odd-row pattern.\n", 
                                  maxRows, maxRows + 1);
                            maxRows += 1;
                        }
                        
                        // Print the triangle
                        printTriangle(maxRows);
                        validInput = 1;
                    }
                }
                break;
            }
            
            case 2:
                printf("\nThank you for using the Number Triangle Generator. Goodbye!\n");
                return 0;
                
            default:
                printf("\nError: Invalid choice. Please select 1 or 2.\n");
        }
        
        clearInputBuffer();
    }
    
    return 0;
}

// Function to print the number triangle
void printTriangle(int maxRows) {
    // Declare variables for row and column counters
    int row, col;
    
    // Print header for the triangle display
    printf("\n--- Number Triangle ---\n\n");
    
    // Outer loop: iterate through odd numbers only (1,3,5...)
    for(row = 1; row <= maxRows * 2; row += 2)
    {   
        // Inner loop: for each row, print odd numbers from 1 to current row value
        for(col = 1; col <= row; col += 2)
        {     
            printf("%d  ", col);
        }
        // Move to next line after completing each row
        printf("\n");
    }
}

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}