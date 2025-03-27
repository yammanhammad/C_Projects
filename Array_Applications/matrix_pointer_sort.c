#include <stdio.h>
#include <stdlib.h>

// Function to print a 2D array using pointers
void poin2darr(int *(*e)[2][2]);

int main(void)
{
    // Declare and initialize two 2x2 matrices
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 1}, {-1, 0}};
    int c[2][2]; // Result matrix for a + b
    int *x[2][2]; // Pointers to elements of matrix a
    int *y[2][2]; // Pointers to elements of matrix b
    int *z[2][2]; // Pointers to elements of matrix c and later sorted array
    int d[4];     // Array to store flattened matrix elements for sorting
    int i, j, k = 0, temp;

    // Initialize pointers to elements of matrix a
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            x[i][j] = &a[i][j];
    }

    // Print matrix a
    printf("Matrix A:\n");
    poin2darr(&x);
    

    // Initialize pointers to elements of matrix b
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            y[i][j] = &b[i][j];
    }

    // Print matrix b
    printf("Matrix B:\n");
    poin2darr(&y);

    // Add matrices a and b element-wise to get matrix c
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            c[i][j] = *x[i][j] + *y[i][j];
    }

    // Initialize pointers to elements of matrix c
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            z[i][j] = &c[i][j];
    }

    // Print matrix c (a + b)
    printf("Matrix C (A + B):\n");
    poin2darr(&z);

    // Flatten matrix c into array d
    k = 0;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            d[k++] = *z[i][j];
    }

    // Sort array d using bubble sort
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            if(d[j] > d[j+1]) {
                temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
            }
        }
    }

    // Update pointers to point to the sorted elements
    k = 0;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            z[i][j] = &d[k++];
    }

    // Print the sorted matrix
    printf("Sorted Matrix:\n");
    poin2darr(&z);

    return 0;
}

// Function to print a 2D array using pointers
void poin2darr(int *(*e)[2][2])
{
    int i, j;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", *((*e)[i][j]));
        printf("\n");
    }
    printf("\n");
}