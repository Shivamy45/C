#include <stdio.h>
#include <string.h>
// ex7 - Drivers info
typedef struct driver
{
    char name[20], license[10], route[20];
    float kms;
} dr;
dr d1, d2, d3;

int n = 3; // number of drivers

void inputstr()
{
    printf("\nEnter details of first driver \n");
    printf("Enter your name - ");
    scanf("%s", &d1.name);
    printf("Enter your license no. - ");
    scanf("%s", &d1.license);
    printf("Enter your route - ");
    scanf("%s", &d1.route);
    printf("Enter your your distance - ");
    scanf("%f", &d1.kms);

    printf("\nEnter details of second driver \n");
    printf("Enter your name - ");
    scanf("%s", &d2.name);
    printf("Enter your license no. - ");
    scanf("%s", &d2.license);
    printf("Enter your route - ");
    scanf("%s", &d2.route);
    printf("Enter your your distance - ");
    scanf("%f", &d2.kms);

    printf("\nEnter details of third driver \n");
    printf("Enter your name - ");
    scanf("%s", &d3.name);
    printf("Enter your license no. - ");
    scanf("%s", &d3.license);
    printf("Enter your route - ");
    scanf("%s", &d3.route);
    printf("Enter number of kms - ");
    scanf("%f", &d3.kms);
    printf("\n");
}
void printstr()
{
    printf("Details of driver 1\n");
    printf("Name - %s\n", d1.name);
    printf("License no - %s\n", d1.license);
    printf("Route - %s\n", d1.route);
    printf("Distance travelled - %.1f\n", d1.kms);

    printf("Details of driver 2\n");
    printf("Name - %s\n", d2.name);
    printf("License no - %s\n", d2.license);
    printf("Route - %s\n", d2.route);
    printf("Distance travelled - %.1f\n", d2.kms);

    printf("Details of driver 3\n");
    printf("Name - %s\n", d3.name);
    printf("License no - %s\n", d3.license);
    printf("Route - %s\n", d3.route);
    printf("Distance travelled - %.1f\n", d3.kms);
}

int main()
{
    printf("DRIVER'S REGESTRATION WINDOW\n");
    // printf("Enter number of drivers\n");
    // scanf("%d", &n);
    printf("\nEnter the details of the drivers\n");
    inputstr();
    printstr();

    return 0;
}