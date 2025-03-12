#include <stdio.h>

int main()
{
    int r, c, a = 1; // Initialize row, column, and starting number

    // Outer loop for each row
    for(r = 1; r <= 4; r++)
    {   
        // Inner loop for each column in the current row
        for(c = 1; c <= r; c++)
        {     
            printf("%d  ", a++); // Print the current number and increment it
        }
        printf("\n"); // Move to the next line after each row
    }    

    return 0; // Indicate successful program termination
}