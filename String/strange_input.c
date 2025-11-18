#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[30];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    puts(str);
    return 0;
}
