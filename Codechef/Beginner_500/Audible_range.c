#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int freq;
        scanf("%d", &freq);
        if (freq >= 67 && freq <= 45000)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}