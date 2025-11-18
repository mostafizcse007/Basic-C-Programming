#include <stdio.h>
int main()
{
    int num, i = 1;
    scanf("%d", &num);
    while (i <= num)
    {
        int a;
        scanf("%d", &a);
        if (a == 6)
            printf("YES\n");
        else
            printf("NO\n");
        i++;
    }
    return 0;
}