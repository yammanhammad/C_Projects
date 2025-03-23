#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void)
{
    int r,c,rows,columns,choice;

    start:

    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&columns);

    if(rows<=0||columns<=0)
    {
        printf("\nPlease enter only natural numbers.");
        printf("\n\nPress 0 to exit or any other key to continue: ");
        choice=_getche();

        if(choice==48)
        goto terminate;
        else
        {
            system("cls");
            goto start;
        }
    }
    else
    {
        for(r=1;r<=rows;r++)
        {
            for(c=1;c<=columns;c++)
            {
                if(r==1||c==1||r==rows||c==columns)
                printf("00 ");
                
                else
                printf("11 ");
            }

            printf("\n");
        }
    }
    _getch();

    terminate:
}