#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex 13 - command line calculator
// use of atoi or atof or something like that

int add(int num[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}
int sub(int num[])
{
    int diff = 0;
    for (int i = 0; i < 5; i++)
    {
        diff = num[i] - diff;
    }
    return diff;
}
int mul(int num[])
{
    int mul = 1;
    for (int i = 0; i < 5; i++)
    {
        mul = mul * num[i];
    }
    return mul;
}
float divide(int num[])
{
    float div = 1;
    for (int i = 0; i < 5; i++)
    {
        div = num[i] / div;
    }
    return div;
}

int main(int argc, char *argv[])
{
    printf("The value of agrc is %d\n", argc);

    char *operation;
    operation = argv[1];
    int num[10];
    if (argc > 2)
    {
        for (int i = 0; i < (argc - 2); i++)
        {
            num[i] = atoi(argv[i + 2]);
        }
        for (int i = 0; i < (argc - 2); i++)
        {
            printf("%d\n", num[i]);
        }
        // performing the operation
        int res;
        if (strcmp(operation, "add") == 0)
        {
            printf("adding\n");
            res = add(num);
            printf("%d\n", res);
        }
        else if (strcmp(operation, "substact") == 0)
        {
            printf("substracting\n");
            res = sub(num);
            printf("%d\n", res);
        }
        else if (strcmp(operation, "multiply") == 0)
        {
            printf("multiplying\n");
            res = mul(num);
            printf("%d\n", res);
        }
        else if (strcmp(operation, "divide") == 0)
        {
            printf("dividing\n");
            float res = divide(num);
            printf("%.2f\n", res);
        }
        else
        {
            printf("Invalid operation entered.\n");
        }
    }

    return 0;
}