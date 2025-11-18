#include <stdio.h>
int main(void)
{
    double iv, acc, time;
    printf("Initial Velocity: ");
    scanf("%lf", &iv);
    printf("Acceleration: ");
    scanf("%lf", &acc);
    printf("Time: ");
    scanf("%lf", &time);
    double result = (iv * time) + ((acc * time * time)/2);
    printf("Translation = %.2lf\n", result);
    return 0;
}