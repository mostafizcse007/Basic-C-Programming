#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int sq_area = a * a;
    a /= 2;
    double b = (double)a * (double)a * 3.1416;
    b -= b / 5.50385424;
    printf("%.4lf\n", (double)sq_area - b);
    return 0;
}