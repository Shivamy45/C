#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
// max of integers
int maxh(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int maxx(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else if (d > a && d > b && d > c)
    {
        return d;
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter the numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int left_max = maxh(a, b);
    int right_max = maxh(c, d);
    printf("The max is %d\n", maxh(left_max, right_max));
    printf("The max is %d\n", maxx(a, b, c, d));

    return 0;
}