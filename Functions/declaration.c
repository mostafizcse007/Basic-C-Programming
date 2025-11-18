#include <stdio.h>
char fun();
int main()
{
    char a = fun();
    printf("%c\n", a);
    return 0;
}
char fun()
{
    return 'O';
}