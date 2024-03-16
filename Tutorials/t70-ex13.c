#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex 13 - command line calculator
// use of atoi or atof or something like that
int main(int argc, char const *argv[])
{
    printf("The value of agrc is %d\n", argc);

    int a, b, res;
    printf("Type of operation: %s\n", argv[1]);
    a = atoi(argv[2]);
    b = atoi(argv[3]);
    printf("value are %s and %s\n", argv[2], argv[3]);
    printf("value are %d and %d\n", a, b);

    if (strcmp(argv[1], "add") == 0)
    {
        printf("adding\n");
        res = a + b;
        printf("%d\n", res);
    }
    else if (strcmp(argv[1], "substract") == 0)
    {
        printf("substracting\n");
        res = a - b;
        printf("%d\n", res);
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("multiplying\n");
        res = a * b;
        printf("%d\n", res);
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        printf("dividing\n");
        res = a / b;
        printf("%d\n", res);
    }
    else
    {
        printf("Invalid operation entered.\n");
    }

    return 0;
}