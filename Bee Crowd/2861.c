#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    getchar();
    for (int i = 0; i < test; i++)
    {
        char str[1000], str2[1000] = "gzuz";
        fgets(str, sizeof(str), stdin);
        printf("%s\n", str2);
    }
    return 0;
}