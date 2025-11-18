#include <stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d", &a);
    scanf("%lf", &b);
    if (a % 5 == 0 && b - (double)a >= .50)
    {
        b -= a;
        printf("%0.2lf\n", b - 0.50);
    }
    else if (a % 5 != 0)
    {
        printf("%0.2lf\n", (double)b);
    }
    else if (a >= b)
        printf("%0.2lf\n", (double)b);
    else
        printf("%0.2lf\n", b);
    return 0;
}