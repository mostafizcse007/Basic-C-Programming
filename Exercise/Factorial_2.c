#include <stdio.h>
int main()
{
    int num, fact = 1;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d! = %d\n", num, fact);
    return 0;
}