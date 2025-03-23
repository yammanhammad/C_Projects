#include<stdio.h>
#include<conio.h>

void main(void)
{
    int r,c,s,o,row,n;

    printf("===== PATTERN 1 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 2 =====\n\n");

    for(r=1;r<=5;r++)   //  STARTING & ENDING POINTS SHOULD BE EQUAL TO THE NUMBER OF COLUMNS IN THOSE ROWS
    {
        for(c=1;c<=r;c++)   //  CONSTANT
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 3 =====\n\n");

    for(r=5;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 4 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        printf("%d ",c);

        printf("\n");
    }

    printf("\n===== PATTERN 5 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }
    for(r=4;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 6 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)   //  IF THE SPACES ARE DECREASING, SPACING LOOP IS THE OPPOSITE OF THE ROWS LOOP
        printf(" ");
        
        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 7 =====\n\n");

    for(r=5;r>=1;r--)
    {
        for(s=4;s>=r;s--)   //  IF THE SPACES ARE INCREASING, SPACING LOOP IDENTICAL TO THE ROWS LOOP
        printf(" ");
        
        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 8 =====\n\n");

    for(r=1;r<=9;r+=2)
    {
        for(s=8;s>=r;s-=2)  //  IF THE SPACES ARE DECREASING, SPACING LOOP IS THE OPPOSITE OF THE ROWS LOOP
        printf(" ");

        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 9 =====\n\n");

    for(r=9;r>=1;r-=2)
    {
        for(s=7;s>=r;s-=2)   //  IF THE SPACES ARE INCREASING, SPACING LOOP IDENTICAL TO THE ROWS LOOP
        printf(" ");

        for(c=1;c<=r;c++)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 10 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)  //  IF THE SPACES ARE DECREASING, SPACING LOOP IS THE OPPOSITE OF THE ROWS LOOP
        printf(" ");

        for(c=1;c<=r;c++)
        printf("* ");

        printf("\n");
    }

    printf("\n===== PATTERN 11 =====\n\n");

    for(r=5;r>=1;r--)
    {
        for(s=4;s>=r;s--)   //  IF THE SPACES ARE INCREASING, SPACING LOOP IDENTICAL TO THE ROWS LOOP
        printf(" ");

        for(c=1;c<=r;c++)
        printf("* ");

        printf("\n");
    }

    printf("\n===== PATTERN 12 =====\n\n");

    for(r=5;r>=1;r--)
    {
        for(s=4;s>=r;s--)
        printf(" ");

        for(c=1;c<=r;c++)
        printf("* ");

        printf("\n");
    }
    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)
        printf(" ");

        for(c=1;c<=r;c++)
        printf("* ");

        printf("\n");
    }

    printf("\n===== PATTERN 13 =====\n\n");

    for(r=1;r<=9;r+=2)
    {
        for(s=7;s>=r;s-=2)
        printf(" ");

        for(c=1;c<=r;c++)
        {
            if(c==1||c==r||r==9)
            printf("*");

            else
            printf(" ");
        }

        printf("\n");
    }

    printf("\n===== PATTERN 14 =====\n\n");

    for(r=9;r>=1;r-=2)
    {
        for(s=7;s>=r;s-=2)
        printf(" ");

        for (c=1;c<=r;c++)
        {
            if(c==1||c==r||r==9)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    printf("\n===== PATTERN 15 =====\n\n");

    for(r=1;r<=9;r+=2)
    {
        for(s=7;s>=r;s-=2)
        printf(" ");

        for(c=1;c<=r;c++)
        {
            if(c==1||c==r)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }
    for(r=7;r>=1;r-=2)
    {
        for(s=7;s>=r;s-=2)
        printf(" ");

        for(c=1;c<=r;c++)
        {
            if(c==1||c==r)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    printf("\n===== PATTERN 16 =====\n\n");

    o=0;
    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)
        printf("  ");

        for(c=1;c<=r;c++)
        {
            if(c==1||c==r)
            printf("1   ");

            else
            printf("%d   ",o);
        }
        o++;
        printf("\n");
    }

    printf("\n===== PATTERN 17 =====\n\n");
    
    row=1;

    for(r=1;r<=7;r+=2)
    {
        o=row++;

        for(s=5;s>=r;s-=2)
        printf(" ");

        n=0;

        for(c=1;c<=r;c++)
        {
            if(n==0)
            printf("%d",o--);

            else
            printf("%d",o++);

            if(o==1)
            n=1;
        }
        printf("\n");
    }

    row=3;

    for(r=5;r>=1;r-=2)
    {
        o=row--;

        for(s=5;s>=r;s-=2)
        printf(" ");

        n=0;

        for(c=1;c<=r;c++)
        {
            if(n==0)
            printf("%d",o--);

            else
            printf("%d",o++);

            if(o==1)
            n=1;
        }
        printf("\n");
    }

    printf("\n===== PATTERN 18 =====\n\n");

    for(r=0;r<=9;r+=2)
    {
        for(c=9;c>=r;c-=2)
        printf("*");

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=9;c>=r;c-=2)
        printf("*");

        printf("\n");
    }
    for(r=8;r>=0;r-=2)
    {
        for(c=8;c>=r;c-=2)
        printf("*");

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=8;c>=r;c-=2)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 19 =====\n\n");

    for(r=8;r>=0;r-=2)
    {
        for(c=8;c>=r;c-=2)
        printf("*");

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=8;c>=r;c-=2)
        printf("*");

        printf("\n");
    }
    for(r=2;r<=8;r+=2)
    {
        for(c=8;c>=r;c-=2)
        printf("*");

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=8;c>=r;c-=2)
        printf("*");

        printf("\n");
    }

    printf("\n===== PATTERN 20 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            if(c==1||r==1||c==5||r==5)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    printf("\n===== PATTERN 21 =====\n\n");

    o=1;

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(o<10)
            printf("%d  ",o++);

            else
            printf("%d ",o++);
        }

        printf("\n");
    }

    printf("\n===== PATTERN 22 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if((r%2==1 && c%2==1) || (r%2==0 && c%2==0))
            printf("1 ");

            else
            printf("0 ");
        }
        printf("\n");
    }

    printf("\n===== PATTERN 23 =====\n\n");

    for(r=1;r<=9;r+=4)
    {
        for(s=5;s>=r;s-=4)
        printf("  ");

        for(c=1;c<=r;c++)
        {
            if(c==1 || c==r)
            printf("*");

            else
            printf(" ");
        }

        for(s=5;s>=r;s-=4)
        printf("  ");

        for(s=5;s>=r;s-=4)
        printf("  ");

        for(c=1;c<=r;c++)
        {
            if(c==1 && r==9)
            printf(" ");

            else if(c==1 || c==r)
            printf("*");

            else
            printf(" ");
        }

        printf("\n");
    }

    printf("\n===== PATTERN 24 =====\n\n");

    for(r=8;r>=0;r-=2)
    {
        for(c=8;c>=r;c-=2)
        {
            if(c==8 || c==r)
            printf("*");

            else
            printf(" ");
        }

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=8;c>=r;c-=2)
        {
            if(c==8 || c==r)
            printf("*");

            else
            printf(" ");
        }

        printf("\n");
    }
    for(r=0;r<=8;r+=2)
    {
        for(c=8;c>=r;c-=2)
        {
            if(c==8 || c==r)
            printf("*");

            else
            printf(" ");
        }

        for(s=1;s<=r;s++)
        printf(" ");

        for(c=8;c>=r;c-=2)
        {
            if(c==8 || c==r)
            printf("*");

            else
            printf(" ");
        }

        printf("\n");
    }

    printf("\n===== PATTERN 25 =====\n\n");

    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)
        printf(" ");

        for(c=1;c<=5;c++)
        {
            if(c==1 || c==5 || r==1 || r==5)
            printf("*");

            else
            printf(" ");
        }

        printf("\n");
    }

    printf("\n===== PATTERN 26 =====\n\n");

    o=1;

    for(r=6;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        printf("%d ",o);

        o++;
        printf("\n");
    }

    _getch();
}