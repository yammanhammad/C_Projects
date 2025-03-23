#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void)
{
    int r,c,l,h;

    do
    {
        system("cls");

        printf("\nPlease enter the height of X: ");
        fflush(stdin);
        scanf("%d",&h);

        printf("\n\n");

        if(h>0)
        {
            for(r=1;r<=h;r++)
            {
                for(c=1;c<=h;c++)
                {
                    if(r==c || c==h-r+1)
                    printf("*");

                    else
                    printf(" ");
                }
                printf("\n");
            }
        }
        else
        printf("\a\nError: Please enter a positive integer.");

        printf("\n\nPress 0 to exit or any other key to contnue: ");
        l = getche();
        
    } while (l!='0');
}