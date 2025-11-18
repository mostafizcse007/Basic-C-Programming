#include <stdio.h>
int main(void)
{
    int num, count = 0, i;
    scanf("%d", &num);
    int arr[5];
    
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }
        
            for (i = 0; i < 5; i++)
            {
                if (num == arr[i])
                    count++;
            }
        
        printf("%d\n", count);
    
    return 0;
}