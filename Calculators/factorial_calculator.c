/*
 * factorial_calculator.c
 * A program that calculates the factorial of a given number.
 * Handles input validation and warns about potential overflow for large numbers.
 */

#include<stdio.h>

int main(void)
{
    long num = 1;                 // Number for which factorial will be calculated
    unsigned long long fact, temp; // fact stores the factorial result, temp is used in calculation
    int scan_result;              // Stores the return value of scanf to check input validity

    printf("============== Program to Find The Factorial of a Number ==============\n");
    printf("Note: This program can accurately calculate factorials up to 20.\n");

    // Continue loop until user enters 0
    for(; num != 0;)
    {
        printf("\nPlease enter a whole number to find its factorial or 0 to exit: ");
        scan_result = scanf("%ld", &num);
        
        // Handle invalid input (non-numeric)
        if(scan_result != 1)
        {
            printf("\nError: Invalid input. Please enter a whole number.\n");
            // Clear the input buffer to prevent infinite loop
            while(getchar() != '\n');
        }
        // Handle negative numbers
        else if(num < 0)
        {
            printf("\nError: Factorial of a negative number is undefined.\n");
        }
        // Process valid positive numbers
        else if(num != 0)
        {
            fact = 1; // Initialize factorial result to 1
            temp = num;
            
            // Warn user about potential overflow for numbers > 20
            if(num > 20)
            {
                printf("\nWarning: Result may be incorrect due to integer overflow.\n");
            }
            
            // Calculate factorial: n! = n * (n-1) * ... * 2 * 1
            for(; temp > 0; temp--)
                fact *= temp;

            // Display the result
            printf("\n%ld! = %llu\n", num, fact);
        }
        // When num equals 0, the loop will exit
    }
    
    return 0;
}