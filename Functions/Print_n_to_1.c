#include <stdio.h>
void print(int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d  ", n);
        print(n - 1);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    print(num);
    return 0;
}