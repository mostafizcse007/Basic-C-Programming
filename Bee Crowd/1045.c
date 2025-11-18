#include <stdio.h>
int main(void)
{
    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (a * a == (b * b) + (c * c))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (a * a > (b * b) + (c * c))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (a * a < (b * b) + (c * c))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (a == b && b != c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        if (b == c && b != a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        if (a == c && b != b)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}