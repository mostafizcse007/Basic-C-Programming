#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    int x = 1, y = 2, z = 3;
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d %d %d PUM\n", x, y, z);
        }
        x += 4, y += 4, z += 4;
    }
}