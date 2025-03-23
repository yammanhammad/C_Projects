#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void)
{
    int r,c,rows,cols,l;
    
    start:

    system("cls");

    printf("\n================== Pattern: Cross Inside a Square ==================\n");
    printf("\nPlease enter the number of rows and columns separated by a space: ");
    scanf("%d %d", &rows, &cols);

    if(rows<1 || cols<1)
    {
        printf("\nError: Non-Positive Number\n");
        printf("\nPress 0 to exit or any other key to continue: ");
        l=getche();
        
        if(l=='0')
        goto terminate;

        else
        goto start;
    }
    else
    {
        for(r=1;r<=rows;r++)
        {
            for(c=1;c<=cols;c++)
            {
                if(r==1||c==1||r==rows||c==rows||r==c||c==(rows-r+1))
                printf("*");

                else
                printf(" ");
            }
            printf("\n");
        }
    }
    
    printf("\n\nPress 0 to exit or any other key to continue: ");
    l=getche();
        
    if(l=='0')
    goto terminate;

    else
    goto start;

    terminate:
}