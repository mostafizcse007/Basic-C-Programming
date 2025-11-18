#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int health;
        scanf("%d", &health);
        if (health >= 80)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}