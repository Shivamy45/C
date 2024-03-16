#include <stdio.h>
// functions

// this is written to declare the sum function is somewhere below
// function with arguments and return value
int sum(int a, int b);

// function with arguments but no return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// function with no arguments but return value
int input()
{
    int i;
    printf("enter a value\n");
    scanf("%d", &i);
    return i;
}

// function with no arguments and no return value
void self()
{
    int s;
    printf("enter your 4 digit password\n");
    scanf("%d", &s);
    printf("your password has been reset.\n");
}

int main()
{
    // functions in C

    int a, b, c, n;
    a = 9;
    b = 8;
    // c = sum(a, b);
    // printf("%d\n", c);
    // printstar(5);
    // c = input();
    self();
    // printf("The value you entered is %d", c);

    /*  QUIZ:- Withour argument and without return value function  */

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}