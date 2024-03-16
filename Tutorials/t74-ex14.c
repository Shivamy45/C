#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// ex14 - area of circle
// pow means 'power of'
#define pie 3.14
float Edistance(int x1, int y1, int x2, int y2)
{
    // int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // we can do this simple step too.
    // return sqrt(a);
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // here 2 is power of (x2-x1) and (y2-y1)
}
float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    return pie * fptr(x1, y1, x2, y2);
}
int main()
{
    float (*fptr)(int, int, int, int);
    fptr = Edistance;
    int x1, y1, x2, y2;
    printf("Enter the coordinates of 1st point (x1, y1)\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("Enter the coordinates of 2nd point (x2, y2)\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    float radius = Edistance(x1, y1, x2, y2);
    float area = areaOfCircle(x1, y1, x2, y2, fptr);
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n\n", area);

    return 0;
}