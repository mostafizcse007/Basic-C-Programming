#include <stdio.h>
int main(void)
{
    int i, positive = 0;
    double number[6];
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &number[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (number[i] > 0)
        {
            positive += 1;
        }
    }
    printf("%d valores positivos\n", positive);
    return 0;
}