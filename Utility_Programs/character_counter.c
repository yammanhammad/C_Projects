#include <stdio.h>
#include<conio.h>

int main()
{
    int c=0;
    char ch;

    printf("Please write a word: ");

    while((ch=getche())!='\r')  // ch='enter key '!= enter key
    {
        c++;  // c=3+1=4
    }
    printf("\n\nYou entered %d characters.",c);  // iqra ---> 4
    return 0;
}