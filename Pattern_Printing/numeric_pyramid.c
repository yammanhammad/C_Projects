#include<stdio.h>
#include<conio.h>

void main(void)
{
    int r,c,s;

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(r==5)
            printf("%d ",c);
            
            else if(c==1||c==r)
            printf("%d ",c);
            
            else
            printf("  ");
        }
        printf("\n");
    }
    _getch();
}