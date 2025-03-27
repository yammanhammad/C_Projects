#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

long long calculateDigitSum(long long number) {
    long long sum = 0;
    long long tempNumber = llabs(number); // Handle negative numbers using llabs

    // Extract digits and add them
    while (tempNumber > 0) {
        sum += tempNumber % 10;  // Add the last digit to sum
        tempNumber /= 10;        // Remove the last digit
    }
    
    return sum;
}

int isValidInteger(const char *str) {
    // Check if empty string
    if (str == NULL || *str == '\0') {
        return 0;
    }
    
    // Check for optional sign
    if (*str == '+' || *str == '-') {
        str++;
    }
    
    // String must contain at least one digit after sign
    if (*str == '\0') {
        return 0;
    }
    
    // Check if all remaining characters are digits
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    
    return 1;
}

int main(void) {
    char inputBuffer[100];
    long long number;
    char continueChoice = 'y';
    
    printf("\n=== Digit Sum Calculator ===\n");
    
    do {
        // Get user input
        printf("\nEnter an integer (or 0 to exit): ");
        
        // Read input as string
        if (fgets(inputBuffer, sizeof(inputBuffer), stdin) == NULL) {
            printf("\nError: Failed to read input.\n");
            continue;
        }
        
        // Remove newline character if present
        size_t len = strlen(inputBuffer);
        if (len > 0 && inputBuffer[len-1] == '\n') {
            inputBuffer[len-1] = '\0';
        }
        
        // Validate input
        if (!isValidInteger(inputBuffer)) {
            printf("\nError: Invalid input. Please enter a valid integer.\n");
            continue;
        }
        
        // Convert to long long integer
        number = atoll(inputBuffer);
        
        // Exit condition
        if (number == 0) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }
        
        // Calculate and display the sum of digits
        long long digitSum = calculateDigitSum(number);
        printf("\nNumber: %lld\nSum of digits: %lld\n", number, digitSum);
        
        // Ask if user wants to continue
        printf("\nDo you want to calculate another sum? (y/n): ");
        fgets(inputBuffer, sizeof(inputBuffer), stdin);
        continueChoice = inputBuffer[0];
        
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
    printf("\nThank you for using the Digit Sum Calculator!\n\n");
    return 0;
}