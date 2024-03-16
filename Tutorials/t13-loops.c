#include <stdio.h>
/* Loops
    1.do while
    2.while
    3.for     */

// do while loop
int main()
{
    int i = 0;
    int a = 7;
    do
    {
        printf("%d\n", i);
        i = i * 2 + 1;
    } while (i < a);

    // multiplication table using do while loop

    int b, num = 1;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &b);
    printf("Table of %d:\n", b);
    do
    {
        printf("%d x %d = %d\n", b, num, b * num);
        num = num + 1;
    } while (num < 11);

    return 0;
}