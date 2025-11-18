#include <stdio.h>

void natore()
{
    printf("You are in Natore.\n");
    return;
}
void rajshahi()
{
    printf("You are in Rajshahi\n");
    natore();
    return;
}
void bangladesh()
{
    printf("You are in Bangladesh.\n");
    rajshahi();
    return;
}
void asia()
{
    printf("You are in Asia.\n");
    bangladesh();
    return;
}

void earth()
{
    printf("You are in Earth.\n");
    asia();
    return;
}
void milkyway()
{
    printf("You are in Milkyway.\n");
    earth();
    return;
}
int main()
{
    milkyway();
    return 0;
}