/*Write a C program that initializes a single-dimensional array named "fruitStock" with the initial quantities of the following fruits:

Apples: 50
Bananas: 30
Oranges: 20
Grapes: 40
Mangoes: 35
Pineapples: 25
Watermelons: 15
Strawberries: 60
Kiwis: 10
Pears: 45
Your program should then prompt the store manager to enter the name of a fruit and the quantity sold. The program should update the stock quantity accordingly and display the updated stock of that fruit. The program should keep running until the manager enters a specific fruit name (e.g., "exit") to indicate the end of the day.

You can assume that the store manager will only enter valid fruit names from the provided list, and the quantity sold will be a positive integer.*/

#include<stdio.h>
#include<string.h>

/**
 * Fruit Stock Management Program
 * Tracks inventory of 10 different fruits and allows for sales updates
 */
int main(void)
{
    // Initialize fruit stock array with quantities for 10 fruits:
    // [0]Apples, [1]Bananas, [2]Oranges, [3]Grapes, [4]Mangoes,
    // [5]Pineapples, [6]Watermelons, [7]Strawberries, [8]Kiwis, [9]Pears
    int fruitStock[10]={50,30,20,40,35,25,15,60,10,45},sold;
    char fname[50]; // Variable to store fruit name input
    const char *fruitNames[10] = {"Apples", "Bananas", "Oranges", "Grapes", "Mangoes",
                                 "Pineapples", "Watermelons", "Strawberries", "Kiwis", "Pears"};
    int fruitIndex = -1;

    do
    {
        // Prompt user for fruit name or exit command
        printf("\n\nPlease enter fruit name or \"exit\" to close the program: ");
        scanf("%s", fname);
        
        // Check if user wants to exit
        if(strcmp(fname, "exit") == 0) {
            printf("\nExiting program...");
            
            // Print the entire inventory before exiting
            printf("\n\nFinal Inventory:");
            for(int i = 0; i < 10; i++) {
                printf("\n%s: %d", fruitNames[i], fruitStock[i]);
            }
            printf("\n");
            break;
        }
        
        // Find matching fruit
        fruitIndex = -1;
        for(int i = 0; i < 10; i++) {
            if(strcmp(fname, fruitNames[i]) == 0) {
                fruitIndex = i;
                break;
            }
        }

        // Process only if valid fruit found
        if(fruitIndex != -1) {
            // Get quantity of fruit sold with validation
            int valid_input = 0;
            while (!valid_input) {
                printf("\nPlease enter quantity sold: ");
                if (scanf("%d", &sold) != 1) {
                    // Clear input buffer if invalid input
                    while (getchar() != '\n');
                    printf("\nInvalid input. Please enter a number.\n");
                } else if (sold <= 0) {
                    printf("\nQuantity must be positive.\n");
                } else {
                    valid_input = 1;
                }
            }
            
            if(sold <= fruitStock[fruitIndex]) {
                fruitStock[fruitIndex] -= sold;
                printf("\n%s: %d", fruitNames[fruitIndex], fruitStock[fruitIndex]);
            } else {
                printf("\nNot enough %s in stock. Current stock: %d\n", 
                       fruitNames[fruitIndex], fruitStock[fruitIndex]);
            }
        } else {
            printf("\nInvalid fruit name. Please enter a fruit from the list.\n");
        }
        
    } while (1); // Loop will exit with break statement

    return 0;
}