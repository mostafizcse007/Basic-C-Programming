#include <stdio.h>

int main()
{

    int a;
    int fm1, fm2, fm3, fm4, fm5, fm6, fm7, fm8, fm9, fm10, fm11, fm12, fm13, fm14;
    scanf("%d", &a);
    fm1 = a / 100;
    fm2 = a % 100;
    fm3 = fm2 / 50;
    fm4 = fm2 % 50;
    fm5 = fm4 / 20;
    fm6 = fm4 % 20;
    fm7 = fm6 / 10;
    fm8 = fm6 % 10;
    fm9 = fm8 / 5;
    fm10 = fm8 % 5;
    fm11 = fm10 / 2;
    fm12 = fm10 % 2;
    fm13 = fm12 / 1;
    fm14 = fm12 % 1;
    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", fm1);
    printf("%d nota(s) de R$ 50,00\n", fm3);
    printf("%d nota(s) de R$ 20,00\n", fm5);
    printf("%d nota(s) de R$ 10,00\n", fm7);
    printf("%d nota(s) de R$ 5,00\n", fm9);
    printf("%d nota(s) de R$ 2,00\n", fm11);
    printf("%d nota(s) de R$ 1,00\n", fm13);

    return 0;
}