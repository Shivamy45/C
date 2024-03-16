#include <stdio.h>
// operaters in C programming
int main()
{
    int a, b;
    printf("Enter a\n");
    scanf("%d", &a);

    printf("Enter b\n");
    scanf("%d", &b);

    printf("a&b = %d\n", a & b);
    printf("a&&b = %d\n", a && b);
    printf("a||b = %d\n", a || b);
    printf("!b = %d\n", !b);

    return 0;
}