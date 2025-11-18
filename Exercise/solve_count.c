#include <stdio.h>
int main()
{
    int num, count = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int check;
    scanf("%d", &check);
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    if (count >= check)
        printf("Yes I will Qualify\n");
    else
        printf("I am sorry\n");
    return 0;
}