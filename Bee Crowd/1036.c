#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, fm1, fm2, fm3;
    scanf("%lf %lf %lf", &a, &b, &c);
    fm1 = (b * b) - (4 * a * c);
    fm2 = (-b + sqrt(fm1)) / (2 * a);
    fm3 = (-b - sqrt(fm1)) / (2 * a);

    if ((a == 0) || (fm1 < 0))
    {
        printf("Impossivel calcular\n");
    }
    else

    {
        printf("R1 = %.5lf\n", fm2);
        printf("R2 = %.5lf\n", fm3);
    }

    return 0;
}