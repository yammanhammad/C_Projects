#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void pattern1(void);
void pattern2(void);
void pattern3(void);
void pattern4(void);
void clearScreen(void);

int main(void)
{
    int choice;
    char runAgain = 'y';
    
    do {
        // Display menu
        printf("\n===== PATTERN PRINTING PROGRAM =====\n");
        printf("1. Increasing Number Pattern\n");
        printf("2. Decreasing Number Pattern\n");
        printf("3. Diamond-like Number Pattern\n");
        printf("4. Star Pyramid\n");
        printf("5. Print All Patterns\n");
        printf("0. Exit\n");
        printf("Enter your choice (0-5): ");
        
        // Input validation
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Process user choice
        switch (choice) {
            case 0:
                printf("Exiting program. Goodbye!\n");
                return 0;
            case 1:
                pattern1();
                break;
            case 2:
                pattern2();
                break;
            case 3:
                pattern3();
                break;
            case 4:
                pattern4();
                break;
            case 5:
                printf("\n=== All Patterns ===\n\n");
                pattern1();
                pattern2();
                pattern3();
                pattern4();
                break;
            default:
                printf("Invalid choice. Please enter a number between 0-5.\n");
                break;
        }
        
        // Ask to run again
        printf("\nDo you want to print more patterns? (y/n): ");
        scanf(" %c", &runAgain);
        
        if (runAgain == 'y' || runAgain == 'Y') {
            clearScreen();
        }
        
    } while (runAgain == 'y' || runAgain == 'Y');
    
    return 0;
}

// Increasing number pattern
void pattern1(void)
{
    int r, c;
    
    printf("\nPattern 1: Increasing Number Pattern\n");
    
    r = 1;
    while (r <= 4) {
        c = 1;
        while (c <= r) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
        r++;
    }
}

// Decreasing number pattern
void pattern2(void)
{
    int r, c;
    
    printf("\nPattern 2: Decreasing Number Pattern\n");
    
    r = 4;
    while (r >= 1) {
        c = 1;
        while (c <= r) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
        r--;
    }
}

// Diamond-like number pattern
void pattern3(void)
{
    int r, c;
    
    printf("\nPattern 3: Diamond-like Number Pattern\n");
    
    // Upper part
    r = 4;
    while (r >= 1) {
        c = 1;
        while (c <= r) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
        r--;
    }
    
    // Lower part
    r = 2;
    while (r <= 4) {
        c = 1;
        while (c <= r) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
        r++;
    }
}

// Star pyramid pattern
void pattern4(void)
{
    int r, c, s;
    
    printf("\nPattern 4: Star Pyramid\n");
    
    r = 1;
    while (r <= 7) {
        // Print spaces - fixed spacing algorithm
        s = (7 - r) / 2;
        while (s > 0) {
            printf(" ");
            s--;
        }
        
        // Print stars
        c = 1;
        while (c <= r) {
            printf("*");
            c++;
        }
        
        printf("\n");
        r += 2;
    }
}

// Function to clear screen (platform independent)
void clearScreen(void)
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}