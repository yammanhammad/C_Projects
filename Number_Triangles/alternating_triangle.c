#include<stdio.h>
#include<conio.h>

void main(void)
{
    int r,c,num;
    char alph;

    r=1;

    while(r<=8)
    {
        c=1;
        num=1;
        alph='A';

        while(c<=r)
        {
            if(c%2==1)
            printf("%d",num);
            else
            printf("%c",alph);

            num++;
            alph++;
            c++;
        }

        printf("\n");
        
        r+=2;
    }

    _getch();
}