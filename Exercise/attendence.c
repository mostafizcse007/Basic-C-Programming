#include <stdio.h>
int main(void)
{
    int num[7], sum = 0, count = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
        count++;
    }
    double avg;
    avg = (double)sum / (double)count;
    printf("%.2lf\n", avg);
    for (int i = 0; i < 7; i++)
    {
        if (num[i] > 30)
            printf("%d ", i + 1);
    }
    return 0;
}