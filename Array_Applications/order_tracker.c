
 //Order Tracking System - Tracks food orders and displays summary

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Initialize order counters for each menu item
    int menu[3] = {0, 0, 0};
    int order = 0;
    int orderNumber = 1;
    int validInput;

    // Clear screen (platform-dependent, comment out if not needed)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Display menu
    printf("======== Menu ========\n\n");
    printf("1) Burger\n2) Biryani\n3) Chai\n0) Exit\n\n");

    // Order input loop
    do {
        printf("\nPlease enter the serial number of order %d (0 to finish): ", orderNumber);
        validInput = scanf("%d", &order);

        // Input validation
        if (validInput != 1) {
            printf("\nError: Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        // Process order
        if (order >= 1 && order <= 3) {
            menu[order-1]++;
            orderNumber++;
            printf("Item added to order. Current totals: Burger: %d, Biryani: %d, Chai: %d\n", 
                menu[0], menu[1], menu[2]);
        } else if (order != 0) {
            printf("\nError: Please enter a number between 0 and 3\n");
        }

    } while (order != 0);

    // Display order summary
    printf("\n====== Order Summary ======\n");
    printf("Burger:  %d\n", menu[0]);
    printf("Biryani: %d\n", menu[1]);
    printf("Chai:    %d\n", menu[2]);
    printf("Total items: %d\n", menu[0] + menu[1] + menu[2]);

    printf("\nPress Enter to exit...");
    getchar(); // Consume any remaining newline
    getchar(); // Wait for user input

    return 0;
}