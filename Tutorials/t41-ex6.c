#include <stdio.h>
#include <string.h>
// ex6 - removal of tags and gaps from a html code
// Input:  <h1> This is a heading </h1>
// Output: This is a heading
void parser(char *intake)
{
    int in;
    int new = 0;
    for (int i = 0; i < strlen(intake); i++)
    {
        if (intake[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (intake[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            intake[new] = intake[i];
            new ++;
        }
    }
    intake[new] = '\0';
    // Remove the trailing spaces from beginning
    while (intake[0] == ' ')
    {
        // Shift the string to the left to remove the spaces
        for (int i = 0; i < strlen(intake); i++)
        {
            intake[i] = intake[i + 1];
        }
    }
    // Remove the trailing spaces from beginning
    while (intake[strlen(intake) - 1] == ' ')
    {
        intake[strlen(intake) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>   This is a heading   </h1>";
    char string2[] = "<span>   This is a heading2   </span>";
    char input[50];
    printf("Enter a html code that you want without the tags\n");
    gets(input);

    parser(input);
    printf("The parsed string of the input is \"%s\" \n", input);
    parser(string);
    printf("The parsed string is \"%s\" \n", string);
    parser(string2);
    printf("The parsed string is \"%s\" \n", string2);

    return 0;
}