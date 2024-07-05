#include <stdio.h>
#include <string.h>

struct branch
{
    char branch[10];
};

union Student
{
    int roll;
    char name[20];
    struct branch b;
};

struct Class
{
    union Student s;
    char gender;
};

int main()
{
    // struct Class C;
    // C.s.roll = 1;
    // strcpy(C.s.name, "Shivam");
    // getchar();
    // strcpy(C.s.b.branch, "CSE");
    // C.gender = 'M';
    // printf("%d\n", C.s.roll);
    // printf("%s\n", C.s.name);
    // printf("%s\n", C.s.b.branch);
    // printf("%c\n", C.gender);
    FILE *p;
    char data[50];
    p = fopen("day7", "r");
    if (p == NULL)
    {
        printf("File failed to open");
    }
    else
    {
        printf("New file is open");
        while (fgets(data, 50, p) != NULL)
        {
            printf("%s", data);
        }
        fclose(p);
        printf("Data completely read from file");
        printf("File is closed");
    }

    return 0;
}