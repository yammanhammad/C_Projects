#include<stdio.h>
#include<conio.h>

void main(void)
{
    int r,c,s;

    r=1;
    do
    {
        c=1;
        do
        {
            printf("*");
            c++;
        } while(c<=3);

        printf("\n");
        r++;
    } while (r<=3);

    printf("\n\n");

    r=1;
    do
    {
        s=7; 
        do
        {
            printf(" ");
            s-=2;
        } while(s>=r);

        c=1;
        do
        {
            printf("*");
            c++;
        } while(c<=r);

        printf("\n");
        r+=2;
    } while(r<=7);

    _getch();
}