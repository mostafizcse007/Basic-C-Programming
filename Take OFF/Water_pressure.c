#include <stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    double b = (double)d / 100;
    if (b - (int)b != 0)
        printf("%.2lf\n", b);
    else
        printf("%d\n", (int)b);
    return 0;
}