#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main(void)
{
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = add(a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);
    return 0;
}