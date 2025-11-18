#include <stdio.h>
int main()
{
    double a;
    int b, fm1, fm2, fm3, fm4, fm5, fm6, fm7, fm8, fm9, fm10, fm11, fm12, fm13, fm14, fm15, fm16, fm17, fm18, fm19, fm20, fm21, fm22, fm23;
    scanf("%lf", &a);
    b = (int)(a * 100 + .5);
    fm1 = b / 10000;
    fm2 = b % 10000;
    fm3 = fm2 / 5000;
    fm4 = fm2 % 5000;
    fm5 = fm4 / 2000;
    fm6 = fm4 % 2000;
    fm7 = fm6 / 1000;
    fm8 = fm6 % 1000;
    fm9 = fm8 / 500;
    fm10 = fm8 % 500;
    fm11 = fm10 / 200;
    fm12 = fm10 % 200;
    fm13 = fm12 / 100;
    fm14 = fm12 % 100;
    fm15 = fm14 / 50;
    fm16 = fm14 % 50;
    fm17 = fm16 / 25;
    fm18 = fm16 % 25;
    fm19 = fm18 / 10;
    fm20 = fm18 % 10;
    fm21 = fm20 / 5;
    fm22 = fm20 % 5;
    fm23 = fm22 / 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", fm1);
    printf("%d nota(s) de R$ 50.00\n", fm3);
    printf("%d nota(s) de R$ 20.00\n", fm5);
    printf("%d nota(s) de R$ 10.00\n", fm7);
    printf("%d nota(s) de R$ 5.00\n", fm9);
    printf("%d nota(s) de R$ 2.00\n", fm11);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", fm13);
    printf("%d moeda(s) de R$ 0.50\n", fm15);
    printf("%d moeda(s) de R$ 0.25\n", fm17);
    printf("%d moeda(s) de R$ 0.10\n", fm19);
    printf("%d moeda(s) de R$ 0.05\n", fm21);
    printf("%d moeda(s) de R$ 0.01\n", fm23);
    return 0;
}