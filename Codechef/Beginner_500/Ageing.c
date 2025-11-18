#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int health;
        scanf("%d", &health);
        printf("%d\n", health - 10);
    }
    return 0;
}