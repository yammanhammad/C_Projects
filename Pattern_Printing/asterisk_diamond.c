#include <stdio.h>
#include <stdlib.h>

void printDiamond(int size);

int main()
{
    int size;
    char choice = 'y';
    
    do {
        // Get user input with validation
        printf("\nEnter the size of diamond (positive odd number): ");
        if (scanf("%d", &size) != 1) {
            printf("\nInvalid input! Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Validate size is positive and odd
        if (size <= 0) {
            printf("\nSize must be greater than zero!\n");
            continue;
        } else if (size % 2 == 0) {
            printf("\nSize must be odd for a symmetric diamond!\n");
            continue;
        } else {
            // Print the diamond with valid size
            printf("\n");
            printDiamond(size);
        }
        
        // Clear input buffer
        while (getchar() != '\n');
        
        printf("\nDo you want to print another diamond? (y/n): ");
        scanf(" %c", &choice);
        // Clear input buffer again
        while (getchar() != '\n');
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}

void printDiamond(int size)
{
    int rows, columns, s;
    int spaces, stars;
    
    // Loop through all rows of the diamond
    for (rows = 1; rows <= size; rows++) {
        // Calculate spaces and stars for each row
        if (rows <= (size + 1) / 2) {
            // Top half (including middle row)
            stars = 2 * rows - 1;
            spaces = (size - stars) / 2;
        } else {
            // Bottom half
            stars = size - 2 * (rows - (size + 1) / 2);
            spaces = (size - stars) / 2;
        }
        
        // Print spaces
        for (s = 1; s <= spaces; s++) {
            printf(" ");
        }
        
        // Print stars
        for (columns = 1; columns <= stars; columns++) {
            printf("*");
        }
        
        printf("\n");
    }
}