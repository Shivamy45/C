#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (prime(n) == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    // WAP to swap numbers
    int a = 2, b = 3;
    printf("Before swapping a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping a = %d and b = %d\n", a, b);
}