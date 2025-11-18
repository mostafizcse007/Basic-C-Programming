#include <stdio.h>
int main(void)
{
    int row, column;
    printf("Enter number of students: ");
    scanf("%d", &row);
    printf("Enter number of subject: ");
    scanf("%d", &column);
    int arr[row][column + 1];
    printf("Enter roll number of students: ");
    for (int i = 0; i < row; i++)
    {
        scanf("%d", &arr[i][0]);
    }
    printf("Enter number obtained %d student: \n", row);
    for (int i = 0; i < row; i++)
    {
        printf("Roll number %d obtained marks in: ", arr[i][0]);
        for (int j = 1; j < column + 1; j++)
        {

            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column + 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}