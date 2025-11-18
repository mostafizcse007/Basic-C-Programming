#include <stdio.h>
int func(int);
int main()
{
    int a = func(435);
    printf("%d\n", a);
    return 0;
}
int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>= 1;
    }
    return count;
}