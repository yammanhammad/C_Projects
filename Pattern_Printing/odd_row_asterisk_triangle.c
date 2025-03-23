#include <stdio.h>

int main()
{
    int r,c;

    for(r=1; r<=7;r+=2)
    {     
        for(c=1;c<=r;c++)
        {     
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}