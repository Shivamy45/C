#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex10 - matrix multiplication
int main()
{
    // matrix a
    int r1;
    printf("How many rows you want in matrix 'a'\n");
    scanf("%d", &r1);

    int c1;
    printf("How many columns you want in matrix 'a'\n");
    scanf("%d", &c1);

    int matrixa[r1][c1];
    printf("Enter the value of your matrix 'a' in matrix form:\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            // printf("Enter the value at %d %d element of your matrix 'a':\n", i + 1, j + 1);
            scanf("%d", &matrixa[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < r1; i++)
    {
        printf("|");
        for (int j = 0; j < c1; j++)
        {
            printf(" %d ", matrixa[i][j]);
        }
        printf("|\n");
    }

    // matrix b
    int r2;
    printf("How many rows you want in matrix 'b'\n");
    scanf("%d", &r2);

    int c2;
    printf("How many columns you want in matrix 'b'\n");
    scanf("%d", &c2);

    int matrixb[c2][r2];
    printf("Enter the value of your matrix 'b' in matrix form:\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            // printf("Enter the value at %d %d element of your matrix 'b':\n", i + 1, j + 1);
            scanf("%d", &matrixb[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < r2; i++)
    {
        printf("|");
        for (int j = 0; j < c2; j++)
        {
            printf(" %d ", matrixb[i][j]);
        }
        printf("|\n");
    }
    printf("\n");

    // multiplication of matrix 'a' and 'b'
    int resultantm[r1][c2];
    if (c1 == r2)
    {
        // logic of the code
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int temp = 0;
                for (int k = 0; k < c1; k++)
                {
                    temp += (matrixa[i][k] * matrixb[k][j]);
                }
                resultantm[i][j] = temp;
            }
        }
        // printing the multiplication
        printf("Printing the resultant matrix...\n");
        for (int i = 0; i < r1; i++)
        {
            printf("|");
            for (int j = 0; j < c2; j++)
            {
                printf(" %d ", resultantm[i][j]);
            }
            printf("|\n");
        }
    }
    else
    {
        printf("Matrices cannot be multiplied because column of 'a' is not equal to rows of 'b'\n");
    }

    return 0;
}