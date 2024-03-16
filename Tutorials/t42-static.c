#include <stdio.h>
// Static variable

int a = 112; // global variable

int increment()
{
    static int a = 10; // if we run this function more than 1 type then it will ignore the static int a value
    printf("Value of formal  'a' is %d\n",a); // local value > formal value > global vlaue
    a = a + 5;
    return a+2; // a+1 then this will not be remembered by the static but if we do a++ it will remember
}

int main()
{
    printf("Value of global  'a' is %d\n", a);
    int a; // this is required when you don't want to change the global value
    a = increment();
    printf("Value of local 1 'a' is %d\n", a);
    a = increment();
    printf("Value of local 2 'a' is %d\n", a);


    return 0;
}