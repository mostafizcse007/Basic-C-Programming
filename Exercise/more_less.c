#include <stdio.h>
int main(void)
{
    int num, more = 0, less = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    for(int i=1;i<num;i++)
    {
        if (arr[0] > arr[i])
            more++;
        else
            less++;
    }
    printf("%d\n%d\n", less, more);
    return 0;
}