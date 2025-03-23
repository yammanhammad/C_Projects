#include<stdio.h>
#include<conio.h>

void main(void)
{
    int r,c,a=1,s;

    r=1;
    while(r<=4)
    {
        c=1;

        while(c<=r)
        {
            printf("%d ",c);
            c++;
        }

        printf("\n");
        r++;
    }

    printf("\n\n");

    r=4;

    while(r>=1)
    {
        c=1;

        while(c<=r)
        {
            printf("%d ",c);
            c++;
        }

        printf("\n");
        r--;
    }

    printf("\n\n");

    r=4;
    while(r>=1)
    {
        c=1;

        while(c<=r)
        {
            printf("%d ",c);
            c++;
        }

        printf("\n");
        r--;
    }
    r=2;
    while(r<=4)
    {
        c=1;

        while(c<=r)
        {
            printf("%d ",c);
            c++;
        }

        printf("\n");
        r++;
    }

    printf("\n\n");

    r=1;
    while(r<=7)
    {
        s=5;
        while(s>=r)
        {
            printf(" ");
            s-=2;
        }
        
        c=1;
        while(c<=r)
        {
            printf("*");
            c++;
        }

        printf("\n");
        r+=2;
    }
    _getch();
}