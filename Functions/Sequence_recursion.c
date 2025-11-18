#include <stdio.h>
int poly(int n, int b)
{
    int recive;
    if (b == 0)
        return 1;
    else
    {
        recive = n * poly(n, b - 1);
        printf("%d + ", recive);
        return recive;
    }
}
int main()
{
    int num, ex;
    scanf("%d%d", &num, &ex);
    poly(num, ex);
    return 0;
}