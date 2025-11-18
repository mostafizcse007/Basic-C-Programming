#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char str[100], str2[100] = "Thor";
        int force;
        scanf("%s", str);
        scanf("%d", &force);
        int value = strcmp(str, str2);
        if (value == 0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}