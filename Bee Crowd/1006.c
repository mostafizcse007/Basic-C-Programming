#include<stdio.h>

int main()
{
    double a, b,c ,gA, gB, gC,fm, avg;
    gA = 2, gB = 3, gC = 5;
    scanf("%lf %lf %lf",&a,&b,&c);
    fm = (gA * a) + (gB * b) + (gC * c);
    avg = fm/(gA+gB + gC);
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}