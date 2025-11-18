#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a > b && a > c)
            printf("Setter\n");
        else if (b > a && b > c)
            printf("Tester\n");
        else
            printf("Editorialist\n");
    }
    return 0;
}