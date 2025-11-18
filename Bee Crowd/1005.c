#include<stdio.h>

int main()
{
    double a, b, gA, gB, fm, avg;
    gA = 3.5, gB = 7.5;
    scanf("%lf %lf",&a,&b);
    fm = (gA * a) + (gB * b);
    avg = fm/(gA+gB);
    printf("MEDIA = %.5lf\n",avg);
    return 0;
}