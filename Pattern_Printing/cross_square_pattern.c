#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int currentRow, currentColumn, patternSize;
    char userChoice;
    int inputIsValid;
    
    do {
        // Clear screen (more portable approach)
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("\n================== Pattern: Cross Inside a Square ==================\n");
        printf("\nPlease enter the size of the pattern: ");
        
        // Improved input validation
        inputIsValid = scanf("%d", &patternSize);
        while(getchar() != '\n'); // Clear input buffer
        
        if(inputIsValid != 1 || patternSize < 1) {
            printf("\nError: Please enter a positive number\n");
        } else {
            // Print the pattern
            for(currentRow = 1; currentRow <= patternSize; currentRow++) {
                for(currentColumn = 1; currentColumn <= patternSize; currentColumn++) {
                    // Square outline or diagonal crosses
                    if(currentRow == 1 || currentColumn == 1 || 
                       currentRow == patternSize || currentColumn == patternSize || 
                       currentRow == currentColumn || currentColumn == (patternSize - currentRow + 1)) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        
        printf("\nPress 0 to exit or any other key to continue: ");
        userChoice = getchar();
        while(getchar() != '\n'); // Clear input buffer again
        
    } while(userChoice != '0');
    
    return 0;
}