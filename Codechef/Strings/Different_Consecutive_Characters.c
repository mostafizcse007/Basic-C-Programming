#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num, count = 0;
        scanf("%d", &num);
        char str[num];
        scanf("%s", str);
        for (int j = 0; j < num - 1; j++)
        {
            if (str[j] == str[j + 1])
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}