#include <stdio.h>
int main()
{
    int a;
    int fm1, fm2, fm3, fm4;
    scanf("%d", &a);
    fm1 = a / 3600;
    fm2 = a % 3600;
    fm3 = fm2 / 60;
    fm4 = fm2 % 60;

    printf("%d:%d:%d\n", fm1, fm3, fm4);
    return 0;
}