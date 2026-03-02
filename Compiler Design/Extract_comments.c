#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    int i = 0;
    printf("Enter source code:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] == '/' && str[i + 1] == '/')
        {
            printf("Single-line comment: ");
            i += 2;
            while (str[i] != '\0' && str[i] != '\n')
            {
                putchar(str[i]);
                i++;
            }
            printf("\n");
        }
        else if (str[i] == '/' && str[i + 1] == '*')
        {
            printf("Multi-line comment: ");
            i += 2;
            while (str[i] != '\0' && !(str[i] == '*' && str[i + 1] == '/'))
            {
                putchar(str[i]);
                i++;
            }
            printf("\n");
            i += 2;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
