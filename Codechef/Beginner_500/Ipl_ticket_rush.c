#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d%d", &b, &c);
        if (c >= b)
            printf("0\n");
        else
            printf("%d\n", b - c);
    }
    return 0;
}