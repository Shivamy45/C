#include <stdio.h>
// float print, char(s) and escapes
int main()
{
    const int a;
    // a=5; since this is wrong because a is const
    printf("Enter a numbar a\n");
    scanf("%d", &a);
    float b;
    printf("Enter a numbar b\n");
    scanf("%f", &b);
    // this below print is for number of space you want to give
    printf("The values are %d and %4.5f\n", a, b);
    /*
    %c for character
    %d integer
    %f float
    %l long
    %lf double
    %LF long double
    */

    /*
    \a for beep
    \b for backspace
    \n new line
    \t tab horizontal
    \v tab vertical
    \\ to print backlash
    \' single quote
    \" double quote
    */

    return 0;
}