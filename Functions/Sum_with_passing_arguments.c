#include <stdio.h>
float sum(float a, float b)
{
    a += b;
    return a;
}
int main()
{
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f%f", &x, &y);
    x = sum(x, y);
    printf("%f\n", x);
    return 0;
}