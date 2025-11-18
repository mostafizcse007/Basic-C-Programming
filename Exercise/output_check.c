#include <stdio.h>
int main()
{
    int num, digit = 0;
    scanf("%d", &num);
    num %= 100;
    printf("%d\n", num);
    return 0;
}