#include <stdio.h>

int main(void)
{
    int r, c, rows;
    char choice = 'y';
    
    do {
        // Get user input for number of rows
        printf("\nEnter the number of rows for the pyramid (1-25): ");
        if (scanf("%d", &rows) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Validate input
        if (rows < 1 || rows > 25) {
            printf("\nNumber of rows should be between 1 and 25.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Clear input buffer
        while (getchar() != '\n');
        
        // Print the pattern
        printf("\nNumeric Pyramid Pattern:\n\n");
        for (r = 1; r <= rows; r++)
        {
            for (c = 1; c <= r; c++)
            {
                if (r == rows || c == 1 || c == r)
                    printf("%2d ", c);
                else
                    printf("   ");
            }
            printf("\n");
        }
        
        // Ask user if they want to continue
        printf("\nDo you want to print another pattern? (y/n): ");
        scanf(" %c", &choice);
        
        // Clear input buffer
        while (getchar() != '\n');
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("\nThank you for using the pattern printer. Goodbye!\n\n");
    
    return 0;
}