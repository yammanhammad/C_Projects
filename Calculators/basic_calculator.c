#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void add(void);
void sub(void);
void mul(void);
void divi(void);

void add(void)
{
    float a,b,sum;

    printf("\nPlease enter two numbers sparated by a space: ");
    scanf("%f %f",&a,&b);

    sum=a+b;

    printf("\n%.3f + %.3f = %.3f\n",a,b,sum);
}
void sub(void)
{
    float a,b,diff;

    printf("\nPlease enter two numbers separatd by a space: ");
    scanf("%f %f",&a,&b);

    diff = a - b;
    
    printf("\n%.3f - %.3f = %.3f\n",a,b,diff);
}
void mul(void)
{
    float a,b,prod;

    printf("\nPlease enter two numbers separated by a space: ");
    scanf("%f %f",&a,&b);

    prod=a*b;

    printf("\n%.3f x %.3f = %.3f\n",a,b,prod);
}
void divi(void)
{
    float a,b,quot;

    printf("\nPlease enter two numbers separated by a space: ");
    scanf("%f %f",&a,&b);

    quot=a/b;

    printf("\n%.3f / %.3f = %.3f\n",a,b,quot);
}

void main(void)
{
    char op,choice;

    start:

    system("cls");

    printf("======================= BASIC CALCULATOR =======================\n\n");
    printf("\nPlease enter the operation you want to perform (+,-,x,/): ");
    fflush(stdin);
    scanf("%c",&op);

    switch (op)
    {
        case '+':
            add();
            break;
        case '-':
            sub();
            break;
        case 'x':
            mul();
            break;
        case '/':
            divi();
            break;
        default:
            printf("\n\nError: Undefined Operator");
            break;
    }

    printf("\n\nPlease press 0 to exit or any other key to continue: ");
    choice=getche();

    if(choice!='0')
    goto start;
}