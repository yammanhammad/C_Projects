#include<stdio.h>
#include<conio.h>

void main(void)
{
    float h;

    printf("Please enter your height in centimeters: ");
    scanf("%f",&h);

    printf("\n");

    if(h<=0)
    printf("Invalid Input");
    else if(h<160)
    printf("Very Short");
    else if(h<170)
    printf("Short");
    else if(h<180)
    printf("Average");
    else if(h<190)
    printf("Tall");
    else if(h<350)
    printf("Very Tall");
    else
    printf("Invalid Input");

    _getch();
}