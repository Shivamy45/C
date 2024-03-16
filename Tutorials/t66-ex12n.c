#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex12 new method
/*
strstr(str, word)  - helps to find the word in the string
*/
char *replaceWord(char *str, char *oldWord, char *newWord)
{
    char *resStr;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);
    int i, count = 0;
    // counting the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over the oldWord
            i = i + oldWordLength - 1;
        }
    }
    // Making a new string to fit in replaced word
    resStr = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0; // to resuse 'i' otherwise we can also create an int variable
    while (*str)
    {
        // compare the sub string with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resStr[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resStr[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resStr[i] = '\0';

    return resStr;
}
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("t66-bill.txt", "r");
    FILE *ptr2 = NULL;
    ptr2 = fopen("t66-newbill.txt", "w");

    char str[200];
    fgets(str, 200, ptr);
    printf("The bill templete was:\n%s\n", str);

    // Call the replacement function and generate the bill
    char *bill = str;
    bill = replaceWord(bill, "{{name}}", "'Haary'");
    bill = replaceWord(bill, "{{item}}", "'Table Fan'");
    bill = replaceWord(bill, "{{outlet}}", "'Ram Laxmi Fan'");
    fprintf(ptr2, "%s", bill);
    printf("The bill is:\n%s\n", bill);
    printf("The generated bill has been written to the newbill.txt\n");


    fclose(ptr);
    fclose(ptr2);

    return 0;
}