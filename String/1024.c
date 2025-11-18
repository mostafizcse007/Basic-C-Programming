#include <stdio.h>
#include <string.h>
int main(void)
{
    int num, temp;
    scanf("%d", &num);
    getchar();
    for (int i = 0; i < num; i++)
    {
        char str[500];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        int len = strlen(str);
        for (int k = 0; k < len; k++)
        {
            if ((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))
                str[k] = str[k] + 3;
        }
        int start = 0, end = len - 1;
        while (start < end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        int len_1 = len / 2;
        for (int j = len_1; j <= len - 1; j++)
        {
            str[j] = str[j] - 1;
        }
        printf("%s\n", str);
    }
    return 0;
}
