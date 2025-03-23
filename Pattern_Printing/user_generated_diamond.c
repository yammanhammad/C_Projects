#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void)
{
    int r,c,s,h,l;

    do
    {
        system("cls");

        printf("\n============================== Diamond ==============================\n");
        printf("\nPlease enter the height of the diamond (odd natural number): ");
        fflush(stdin);
        scanf("%d",&h);

        printf("\n\n");

        if(h>0 && h%2==1)
        {
            for(r=1;r<=h;r+=2)
            {
                for(s=h-2;s>=r;s-=2)
                printf(" ");

                for(c=1;c<=r;c++)
                printf("*");

                printf("\n");
            }
            for(r=h-2;r>=1;r-=2)
            {
                for(s=h-2;s>=r;s-=2)
                printf(" ");

                for(c=1;c<=r;c++)
                printf("*");

                printf("\n");
            }
        }
        else
        printf("Error: You did not enter a positive natural odd number.\n");

        printf("\nPlease enter 0 to exit or any other key to continue: ");
        l=getche();

    } while(l!='0');
}