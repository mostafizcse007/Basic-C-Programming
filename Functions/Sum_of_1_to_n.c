#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("Sum of 1 to %d is = %d\n", num, sum(num));
    return 0;
}