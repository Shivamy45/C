#include <stdio.h>
// call by value & reference
void swap(int *w, int *x)
{
    int v = *w; // this is a local function
    *w = *x;
    *x = v;
}
// quiz function
void sum_diff(int *c, int *d)
{
    int e = *c;
    int f = *d;
    *c = e + f;
    *d = e - f;
}
int main()
{
    int y = 2, z = 3; // these are actual/global parameter
    printf("Values are %d and %d\n", y, z);
    swap(&y, &z); // call by reference
    printf("Values are %d and %d\n", y, z);

    // quiz
    int a, b;
    printf("Assign a value to a\n");
    scanf("%d", &a);
    printf("Assign a value to b\n");
    scanf("%d", &b);
    printf("The values of a and b are %d and %d respectively/n", a, b);
    sum_diff(&a, &b);
    printf("The values of a and b after running the function are %d and %d respectively/n", a, b);

    return 0;
}