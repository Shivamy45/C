#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[50], c[50];
    printf("Enter name a\n");
    // fgets(a, 50, stdin);
    // scanf("%s", &a);
    gets(a);
    printf("Enter name b\n");
    // fgets(b, 50, stdin);
    gets(b);
    // scanf("%s", &b);
    printf("Enter name c\n");
    // fgets(c, 50, stdin);
    // scanf("%s", &c);
    gets(c);
    printf("%c%c%c", c[strlen(c) - 4], b[strlen(b) - 3], a[strlen(a) - 2]);

    return 0;
}
