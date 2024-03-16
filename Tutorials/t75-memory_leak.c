#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Memory Leak
// conclusion - always free the memory after use of dynamic memory
int main()
{
    int *ptr;
    for (int i = 0; i < 100000; i++)
    {
        printf("Hello World\n");
        ptr = malloc(2999 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        free(ptr); // without this we will encounter the memory leak
    }

    return 0;
}