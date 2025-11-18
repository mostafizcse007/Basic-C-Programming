#include <stdio.h>
int factorial(int x)
{
    int facto = 1;
    for (int i = 2; i <= x; i++)
    {
        facto *= i;
    }
    return facto;
}
int main(void)
{
    int n, r;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Enter the value of R: ");
    scanf("%d", &r);
    int fact = factorial(n) / (factorial(r) * factorial(n - r));
    printf("nCr of %d and %d is = %d\n", n, r, fact);
    return 0;
}
