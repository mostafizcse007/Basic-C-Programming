#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {"int", "float", "char", "if", "else", "while", "for", "return", "void"};

int isKeyword(char *word)
{
    for (int i = 0; i < 9; i++)
    {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' ||
            c == '=' || c == '<' || c == '>' || c == '!');
}

int isDelimiter(char c)
{
    return (c == '(' || c == ')' || c == '{' || c == '}' ||
            c == '[' || c == ']' || c == ';' || c == ',');
}

int main()
{
    char input[1000];
    char token[100];
    int i = 0, j = 0;

    printf("Enter the code: ");
    fgets(input, sizeof(input), stdin);

    printf("\n%-15s %s\n", "TOKEN TYPE", "VALUE");
    printf("---------------------------\n");

    while (input[i] != '\0')
    {
        if (isspace(input[i]))
        {
            i++;
            continue;
        }

        if (isalpha(input[i]) || input[i] == '_')
        {
            j = 0;
            while (isalnum(input[i]) || input[i] == '_')
            {
                token[j++] = input[i++];
            }
            token[j] = '\0';

            if (isKeyword(token))
                printf("%-15s %s\n", "KEYWORD", token);
            else
                printf("%-15s %s\n", "IDENTIFIER", token);
            continue;
        }

        if (isdigit(input[i]))
        {
            j = 0;
            while (isdigit(input[i]) || input[i] == '.')
            {
                token[j++] = input[i++];
            }
            token[j] = '\0';
            printf("%-15s %s\n", "NUMBER", token);
            continue;
        }

        if (isOperator(input[i]))
        {
            printf("%-15s %c\n", "OPERATOR", input[i]);
            i++;
            continue;
        }

        if (isDelimiter(input[i]))
        {
            printf("%-15s %c\n", "DELIMITER", input[i]);
            i++;
            continue;
        }

        if (input[i] == '"')
        {
            j = 0;
            token[j++] = input[i++];
            while (input[i] != '"' && input[i] != '\0')
            {
                token[j++] = input[i++];
            }
            if (input[i] == '"')
                token[j++] = input[i++];
            token[j] = '\0';
            printf("%-15s %s\n", "STRING", token);
            continue;
        }

        i++;
    }

    return 0;
}
