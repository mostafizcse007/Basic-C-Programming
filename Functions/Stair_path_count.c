#include <stdio.h>
int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
    if (n == 3)
        return n + 1;
    else
        return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", stair(num));
    return 0;
}