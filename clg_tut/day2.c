#include <stdio.h>
// WAP to calculate sum of first n natural numbers.
// WAP to display following series.
// 1,4,9,16 ..... n
// WAP to check whether a number is prime or not
// WAP to print day of a week according to the entered number
// (Monday -> Sunday)
int fact(int a)
{
    int mul = 1;
    for (int i = 1; i <= a; i++)
    {
        mul *= i;
    }
    return mul;
}
int recfact(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
void palindrome(int n)
{
    int r, new_n = 0, temp = n;

    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        new_n = 10 * new_n + r;
    }
    printf("%d\n", new_n);
    if (new_n == temp)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("%d", sum);

    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", i * i);
    // }

    // int n;
    // int prime = 1;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // for (int i = 2; i < n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if (prime == 1)
    // {
    //     printf("Prime number");
    // }
    // else
    // {
    //     printf("Not prime");
    // }

    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);

    // switch (n)
    // {
    // case 1:
    //     printf("Monday");
    //     break;

    // case 2:
    //     printf("Tuesday");
    //     break;

    // case 3:
    //     printf("Wednesday");
    //     break;

    // case 4:
    //     printf("Thrusday");
    //     break;

    // case 5:
    //     printf("Friday");
    //     break;

    // case 6:
    //     printf("Saturday");
    //     break;

    // case 7:
    //     printf("Sunday");
    //     break;

    // default:
    //     printf("Wrong input");
    //     break;
    // }

    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int ans = fact(n);
    // printf("Factorial of %d is %d", n, ans);

    // WAP to check whether entered number is palindrome or not
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // palindrome(n);

    // WAP to swap numbers
    // int a = 2, b = 3;
    // printf("Before swapping a = %d and b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swapping a = %d and b = %d\n", a, b);

    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int ans = recfact(n);
    // printf("Factorial of %d is %d", n, ans);

    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int ans = fib(n);
    // printf("Fibonacci of %d is %d", n, ans);

    

    return 0;
}