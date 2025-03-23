#include<stdio.h>
#include<conio.h>

void main(void)
{
    int n=1;

    while(n<=20)
    {
        printf("2 x %2d = %2d\n",n,n*2);
        n++;
    }

    _getch();
}