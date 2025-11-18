#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[30];
    int insert, length;
    printf("Enter a string: ");
    fgets(str, 30, stdin);
    printf("Enter a index value you want to instet: ");
    scanf("%d", &insert);
    printf("Before inserting: ");
    puts(str);
    printf("\nAfter instering: ");
    length = strlen(str);
    for (int i = length; i >= insert; i--)
    {
        str[i + 1] = str[i];
    }
    str[insert] = 'l';
    puts(str);
    return 0;
}