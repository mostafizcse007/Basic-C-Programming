#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        num *= 10;
        printf("%d\n", num);
    }
    return 0;
}