#include <stdio.h>
void incr(int n)
{
    if (n == 0)
        return;
    else
    {
        incr(n - 1);
        printf("%d  ", n);
        return;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    incr(num);
    return 0;
}