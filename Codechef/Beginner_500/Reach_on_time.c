#include <stdio.h>
int main()
{
    int test, i = 1;
    scanf("%d", &test);
    while (i <= test)
    {
        int time;
        scanf("%d", &time);
        if (time >= 30)
            printf("YES\n");
        else
            printf("NO\n");
        i++;
    }
    return 0;
}