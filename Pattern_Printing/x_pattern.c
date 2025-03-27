#include <stdio.h>
#include <stdlib.h>

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to clear screen in a more portable way
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    printf("\n");
}

int main(void)
{
    int row, column, height;
    char choice = ' ';

    do {
        clearScreen();

        printf("Please enter the height of X (positive integer): ");
        
        // Input validation with error handling
        if (scanf("%d", &height) != 1) {
            printf("\a\nError: Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }
        
        clearInputBuffer(); // Clear any remaining input
        
        printf("\n");

        if (height > 0) {
            // Print the X pattern
            for (row = 1; row <= height; row++) {
                for (column = 1; column <= height; column++) {
                    if (row == column || column == height - row + 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        } else {
            printf("\a\nError: Please enter a positive integer.\n");
        }

        printf("\nPress 'q' to quit or any other key followed by Enter to continue: ");
        choice = getchar();
        
    } while (choice != 'q' && choice != 'Q');

    return 0;
}