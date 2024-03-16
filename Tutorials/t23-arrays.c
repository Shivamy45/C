#include <stdio.h>
// arrays
int main()
{
    // int marks[5]; this is 1d array
    // int marks[5] = {5, 7, 8, 4, 5}; this is to initialize and declare values
    // int marks1[4] = {1, 2, 3, 4};
    // int marks2[4] = {5, 6, 7, 8};

    // for (int i = 1; i < 6; i++)
    // {
    //     printf("Enter the value of %d student\n", i);
    //     scanf("%d", &marks[i]);
    //     for (int j = 1; j < 3; j++)
    //     {
    //         printf("Enter the 2nd value of %d student\n", i);
    //         scanf("%d", &marks[j]);
    //         break;
    //     }
    // }
    // for (int i = 0, j = 0, num = 1; j < 4; i++, j++, num++)
    // {
    //     printf("The marks of %d student is %d and %d.\n", num, marks1[i], marks2[j]);
    // }
    int marks[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
