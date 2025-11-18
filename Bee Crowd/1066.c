#include <stdio.h>
int main(void)
{
    int number[5];
    int i, even = 0, odd = 0, positive = 0, negative = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (number[i] > 0)
        {
            positive += 1;
        }
        else if (number[i] < 0)
        {
            negative += 1;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}
