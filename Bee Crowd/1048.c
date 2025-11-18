#include <stdio.h>
int main()
{
    double a, b, c, d, e, f;
    int b1, c1, d1, e1, f1;

    scanf("%lf", &a);
    if ((a >= 0) && (a <= 400))
    {
        b1 = 15;
        b = (b1 * a) / 100;
        printf("Novo salario: %.2lf\n", a + b);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: %d %%\n", b1);
    }
    else if ((a > 400) && (a <= 800))
    {
        c1 = 12;
        c = (c1 * a) / 100;
        printf("Novo salario: %.2lf\n", a + c);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %%\n", c1);
    }
    else if ((a > 800) && (a <= 1200))
    {

        d1 = 10;
        d = (d1 * a) / 100;
        printf("Novo salario: %.2lf\n", a + d);
        printf("Reajuste ganho: %.2lf\n", d);
        printf("Em percentual: %d %%\n", d1);
    }
    else if ((a > 1200) && (a <= 2000))
    {
        e1 = 7;
        e = (e1 * a) / 100;
        printf("Novo salario: %.2lf\n", a + e);
        printf("Reajuste ganho: %.2lf\n", e);
        printf("Em percentual: %d %%\n", e1);
    }
    else if (a > 2000)
    {
        f1 = 4;
        f = (f1 * a) / 100;
        printf("Novo salario: %.2lf\n", a + f);
        printf("Reajuste ganho: %.2lf\n", f);
        printf("Em percentual: %d %%\n", f1);
    }
    return 0;
}
