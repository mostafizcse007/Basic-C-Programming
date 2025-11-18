#include <stdio.h>
int main(void)
{
    char op;
    double a, b;
    printf("Enter an operator: ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch (op)
    {
    case '+':
        printf("%lf + %lf = %.2lf\n", a, b, a + b);
        break;
    case '-':
        printf("%lf - %lf = %.2lf\n", a, b, a - b);
        break;
    case '*':
        printf("%lf * %lf = %.2lf\n", a, b, a * b);
        break;
    case '/':
        printf("%lf / %lf = %.2lf\n", a, b, a / b);
        break;
    default:
        printf("You entered an invalid operator\n");
    }
    return 0;
}