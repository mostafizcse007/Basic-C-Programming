#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, aotp;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c);

    aotp = ((a + b) / 2.0) * c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        printf("Perimetro = %.1lf\n", s);
    }
    else
    {
        printf("Area = %.1lf\n", aotp);
    }

    return 0;
}