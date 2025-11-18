#include <stdio.h>
#include <math.h>
int main(void)
{
    double base, power;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the power: ");
    scanf("%lf", &power);
    double result = pow(base, power);
    printf("Result is: %.0lf\n", result);
    return 0;
}