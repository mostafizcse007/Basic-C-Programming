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
        num += 1;
        char str[num];
        scanf("%s", str);
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                count = 0;
            else
            {
                count++;
                if (count == 4)
                    break;
            }
        }
        if (count == 4)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}