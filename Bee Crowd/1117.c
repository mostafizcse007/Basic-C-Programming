#include <stdio.h>
int main(void)
{
    double num1, num2;
    int i, count = 0;
    while (i = 1)
    {
        scanf("%lf%lf", &num1);
        if ((num1 < 0 || num1 > 10))
            printf("nota invalida\n");
        else if (num1 >= 0 && num1 <= 10)
            count++;
        if (count == 2)
            printf("media = %.2lf\n", (num1 + num1) / 2);
    }
    return 0;
}