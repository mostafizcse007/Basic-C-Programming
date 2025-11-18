#include <stdio.h>
int cube(int a)
{
    return a * a * a;
}
int main()
{
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        int result = cube(num);
        printf("%d\n", result);
    }
    return 0;
}