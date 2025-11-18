#include <stdio.h>
int main(void)
{
    int m, n;
    for (int i = 0;; i++)
    {
        int temp = 0;
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
            break;
        int x, y;
        if (m < n)
        {
            x = m;
            y = n;
        }
        else
        {
            x = n;
            y = m;
        }
        for (int j = x; j <= y; j++)
        {
            printf("%d ", j);
            temp += j;
        }
        printf("Sum=%d\n", temp);
    }
    return 0;
}