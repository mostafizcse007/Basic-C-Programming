#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char *keywords[] = {"int", "float", "double", "char", "if", "else", "for", "while", "do", "return"};
int key_count = 10;

bool is_keyword(char *str)
{
    for (int i = 0; i < key_count; i++)
    {
        if (strcmp(keywords[i], str) == 0)
            return true;
    }
    return false;
}
int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        if (is_keyword(token))
            printf("%s is a keyword\n", token);

        token = strtok(NULL, " ");
    }
    return 0;
}