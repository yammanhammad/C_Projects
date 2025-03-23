#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main(void)
{
	int choice,loop;
    double num1,num2,result;

    start:

    system("cls");

    printf("============================= CALCULATOR =============================\n\n");
    printf("\n\t-- AVAILABLE OPERATIONS --\n");
    printf("\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Power of a Value\n 6. Square Root\n 7. Logarithm\n 8. Exponent\n 9. Sine\n10. Cosine\n11. Tangent\n");
    printf("\nPlease enter the serial number of the operation you want to perform: ");
    fflush(stdin);
    scanf("%d",&choice);

    if(choice>=1 && choice<=11)
    {
        if(choice<6)
        {
            printf("\nEnter two numbers: ");
            scanf("%lf %lf",&num1,&num2);
        }
        else if(choice<9)
        {
            printf("\nEnter a number: ");
            scanf("%lf",&num1);
        }
        else
        {
            printf("\nEnter an angle in radians: ");
            scanf("%lf",&num1);
        }

        switch(choice)
        {
            case 1:
            result=num1+num2;
            printf("\nResult: %lf",result);
            break;

            case 2:
            result=num1-num2;
            printf("\nResult: %lf",result);
            break;

            case 3:
            result=num1*num2;
            printf("\nResult: %lf",result);
            break;

            case 4:
            if(num2==0)
            {
                printf("\nError: Division by zero.\n");
                printf("\nPress 0 to exit or any other key to restart: ");
                loop=getche();

                if(loop==48)
                goto terminate;
                else
                goto start;
            }
            else
            {
                result=num1/num2;
                printf("\nResult: %lf",result);
            }
            break;

            case 5:
            result=pow(num1,num2);
            printf("\nResult: %lf",result);
            break;

            case 6:
            if(num1<0)
            {
                printf("\nError: Square root of a negative number.\n");
                printf("\nPress 0 to exit or any other key to restart: ");
                loop=getche();

                if(loop==48)
                goto terminate;
                else
                goto start;
            }
            else
            {
                result=sqrt(num1);
                printf("\nResult: %lf",result);
            }
            break;

            case 7:
            if(num1<=0)
            {
                printf("\nError: Log of a non-positive number.\n");
                printf("\nPress 0 to exit or any other key to restart: ");
                loop=getche();

                if(loop==48)
                goto terminate;
                else
                goto start;
            }
            else
            {
                result=log10(num1);
                printf("\nResult: %lf",result);
            }
            break;

            case 8:
            result=exp(num1);
            printf("\nResult: %lf",result);
            break;

            case 9:
            result=sin(num1);
            printf("\nResult: %lf",result);
            break;

            case 10:
            result=cos(num1);
            printf("\nResult: %lf",result);
            break;

            case 11:
            result=tan(num1);
            printf("\nResult: %lf",result);
            break;
        }
    }
    else
    printf("\nError: Invalid operator.");
    printf("\n\nPress 0 to exit or any other key to restart: ");
    loop=getche();

    if(loop==48)
    goto terminate;
    else
    goto start;

    terminate:
}