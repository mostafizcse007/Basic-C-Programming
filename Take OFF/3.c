#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num], count_1 = 0, count_2 = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_1++;
        }
    }
    for (int i = 0; i < num; i++)
    {
        if ((arr[i] % 2 == 0) && (arr[i] % 5 == 0 || arr[i] % 3 == 0))
        {
            count_2++;
        }
    }
    if (count_1 == count_2)
        printf("APPROVED\n");
    else
        printf("DENIED\n");

    return 0;
}