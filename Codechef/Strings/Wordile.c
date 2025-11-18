#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char str1[6], str2[6];
        scanf("%s", str1);
        scanf("%s", str2);
        for (int j = 0; j < strlen(str1); j++)
        {
            if (str1[j] == str2[j])
                printf("G");
            else
                printf("B");
        }
        printf("\n");
    }
    return 0;
}