#include <stdio.h>
// string
// null character is \0
void printstr(char str1[])
{
    int i = 0;
    printf("Using function printstr\n");
    while (str1[i] != '\0')
    {
        printf("%c", str1[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[7] = "shivam";
    char str1[7] = {'s', 'h', 'i', 'v', 'a', '\0', 'm'}; // the value after null character will not be included
    printf("This is first %s.\n", str);
    printf("This is second %s.\n", str1);
    printstr(str1);
    // input string
    char strinput[40];
    gets(strinput); // takes input
    printf("Using printf function\n%s\n", strinput);
    printf("Using put function\n");
    puts(strinput); // prints input with a \n
    printstr(strinput);

    return 0;
}