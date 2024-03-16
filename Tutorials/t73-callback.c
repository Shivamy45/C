#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Function Pointers - Callback functions
int sum(int a, int b)
{
    return a + b;
}
float avg(int a, int b)
{
    return (float)(a + b) / 2;
}
void printHelloWorld(int (*fptr)(int, int))
{
    printf("Hello World\n");
    printf("The sum is %d\n", fptr(4, 6));
}
void greetGoodMrng(int (*fptr)(int, int))
{
    printf("Good moring\n");
    printf("The sum is %d\n", fptr(4, 5));
}
// Quiz
void greetGoodMorning(float (*fptr2)(int, int))
{
    printf("Good morning\n");
    printf("The avg is %.1f\n", fptr2(4, 5));
}
void greetGoodAfterNoon(float (*fptr2)(int, int))
{
    printf("Good afternoon\n");
    printf("The avg is %.1f\n", fptr2(4, 5));
}

int main()
{
    int (*fptr)(int, int);
    fptr = sum;
    // greetGoodMrng(fptr);
    // printHelloWorld(fptr);

    // Quiz - greetGm and greetAn and gives two num average
    float (*fptr2)(int, int);
    fptr2 = avg;
    greetGoodMorning(fptr2);
    greetGoodAfterNoon(fptr2);

    return 0;
}