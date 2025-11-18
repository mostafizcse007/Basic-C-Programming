#include <stdio.h>
int main(void)
{
    int level, term;
    scanf("%d%d", &level, &term);
    if (level == 1)
    {
        switch (term)
        {
        case 1:
            printf("Heeey girl! I am in semester 1!\n");
            break;
        case 2:
            printf("Heeey girl! I am in semester 2!\n");
            break;
        case 3:
            printf("Heeey girl! I am in semester 3!\n");
            break;
        }
    }
    else if (level == 2)
    {
        switch (term)
        {
        case 1:
            printf("Heeey girl! I am in semester 4!\n");
            break;
        case 2:
            printf("Heeey girl! I am in semester 5!\n");
            break;
        case 3:
            printf("Heeey girl! I am in semester 6!\n");
            break;
        }
    }
    else if (level == 3)
    {
        switch (term)
        {
        case 1:
            printf("Heeey girl! I am in semester 7!\n");
            break;
        case 2:
            printf("Heeey girl! I am in semester 8!\n");
            break;
        case 3:
            printf("Heeey girl! I am in semester 9!\n");
            break;
        }
    }
    else if (level == 4)
    {
        switch (term)
        {
        case 1:
            printf("Heeey girl! I am in semester 10!\n");
            break;
        case 2:
            printf("Heeey girl! I am in semester 11!\n");
            break;
        case 3:
            printf("Heeey girl! I am in semester 12!\n");
            break;
        }
    }
    return 0;
}