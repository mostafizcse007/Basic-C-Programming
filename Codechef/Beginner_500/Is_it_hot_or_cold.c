#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a > 20)
            printf("hot\n");
        else
            printf("cold\n");
    }
    return 0;
}