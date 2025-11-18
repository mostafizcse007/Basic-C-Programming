#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a;
        scanf("%d", &a);
        if (a <= 10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}