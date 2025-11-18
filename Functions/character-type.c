#include <stdio.h>
#include <string.h>
void reverse()
{

    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    strrev(str);
    printf("%s\n", str);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        reverse();
    }
    return 0;
}
