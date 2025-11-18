#include <stdio.h>
int main()
{
    int code, quantity;
    double a1 = 4.00, a2 = 4.50, a3 = 5.00, a4 = 2.00, a5 = 1.50;
    scanf("%d %d", &code, &quantity);
    switch (code)
    {
    case 1:
        printf("Total: R$ %.2lf\n", quantity * a1);
        break;
    case 2:
        printf("Total: R$ %.2lf\n", quantity * a2);
        break;
    case 3:
        printf("Total: R$ %.2lf\n", quantity * a3);
        break;
    case 4:
        printf("Total: R$ %.2lf\n", quantity * a4);
        break;
    case 5:
        printf("Total: R$ %.2lf\n", quantity * a5);
        break;
    default:
        printf("You entered invalid value.\n");
    }
    return 0;
}