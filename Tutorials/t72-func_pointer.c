#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int sum(int a, int b)
{
    return a + b;
}
// Function pointer - "file_type (*ptr)(input_type, input_type);"
int main()
{
    int (*funcPtr)(int, int); // creating a function pointer
    funcPtr = &sum; // pointing function to function pointer
    int d = (*funcPtr)(4, 6); // dereferncing funcPtr -> sum function
    printf("%d\n", d);



    return 0;
}