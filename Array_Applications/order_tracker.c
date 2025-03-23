#include<stdio.h>
#include<conio.h>

void main(void)
{
    int menu[3]={0,0,0},order,n=1;

    system("cls");

    printf("======== Menu ========\n\n");
    printf("1) Burger\n2) Biryani\n3) Chai\n\n");

    do
    {
        printf("\n\nPlease enter the serial number of the order number %d (or 0 to exit): ",n++);
        scanf("%d",&order);

        switch(order)
        {
            case 1:
            menu[order-1]++;
            break;

            case 2:
            menu[order-1]++;
            break;
            
            case 3:
            menu[order-1]++;
            break;
            
            default:
            printf("\n\nError: Invalid Input");
        }
    }while(order!=0);

    printf("\n\nTotal Number of Orders:\n\nBurger: %d\nBiryani: %d\nChai: %d",menu[0],menu[1],menu[2]);
    _getch();
}