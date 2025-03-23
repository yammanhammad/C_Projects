#include<stdio.h>
#include<conio.h>

void poin2darr(int *e[2][2]);

void main(void)
{
    int a[2][2]={{1,2},{3,4}}, b[2][2]={{5,1},{-1,0}}, c[2][2], *x[2][2], *y[2][2], *z[2][2], d[4], i, j, k=0, temp;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        x[i][j]= &a[i][j];
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d ",*x[i][j]);

        printf("\n");
    }

    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        y[i][j]= &b[i][j];
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d ",*y[i][j]);

        printf("\n");
    }

    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        c[i][j]= *x[i][j]+ *y[i][j];
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        z[i][j]= &c[i][j];
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d ",*z[i][j]);

        printf("\n");
    }

    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        d[k++]= *z[i][j];
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(d[j]>d[j+1])
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }

    k=0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        z[i][j]=&d[k++];
    }

    poin2darr(z);

    _getch();
}

void poin2darr(int *e[2][2])
{
    int i,j;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d ",*e[i][j]);

        printf("\n");
    }
}