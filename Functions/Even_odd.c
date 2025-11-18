#include <stdio.h>
void evenodd();
int main()
{
    evenodd();
    return 0;
}
void evenodd()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is an even number\n", a);
    else
        printf("%d is an odd number\n", a);
}