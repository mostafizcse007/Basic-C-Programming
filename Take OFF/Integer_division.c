#include <stdio.h>

int main()
{
    int X;

    printf("Enter an integer between -10 and 10: ");
    scanf("%d", &X);

    // Check for valid input (between -10 and 10)
    if (X < -10 || X > 10)
    {
        printf("Invalid input. Please enter a number between -10 and 10.\n");
        return 1;
    }

    // Calculate the floor division
    int result = X / 10;

    // Print the result (handle negative numbers)
    printf("⌊X/10⌋ = %d\n", result < 0 ? result - 1 : result);

    return 0;
}