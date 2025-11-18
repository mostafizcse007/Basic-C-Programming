#include <stdio.h>
int main(void)
{
    double rs, sum = 0;
    scanf("%lf", &rs);
    if (rs >= 0 && rs <= 2000)
        printf("Isento\n");
    else
    {
        if (rs > 2000 && rs <= 3000)
        {
            sum += (rs - 2000) * 0.08;
            printf("R$ %.2lf\n", sum);
        }
        else if (rs > 3000 && rs <= 4500)
        {
            sum += 80 + (rs - 3000) * .18;
            printf("R$ %.2lf\n", sum);
        }
        else if (rs > 4500)
        {
            sum += 350 + (rs - 4500) * .28;
            printf("R$ %.2lf\n", sum);
        }
    }

    return 0;
}