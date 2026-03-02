#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

bool is_identifier(char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(!isalpha(str[0]) && str[0] != '_')
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    char* token = strtok(str," ");

    while(token != NULL)
    {
        if (is_identifier(token))
            printf("%s is a valid identifier\n", token);

        token = strtok(NULL, " ");
    }
}