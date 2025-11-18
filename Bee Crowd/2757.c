#include <stdio.h>

int main()
{
    int A, B, C;

    while (scanf("%d", &A) != EOF)
    {
        scanf("%d", &B);
        scanf("%d", &C);

        printf("A = %d, B = %d, C = %d\n", A, B, C);

        printf("A = %10d, B = %08d, C = %07d\n", A, B, C);

        printf("A = %010d, B = %08d, C = %07d\n", A, B, C);

        printf("A = %-06d, B = %-08d, C = %-07d\n\n", A, B, C);
    }

    return 0;
}
