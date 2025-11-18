#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char str[100000];
        scanf("%s", str);
        double len = strlen(str);
        len /= 100;
        printf("%.2lf\n", len);
    }
    return 0;
}