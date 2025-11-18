#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a > b)
    {
        long long int temp = a;
        a = b;
        b = temp;
    }
    long long int sum = (b - a + 1) * (a + b) / 2;
    printf("%lld\n", sum);
    return 0;
}
