#include <stdio.h>
// ex4 - Star pattern
// conclusion - think the problem and try to solve it in your mind first
void starpattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversedstarpattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void jointstarpattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n, a;
    printf("Which star pattern you want\n");
    printf("Enter 0 for Triangular Star Pattern\n");
    printf("Enter 1 for Reversed Triangular Star Pattern\n");
    printf("Enter 2 for joint Triangular Star Pattern\n");
    scanf("%d", &n);
    printf("How many rows of stars you want\n");
    scanf("%d", &a);
    
    switch (n)
    {
    case 0:
        starpattern(a);
        break;
    case 1:
        reversedstarpattern(a);
        break;
    case 2:
        jointstarpattern(a);
        break;

    default:
        break;
    }

    return 0;
}