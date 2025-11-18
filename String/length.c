#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr[30];
    int count = 0, i = 0;
    printf("Enter your name: ");
    gets(arr);
    puts(arr);
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}