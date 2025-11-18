#include <stdio.h>
int main(void)
{
    int i, total = 0;
    double number[6];
    double avg, sum = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &number[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (number[i] > 0)
        {
            total += 1;
            sum += number[i];
        }
    }
    avg = sum / total;
    printf("%d valores positivos\n", total);
    printf("%.1lf\n", avg);
    return 0;
}