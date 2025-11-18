#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000], str2[1000], str3[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    fgets(str3, sizeof(str3), stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    str3[strcspn(str3, "\n")] = 0;
    printf("%s%s%s\n", str1, str2, str3);
    printf("%s%s%s\n", str2, str3, str1);
    printf("%s%s%s\n", str3, str1, str2);
    printf("%.10s%.10s%.10s\n", str1, str2, str3);
    return 0;
}