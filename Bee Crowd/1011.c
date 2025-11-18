#include<stdio.h>

int main()
{
    double pi = 3.14159, r, fm;
    scanf("%lf",&r);
    fm = (4/3.0)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",fm);
    return 0;
}