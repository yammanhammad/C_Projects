#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool continueProgram = true;
    char choice;
    
    // Main program loop
    while (continueProgram) {
        int characterCount = 0;
        char currentChar;
        
        printf("\n===== CHARACTER COUNTER =====\n\n");
        printf("Please write a word or sentence (press Enter when done):\n");
        
        // Reset input buffer
        fflush(stdin);
        
        // Count characters until Enter key (newline) is pressed
        while ((currentChar = getchar()) != '\n') {
            // Only count if not at EOF (handles Ctrl+D or similar)
            if (currentChar != EOF) {
                characterCount++;
            } else {
                break; // Exit if EOF encountered
            }
        }
        
        printf("\nYou entered %d characters.\n", characterCount);
        
        // Ask if user wants to continue
        printf("\nDo you want to count more characters? (y/n): ");
        scanf(" %c", &choice);
        
        // Clear input buffer after scanf
        while (getchar() != '\n');
        
        // Check if user wants to exit
        if (choice != 'y' && choice != 'Y') {
            continueProgram = false;
        }
    }
    
    printf("\nThank you for using the Character Counter program!\n");
    return 0;
}