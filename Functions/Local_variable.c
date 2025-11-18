#include <stdio.h>
int hudai(int x)
{
    x = 100;
    return x;
}
int main()
{
    int a = 50;
    hudai(a);
    printf("%d\n", a);
    return 0;
}