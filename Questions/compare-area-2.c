#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// self - without using any inbuilt func
struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
double triArea(triangle tr)
{
    double p = (tr.a + tr.b + tr.c) / 2;
    double areaOfTriangle = sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
    return areaOfTriangle;
}

int compareTri(triangle a, triangle b)
{
    double area1 = triArea(a);
    double area2 = triArea(b);
    if (area1 > area2)
    {
        return 1;
    }
    else if (area1 < area2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void sort_by_area(triangle *tr, int n)
{
    /**
     * Sort an array a of the length n
     */
    double temp;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if ((compareTri(tr[i], tr[i + 1])) == 1)
            {
                // printf("changing %d to %d\n", i, i + 1);

                temp = tr[i].a;
                tr[i].a = tr[i + 1].a;
                tr[i + 1].a = temp;

                temp = tr[i].b;
                tr[i].b = tr[i + 1].b;
                tr[i + 1].b = temp;

                temp = tr[i].c;
                tr[i].c = tr[i + 1].c;
                tr[i + 1].c = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}