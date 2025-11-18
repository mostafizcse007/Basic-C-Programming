#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        int big = i;
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[big] < str[j])
                big = j;
        }
        char temp = str[i];
        str[i] = str[big];
        str[big] = temp;
    }
    printf("%s", str);
    return 0;
}