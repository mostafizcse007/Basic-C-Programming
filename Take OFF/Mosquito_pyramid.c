#include <stdio.h>
int main()
{
    long long int a, sum = 0;
    scanf("%lld", &a);
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    printf("%lld\n", sum - a);
    return 0;
}