#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    if (test >= 1 && test <= 100)
    {
        for (int i = 1; i <= test; i++)
        {
            int a;
            scanf("%d", &a);
            if (a >= 1 && a <= 100)
            {
                if (a <= 15)
                    printf("yes\n");
                else
                    printf("no\n");
            }
        }
    }
    return 0;
}