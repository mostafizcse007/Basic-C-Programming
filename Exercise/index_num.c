#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[50];
    int position;
    fgets(word, sizeof(word), stdin);
    scanf("%d", &position);
    printf("%c\n", word[position]);
    return 0;
}