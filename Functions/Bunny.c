#include <stdio.h>
int bunny(int n)
{
    if (n == 0)
        return 0;
    else
    {
        if (n % 2 == 0)
            return 3 + bunny(n - 1);
        else
            return 2 + bunny(n - 1);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", bunny(num));
    return 0;
}