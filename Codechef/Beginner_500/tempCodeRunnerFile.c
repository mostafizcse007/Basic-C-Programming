#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int num, first, last;
        scanf("%d", &num);
        last = num % 10;
        while (num >= 10)
        {
            num /= 10;
        }
        last = num;
        printf("%d\n", first);
    }
    return 0;
}