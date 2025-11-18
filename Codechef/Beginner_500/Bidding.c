#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a > b && a > c)
            printf("Alice\n");
        else if (b > a && b > c)
            printf("Bob\n");
        else
            printf("Charlie\n");
    }
    return 0;
}