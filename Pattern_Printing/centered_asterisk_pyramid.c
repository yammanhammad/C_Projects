#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, row, col, space;
    char choice = 'y';
    
    do {
        // Get user input for pyramid height
        printf("\nEnter the height of the pyramid (positive number): ");
        if (scanf("%d", &height) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Validate input
        if (height <= 0) {
            printf("\nHeight must be positive. Please try again.\n");
            continue;
        }

        printf("\n");
        
        // Print the pyramid
        for (row = 1; row <= height; row++) {  
            // Print leading spaces
            for (space = 1; space <= height - row; space++) {
                printf(" ");
            }
            
            // Print asterisks (2*row-1 creates the 1,3,5,7... pattern)
            for (col = 1; col <= 2 * row - 1; col++) {     
                printf("*");
            }
            printf("\n");
        }
        
        // Ask user if they want to continue
        printf("\nDo you want to print another pyramid? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n'); // Clear input buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("\nProgram ended. Goodbye!\n\n");
    return 0;
}