#include <stdio.h>

int main()
{
    int r,c,s;
    
    for(r=1; r<=7;r+=2)
    {  
        for(s=7;s>r;s-=2)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {     
            printf("*");
        }
        printf("\n");
    }

    for(r=5; r>=1;r-=2)
    {  
        for(s=7;s>r;s-=2)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {     
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}