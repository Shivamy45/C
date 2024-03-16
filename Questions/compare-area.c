#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// qsort is used to compare the area of triangles
struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

double area(triangle tr)
{
    int p = (tr.a + tr.b + tr.c) / 2;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

int compare(const void *a, const void *b)
{
    triangle *t1 = (triangle *)a;
    triangle *t2 = (triangle *)b;
    double area1 = area(*t1);
    double area2 = area(*t2);
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
    qsort(tr , n, sizeof(triangle), compare);
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




/*
3
7 24 25
5 12 13
3 4 5

3 4 5
5 12 13
7 24 25
*/

