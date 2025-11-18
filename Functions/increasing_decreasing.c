#include <stdio.h>
void incr(int n)
{
    if (n == 0)
        return;
    else
    {
        incr(n - 1);
        printf("%d  ", n);
    }
}
void decr(int m)
{
    if (m == 1)
        return;
    else
    {
        printf("%d  ", m - 1);
        decr(m - 1);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    incr(num);
    decr(num);
    return 0;
}