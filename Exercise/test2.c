#include <stdio.h>
int main(void)
{
    int num, count = 0, sum = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > 20)
        {
            count++;
        }
    }
    if (count == num)
        printf("Saved All\n");
    else
    {
        printf("Only few are saved and the following are dead :\n");
        for (int i = 0; i < num; i++)
        {
            if(arr[i]<=20)
            {
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}