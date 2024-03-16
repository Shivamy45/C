#include <stdio.h>
// ex2 - calculator
float convertor1(float km)
{
    return km * 0.6213711922;
}
float convertor2(float ft)
{
    return ft * 12;
}
float convertor3(float in)
{
    return in * 2.54;
}
float convertor4(float kg)
{
    return kg * 2.2;
}
float convertor5(float m)
{
    return m * 39.37;
}
int main()
{
    /*
    km to miles
    feet to inches
    inches to cm
    kg into pound
    meters to inches
    */
    float km, ft, in, kg, m;
    int a;

    while (1)
    {
        printf("\nSelect what you want to do:\n   1.km to miles\n   2.feet to inches\n   3.inches to cm\n   4.kg into pound\n   5.meters to inches\n   press 0 to quit\n");
        scanf("%d", &a);

        switch (a)
        {
        case 0:
            goto end;
            break;

        case 1:
            printf("Convert km to miles\n");
            scanf("%f", &km);
            printf("%.2f km = %.2f miles\n", km, convertor1(km));
            break;

        case 2:
            printf("Convert feet to inches\n");
            scanf("%f", &ft);
            printf("%.2f ft = %.2f in\n", ft, convertor2(ft));
            break;

        case 3:
            printf("Convert inches to cm\n");
            scanf("%f", &in);
            printf("%.2f in = %.2f cm\n", in, convertor3(in));
            break;

        case 4:
            printf("Convert kg into pound\n");
            scanf("%f", &kg);
            printf("%.2f kg = %.2f lb\n", kg, convertor4(kg));
            break;

        case 5:
            printf("Convert meters to inches\n");
            scanf("%f", &m);
            printf("%.2f m = %.2f in\n", m, convertor4(m));
            break;

        default:
            goto end;
        }
    }
end:
    printf("Ending the program...");

    return 0;
}
