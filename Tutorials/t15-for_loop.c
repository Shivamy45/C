#include <stdio.h>
// for loop
int main()
{
    // i + 1 = i++
    int i, j;
    for (i = 0, j = 1; j < 10; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    // Multiplication table using for loop
    int num;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);
    printf("Table of %d:\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, i * num);
    }

    return 0;
}