%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    void yyerror(const char *str);
    int arr[26];

    int exec = 1;
    int oldexec[100];
    int cond[100];
    int top = -1;
%}

%token IF ELSE NUMBER ID

%%
program:
        program stmt
        | stmt
        ;

stmt:
    IF '(' expr ')'
    {
        top++;
        oldexec[top] = exec;
        cond[top] = $3;
        exec = oldexec[top] && cond[top];
    }
    stmt
    ELSE
    {
        exec = oldexec[top] && !cond[top];
    }
    stmt
    {
        exec = oldexec[top];
        top--;
    }
    | ID '=' NUMBER ';'
    {
        if (exec) {
            arr[$1 - 'a'] = $3;
            printf("%c = %d\n", $1, $3);
        }
    }
    ;

expr:
    NUMBER { $$ = $1; }
    ;
%%

void yyerror(const char *s)
{
    printf("Error:%s\n", s);
}

int main()
{
    printf("Parser started.\n");
    yyparse();
    return 0;
}