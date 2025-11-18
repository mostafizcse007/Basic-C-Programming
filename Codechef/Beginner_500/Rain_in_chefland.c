#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int rain;
        scanf("%d", &rain);
        if (rain < 3)
            printf("LIGHT\n");
        else if (rain >= 3 && rain < 7)
            printf("MODERATE\n");
        else if (rain >= 7)
            printf("HEAVY\n");
    }
    return 0;
}