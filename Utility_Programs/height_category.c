#include <stdio.h>

int main(void)
{
    float height;
    int scan_result;
    char continue_choice;
    
    do {
        
        printf("\nPlease enter your height in centimeters (or enter 0 to exit): ");
        scan_result = scanf("%f", &height);
        
        // Clear input buffer
        while (getchar() != '\n' && getchar() != EOF);

        // Handle invalid input
        if (scan_result != 1) {
            printf("\nInvalid input. Please enter a numeric value.\n");
            continue;
        }
        
        // Exit condition
        if (height == 0) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }
        
        printf("\n");
        
        // Categorize height
        if (height < 0) {
            printf("\nInvalid Input: Height cannot be negative.\n");
        } else if (height < 160) {
            printf("\nCategory: Very Short\n");
        } else if (height < 170) {
            printf("\nCategory: Short\n");
        } else if (height < 180) {
            printf("\nCategory: Average\n");
        } else if (height < 190) {
            printf("\nCategory: Tall\n");
        } else if (height < 350) {
            printf("\nCategory: Very Tall\n");
        } else {
            printf("\nInvalid Input: Height seems unrealistically tall.\n");
        }
        
        printf("\nDo you want to check another height? (y/n): ");
        scanf(" %c", &continue_choice);

        // Clear input buffer
        while (getchar() != '\n' && getchar() != EOF);
        
    } while (continue_choice == 'y' || continue_choice == 'Y');
    
    printf("\nThank you for using the height categorization program!\n");
    
    return 0;
}