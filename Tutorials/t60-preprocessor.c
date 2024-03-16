#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// other preprocessor directives
/*
# define // defining something as find & replace
# include // include files
# undef // undefines a macro
# ifdef // return true if its defined
# ifndef // return true if its not defined
# if
# else if
# else
# pragma // To issue some special commands to the compiler
*/
int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line No is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    return 0;
}