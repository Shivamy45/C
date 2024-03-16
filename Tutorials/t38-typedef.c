#include <stdio.h>
#include <string.h>
// typedef
// typedef <previous_name> <alias_name>
int main()
{
    int *a, b; // problem - this will make 'a' a pointer and 'b' a integer
    int c = 90;
    a = &c;
    b = c;
    printf("This is value of a %x\n", a);
    printf("This is value of b %x\n", b);
    // solving the prblm by using typedef function
    typedef int *intptr; // that star is for int not intptr
    intptr x, y;
    x = &c;
    y = &c;
    printf("This is value of a %x\n", x);
    printf("This is value of b %x\n", y);
    // typedef float ft;
    // ft a = 8.09;
    // printf("%.2f",a);

    return 0;
}