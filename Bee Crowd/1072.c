#include <stdio.h>
int main(void)
{
    int a, i, b, c = 0, d = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);

        if (b >= 10 && b <= 20)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("%d in\n%d out\n", c, d);
    return 0;
}