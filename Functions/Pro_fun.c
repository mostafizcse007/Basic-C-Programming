#include <stdio.h>
int profun(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    else
        return profun(n - 1) * profun(n - 2);
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", profun(num));
    return 0;
}