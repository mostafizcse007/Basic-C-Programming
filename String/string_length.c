#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[30];
    int c = 0;
    printf("Enter your name: ");
    gets(name);

    c = strlen(name);
    printf("\nLength of the string: %d\n", c);
    return 0;
}