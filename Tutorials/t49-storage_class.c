#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "t49-trial.c" // this will include that file and we can use it 

/*
Storage classes
1. Auto Storage - local variables - garbage value initialized
2. External Storage - global variables - 0 value initialized
    extern variable
3. Static Storage - 0 value initialized - remembers its last value on recalling
4. Register Storage - allocated the value in CPU instead of memory for fast use
*/
int b = 2; // External Storage Class
int func()
{
    int c = 3; // Auto Storage Class
    printf("%d\n", c);
    extern int b; // Entern variable < External Storage Class >
    b = b + 2;
    printf("%d\n", b);
    static int d = 4; // Static Storage Class
    d++;
    return d;
}
int main()
{
    int a = 1; // Auto Storage Class
    printf("%d\n", a);
    printf("%d\n", b);       // this is global initial value
    register int d = func(); // Register Storage Class
    printf("%d\n", d);
    printf("%d\n", trial); // this is declared t49-trial.c
    trial = 7;             // we can manipulate the value of the variable
    printf("%d\n", trial); // this is new value of int declared in trial.c

    return 0;
}