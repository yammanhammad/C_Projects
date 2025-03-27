#include <stdio.h>

/**
 * Program to print a triangle pattern with alternating numbers and letters
 * Rows are 1, 3, 5, 7 in length
 */
int main(void)
{
    int row, col, num;
    char letter;

    // Loop through rows (1, 3, 5, 7)
    for (row = 1; row <= 8; row += 2)
    {
        col = 1;
        num = 1;
        letter = 'A';

        // Print alternating numbers and letters in each row
        while (col <= row)
        {
            if (col % 2 == 1)
                printf("%d ", num);  // Print number with space for odd columns
            else
                printf("%c ", letter);  // Print letter with space for even columns

            num++;
            letter++;
            col++;
        }

        printf("\n");
    }
    
    return 0;
}