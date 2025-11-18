#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", b - a);
    }
    return 0;
}