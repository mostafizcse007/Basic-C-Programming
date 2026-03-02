#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    while (1)
    {
        char temp[100];
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp,"\n")] = '\0';
        if (strncmp(temp, "end",3) == 0)
            break;
        strcat(str,temp);
    }
    printf("%s\n", str);
    return 0;
}