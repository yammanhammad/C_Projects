#include<stdio.h>

void main(void)
{
    long num,fact,temp;

    printf("============== Program to Find Factorial of a Number ==============\n");

    for(;num!=0;)
    {
        fact=1;

        printf("\nPlease enter a whole number to find its factorial or 0 to exit: ");
        scanf("%ld",&num);

        if(num!=0)
        {
            if(num<0)
            printf("\nError: Factorial a non-positive number.");

            else
            {
                temp=num;

                for(;temp>0;temp--)
                fact*=temp;

                printf("\n%ld! = %ld\n",num,fact);
            }
        }
    }
}