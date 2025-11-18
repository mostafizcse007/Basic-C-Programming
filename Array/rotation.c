
#include <stdio.h>
int main(void)
{
    int size, temp, rotation;
    printf("Enter size and rotation of array: ");
    scanf("%d%d", &size, &rotation);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before rotating: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("After rotating by %d elements: ", rotation);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for (int i = 0; i < rotation; i++)
    {
        for (int j = i + 1; j < rotation; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
   for(int i=rotation,j=size-1;i<=j;i++,j--)
   {
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
   }
   for (int i = 0; i < size; i++)
   {
       printf("%d ", arr[i]);
   }

    return 0;
}