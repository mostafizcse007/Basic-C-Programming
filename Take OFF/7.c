#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10000], str2[10000];
    int len;
    gets(str1);
    gets(str2);
    len = strlen(str1);
    for (int shift = 0; shift < 26; shift++)
    {
        for (int i = 0; i < len; i++)
        {
            str1[i] = (str1[i] - 'a' + shift) % 26 + 'a';
        }
        if (strcmp(str1, str2) == 0)
        {
            printf("Yes\n");
            return 0;
        }
        for (int i = 0; i < len; i++)
        {
            str1[i] = (str1[i] - 'a' + 26 - shift) % 26 + 'a';
        }
    }

    printf("No\n");
    return 0;
}