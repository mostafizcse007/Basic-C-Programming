#include <stdio.h>
int main()
{
    int a = 1, b = 1, sum = 0;
    int condition;
    scanf("%d", &condition);
    if (condition == 1)
    {
        printf("1\n");
        return 0;
    }
    else if (condition == 2)
    {
        printf("1\n");
        return 0;
    }
    condition -= 2;
    for (int i = 1; i <= condition; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d\n", sum);
    return 0;
}