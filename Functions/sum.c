#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    int result = sum(x, y);
    printf("%d\n", result);
    return 0;
}