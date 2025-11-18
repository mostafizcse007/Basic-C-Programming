#include <stdio.h>
int main()
{
    double num;
    scanf("%lf", &num);
    if ((0.00 <= num) && (num <= 25))
    {
        printf("Intervalo [0,25]\n");
    }
    else if ((25.00 < num) && (num <= 50.00))
    {
        printf("Intervalo (25,50]\n");
    }
    else if ((50.00 < num) && (num <= 75.00))
    {
        printf("Intervalo (50,75]\n");
    }
    else if ((75.00 < num) && (num <= 100.00))
    {
        printf("Intervalo (75,100]\n");
    }
    else if (num < 0 || num > 100)
    {
        printf("Fora de intervalo\n");
    }
    return 0;
} 