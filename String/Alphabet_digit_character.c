#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int digit = 0, small = 0, big = 0, symbol = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            big++;
        else
            symbol++;
    }
    printf("%d %d %d %d\n", digit, small, big, symbol);
    return 0;
}