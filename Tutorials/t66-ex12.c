#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex12- Automates receipt generator
/*
Thanks {{name}} for purchasing {{item}} from our {{outlet}} outlet.
Please visit our {{outlet}} outlet for any kind of problems. We plan to serve you again soon.
*/
int main()
{
    FILE *ptr = NULL;

    char name[15];
    printf("Enter your customer's name:\n");
    gets(name);
    char item[15];
    printf("Enter the product that got purchased:\n");
    gets(item);
    char outlet[30];
    printf("Enter your outlet name:\n");
    gets(outlet);
    char text[60];
    fscanf(ptr, "%s", text);
    printf("~%s~\n", text);

    ptr = fopen("t66-letter.txt", "w");

    fprintf(ptr, "%s \"%s\"", text, name);

    strcpy(text, "for purchasing");
    fprintf(ptr, " %s '%s'", text, item);

    strcpy(text, "from our");
    fprintf(ptr, " %s '%s'", text, outlet);

    strcpy(text, "outlet.\nPlease visit our");
    fprintf(ptr, " %s '%s'", text, outlet);

    strcpy(text, "outlet for any kind of problems. We plan to serve you again soon.");
    fprintf(ptr, " %s\n", text);

    fclose(ptr);

    return 0;
}