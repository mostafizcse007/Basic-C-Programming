#include <stdio.h>
double avg(int[], int);
int main()
{
    printf("Enter number of student: ");
    int student;
    scanf("%d", &student);
    int arr[student];
    double fraction = avg(arr, student);
    printf("Average marks %.2lf\n", fraction);
    return 0;
}
double avg(int marks[], int student)
{
    double sum = 0;
    printf("Enter marks of %d students: ", student);
    for (int i = 0; i < student; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < student; i++)
    {
        sum += marks[i];
    }
    sum /= student;
    return sum;
}