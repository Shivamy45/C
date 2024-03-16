#include <stdio.h>
#include <string.h>
// string function and string.h liabrary
/*
string.h liabrary
strcat() - combine two strings
strlen() - show length of a string without the null character
strrev() - show reverse of a string
strcpy() - copy one string to another
strcmp() - compare two given strings - gives 0 when true and 1 when false
*/
int main()
{
    char s1[] = "shivam";
    char s2[] = "ayush";
    char s3[50];
    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reverse of s1 is %s\n", strrev(s1));
    // printf("The reverse of s2 is %s\n", strrev(s2));
    // strcpy(s3, strcat(s1, s2));
    // puts(s3);
    // printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2));
    // It will return 0 for equal 1 if s2 value is earlier -1 if s1 value is earlier

    // quiz
    char f1[30];
    char in[] = "is a friend of";
    char f2[30];
    printf("Enter 1st person name\n");
    gets(f1);
    printf("Enter 2nd person name\n");
    gets(f2);
    printf("%s %s %s\n", f2, in, f1);
    
    return 0;
}