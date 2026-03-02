// (ab)^2+
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_validRE(char *str)
{
    if ((strlen(str) % 2 != 0) || str[0] == 'b' || strlen(str) < 4)
        return false;
    for (int i = 0; i < strlen(str); i += 2)
    {
        if (str[i] == 'a' && str[i + 1] == 'b')
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (is_validRE(str))
        printf("Valid\n");
    else
        printf("Not valid\n");
}