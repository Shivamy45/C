#include <stdio.h>
int fib_recursive(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else if (number == 2)
    {
        return 1;
    }
    else
    {
        return (fib_recursive(number - 1) + fib_recursive(number - 2) + fib_recursive(number - 3));
    }
}
int main()
{
    // recursion method
    int n, a, b;
    // printf("Enter the number you want fibonacci series of\n");
    // scanf("%d", &n);
    // printf("The value of fibonacci number at position no. %d using recursive approach is %d\n", n, fib_recursive(n));
    printf("Enter the range you want fibonacci series of\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("The value of fibonacci number in range {%d,%d} is {",a,b);
    for (int i = a; i <= b; i++)
    {
        if (i == b)
        {
            printf("%d}", fib_recursive(i));
        }
        else
        {
            printf("%d, ", fib_recursive(i));
        }
    }

    return 0;
}
