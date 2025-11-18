#include <stdio.h>
#include <string.h>
int main()
{
    int test, i = 0;
    scanf("%d", &test);
    while (i < test)
    {
        int num;
        scanf("%d", &num);
        num += 1;
        char str[num];
        scanf("%s", str);
        for (int j = 0; j < strlen(str); j += 2)
        {
            if (str[j] == '0' && str[j + 1] == '0')
                printf("A");
            else if (str[j] == '0' && str[j + 1] == '1')
                printf("T");
            else if (str[j] == '1' && str[j + 1] == '0')
                printf("C");
            else if (str[j] == '1' && str[j + 1] == '1')
                printf("G");
        }
        printf("\n");
        i++;
    }
    return 0;
}