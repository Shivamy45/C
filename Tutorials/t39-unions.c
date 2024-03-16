#include <stdio.h>
#include <string.h>
// Unions
typedef union student
{
    int id;
    float marks;
    char name[40];
}ust;

int main()
{
    ust s1,s2,s3;
    s1.id = 1;
    strcpy(s1.name, "Shivam");
    s1.marks = 80.9;
    
    s2.id = 2;
    s2.marks = 70.5;
    strcpy(s2.name, "Harry");

    strcpy(s3.name, "Nawaz");
    s3.marks = 98.2;
    s3.id = 3;

    // the thing we code in last will get true everything else will be false
    printf("Id - %d \n",s1.id);
    printf("Name - %s \n",s1.name);
    printf("Marks - %2.1f \n",s1.marks);

    printf("Id - %d \n",s2.id);
    printf("Name - %s \n",s2.name);
    printf("Marks - %2.1f \n",s2.marks);
    
    printf("Id - %d \n",s3.id);
    printf("Name - %s \n",s3.name);
    printf("Marks - %2.1f \n",s3.marks);
    
    
    return 0;
}