#include <stdio.h>
int digit(int n)
{
    int store = 0;
    if (n < 10)
        return n;
    else
    {
        store = store + n % 10;
        return store + digit(n / 10);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digit(num));
    return 0;
}