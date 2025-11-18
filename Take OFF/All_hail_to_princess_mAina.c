/*#include <stdio.h>
int main(void)
{
    int num, i = 0;
    scanf("%d", &num);
    while (i != num)
    {
        int num2;
        scanf("%d", &num2);
        int arr[num2];
        for (int j = 0; j < num2; j++)
        {
            scanf("%d", &arr[j]);
        }
        int count = 0;
        for (int k = 0; k < num2; k++)
        {
            if (arr[k] == 1)
                count++;
        }
        if (count >= 9)
            printf("Case %d: All hail to princess mAina\n", i + 1);
        else
            printf("Case %d: :'(\n", i + 1);
        i++;
    }
    return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    char ch, a[100], b[100];
    scanf("%c", &ch);
    getchar();
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    printf("%c\n", ch);
    printf("%s", a);
    printf("%s", b);
    return 0;
}
