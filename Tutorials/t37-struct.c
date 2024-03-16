#include <stdio.h>
#include <string.h>
// Structures
struct student
{
    int id;
    float marks;
    char name[40];
};
struct student Abhay, Shivam, Lilawati; // we can also declare by using this // global variable

void printstruct()
{
    printf("Roll no. - %d\n", Abhay.id);
    printf("Name - %s\n", Abhay.name);
    printf("Marks - %2.1f\n", Abhay.marks);
    printf("\n");
    printf("Roll no. - %d\n", Shivam.id);
    printf("Name - %s\n", Shivam.name);
    printf("Marks - %2.1f\n", Shivam.marks);
    printf("\n");
    printf("Roll no. - %d\n", Lilawati.id);
    printf("Name - %s\n", Lilawati.name);
    printf("Marks - %2.1f\n", Lilawati.marks);
    printf("\n");
}

int main()
{
    // struct student Abhay, Shivam, Lilawati; // local variable - but doing this you cannot use this outside main
    Abhay.id = 1;
    Abhay.marks = 70.8;
    strcpy(Abhay.name, "Abhay");
    Shivam.id = 2;
    Shivam.marks = 90.6;
    strcpy(Shivam.name, "Shivam");
    Lilawati.id = 3;
    Lilawati.marks = 80.3;
    strcpy(Lilawati.name, "Lilawati");

    printstruct();

    return 0;
}