#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 1 && a <= 41)
        printf("AGC%03d\n", a);
    else
        printf("AGC%03d\n", a + 1);

    return 0;
}