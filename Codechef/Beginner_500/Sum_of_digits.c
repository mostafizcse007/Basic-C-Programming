#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int num;
        scanf("%d", &num);
        int sum = 0, check = 0;
        while (num > 0)
        {
            check = num % 10;
            sum += check;
            num /= 10;
        }
        printf("%d\n", sum);
    }
}