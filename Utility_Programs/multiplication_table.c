#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, multiplier, rows;
    char choice = 'y';
    
    do {
        // Clear screen (platform independent approach)
        printf("\033[2J\033[H");
        
        // Get table number with validation
        do {
            printf("\nEnter the number for multiplication table: ");
            if (scanf("%d", &number) != 1) {
                printf("\nInvalid input! Please enter a number.\n");
                while (getchar() != '\n'); // Clear input buffer
                continue;
            }
            break;
        } while (1);
        
        // Get number of rows with validation
        do {
            printf("\nHow many rows do you want (1-100)? ");
            if (scanf("%d", &rows) != 1 || rows < 1 || rows > 100) {
                printf("\nInvalid input! Please enter a number between 1 and 100.\n");
                while (getchar() != '\n'); // Clear input buffer
                continue;
            }
            break;
        } while (1);
        
        // Print the table header
        printf("\n--- Multiplication Table for %d ---\n\n", number);
        
        // Generate the multiplication table
        for (multiplier = 1; multiplier <= rows; multiplier++) {
            printf("%d x %2d = %3d\n", number, multiplier, number * multiplier);
        }
        
        // Clear input buffer
        while (getchar() != '\n');
        
        // Ask if user wants to continue
        printf("\nDo you want to generate another table? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("\nThank you for using the multiplication table generator!\n\n");
    
    return 0;
}