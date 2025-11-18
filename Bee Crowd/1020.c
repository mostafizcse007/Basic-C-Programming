#include <stdio.h>
int main()
{
    int a, fm1, fm2, fm3, fm4;
    scanf("%d", &a);
    fm1 = a / 365;
    fm2 = a % 365;
    fm3 = fm2 / 30;
    fm4 = fm2 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", fm1, fm3, fm4);
    return 0;
}