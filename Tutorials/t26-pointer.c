#include <stdio.h>
// pointer
int main()
{
    int a = 15;
    int *ptra = &a;
    int *ptrnull = NULL;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The value of null ptr is %p\n", ptrnull);

    return 0;
}