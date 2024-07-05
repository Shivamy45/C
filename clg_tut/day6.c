#include <stdio.h>
#include <string.h>

// struct marks
// {
//     float m1;
//     float m2;
//     float m3;
// };
// struct Student
// {
//     int roll;
//     char name[20];
//     struct marks m;
// };

// struct Employees
// {
//     int employeeId;
//     char name[20];
//     float salary;
// };

// struct Student
// {
//     int roll_no;
//     float marks;
//     char name[20];
// };

// union Student1
// {
//     int roll;
//     float marks;
//     char name[20];
// };

struct Book
{
    char name[20];
    int price;
    int number;
};
union Book1
{
    char name[20];
    int price;
    int number;
};

int main()
{
    // struct Student s1;
    // struct Student s2;
    // s1.roll = 1;
    // s1.marks = 90.5;
    // strcpy(s1.name, "Shivam");
    // s2.roll = 2;
    // s2.marks = 80.5;
    // strcpy(s2.name, "Vedant");
    // printf("%d %s %.2f\n", s1.roll, s1.name, s1.marks);
    // printf("%d %s %.2f\n", s2.roll, s2.name, s2.marks);
    // printf("%lu", sizeof(s1));
    // struct Employees e[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the daya of %d employee", i);
    //     scanf("%d", &e->employeeId);
    //     scanf("%s", e->name);
    //     scanf("%f", &e->salary);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d %s %.2f\n", e->employeeId, e->name, e->salary);
    // }

    // struct Student s;
    // s.roll = 1;
    // strcpy(s.name, "Shivam");
    // s.m.m1 = 40.6;
    // s.m.m2 = 50.8;
    // s.m.m3 = 70.3;
    // printf("%d. %s\n%.1f %.1f %.1f\n", s.roll, s.name, s.m.m1, s.m.m2, s.m.m3);

    // struct Student s;
    // printf("%lu\n", sizeof(s));
    // union Student1 s1;
    // printf("%lu\n", sizeof(s1));

    // struct Book b;
    // printf("Enter the name of the book\n");
    // scanf("%s", b.name);
    // printf("Enter the price of the book\n");
    // scanf("%d", &b.price);
    // printf("Enter the number of books\n");
    // scanf("%d", &b.number);
    // printf("%s %d %d\n", b.name, b.price, b.number);

    // union Book1 b1;
    // printf("Enter the name of the book\n");
    // scanf("%s", b1.name);
    // printf("Enter the price of the book\n");
    // scanf("%d", &b1.price);
    // printf("Enter the number of books\n");
    // scanf("%d", &b1.number);
    // printf("%s %d %d\n", b1.name, b1.price, b1.number);

    return 0;
}
