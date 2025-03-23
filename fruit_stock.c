/*Write a C program that initializes a single-dimensional array named "fruitStock" with the initial quantities of the following fruits:

Apples: 50
Bananas: 30
Oranges: 20
Grapes: 40
Mangoes: 35
Pineapples: 25
Watermelons: 15
Strawberries: 60
Kiwis: 10
Pears: 45
Your program should then prompt the store manager to enter the name of a fruit and the quantity sold. The program should update the stock quantity accordingly and display the updated stock of that fruit. The program should keep running until the manager enters a specific fruit name (e.g., "exit") to indicate the end of the day.

You can assume that the store manager will only enter valid fruit names from the provided list, and the quantity sold will be a positive integer.*/

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int fruitStock[10]={50,30,20,40,35,25,15,60,10,45},sold;
    char fname[6];

    do
    {
        printf("Please enter fruit name or \"exit\" to close the program: ");
        scanf("%s",&fname);
        printf("%s",fname);

        printf("\nPlease enter quantity sold: ");
        scanf("%d",&sold);

        if(fname=="Apples")
        {
            fruitStock[0]-=sold;
            printf("\n%s: %d",fname,fruitStock[0]);
        }
        else if (fname=="Bananas")
        {
            fruitStock[1]-=sold;
            printf("\n%s: %d",fname,fruitStock[1]);
        }
        else if(fname=="exit")
        {
            printf("\nInvalid Input");
        }
    } while (fname!="exit");

    _getch();
}