#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[30];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of the string is : %d\n", count);
    return 0;
}