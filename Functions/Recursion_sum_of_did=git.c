#include <stdio.h>
int sum(int n)
{
    int store = 0;
    if (n < 10)
        return n;
    else
    {
        store = n % 10;
        return store + sum(n / 10);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", sum(num));
    return 0;
}