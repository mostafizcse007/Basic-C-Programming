#include <stdio.h>
int rev(int n)
{
    int store = 0;
    if (n < 10)
        printf("%d", n);
    else
    {
        store = store + n % 10;
        printf("%d", store);
        return rev(n / 10);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    rev(num);
    return 0;
}