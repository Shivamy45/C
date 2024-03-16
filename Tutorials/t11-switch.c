#include <stdio.h>
// switch - this is better than if else
int main()
{
    int a;
    printf("pick a number between 1-5:\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("value is 1");
        break;
    case 2:
        printf("value is 2");
        break;
    case 3:
        printf("value is 3");
        break;
    case 4:
        printf("value is 4");
        break;
    case 5:
        printf("value is 5");
        break;

    default:
        printf("value is >5");
        break;
    }

    return 0;
}