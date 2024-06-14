#include <stdio.h>
// ex3 - Fibonacci series
// conclusion - iterative method is better than recusive method
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
    else
    {
        return (fib_recursive(number - 1) + fib_recursive(number - 2));
    }
}
int main()
{
    // recursion method
    int n;
    printf("Enter the number you want fibonacci series of\n");
    scanf("%d", &n);
    printf("The value of fibonacci number at position no. %d using recursive approach is %d\n", n, fib_recursive(n));

    // iteration method
    if (n == 0)
    {
        printf("The value of fibonacci number at position no. %d using iterative approach is %d\n", n, n);
    }
    else if (n == 1)
    {
        printf("The value of fibonacci number at position no. %d using iterative approach is %d\n", n, n);
    }
    else
    {
        int a = 0;
        int b = 1;
        int c;
        for (int i = 0; i < (n - 1); i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The value of fibonacci number at position no. %d using iterative approach is %d\n", n, c);
    }

    return 0;
}
