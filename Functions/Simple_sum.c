#include <stdio.h>
int sum(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    a += b;
    printf("Sum= %d\n", a);
    sum();
    return a;
}
int main()
{
    sum();
    return 0;
}