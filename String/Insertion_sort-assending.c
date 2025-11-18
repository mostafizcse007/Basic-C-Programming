#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[smallest] > str[j])
                smallest = j;
        }

        char temp = str[i];
        str[i] = str[smallest];
        str[smallest] = temp;
    }
    printf("%s", str);
    return 0;
}