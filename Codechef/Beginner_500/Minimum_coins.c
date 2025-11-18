#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a < 10)
            printf("%d\n", a);
        else if (a % 10 != 0)
        {
            int temp = a / 10;
            double b = (double)a;
            b /= 10;
            b -= temp;
            printf("%.0lf\n", b * 10);
        }
        else if (a % 10 == 0)
            printf("0\n");
    }
    return 0;
}