%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char* s);
    int arr[26];
%}

%token IF ELSE ID NUMBER

%%
program:
    program stmt
    | stmt
    ;
stmt:
    IF '(' expr ')' stmt ELSE stmt
    | ID '=' NUMBER ';' { arr[$1 - 'a'] = $3; printf("%c = %d\n", $1, $3); }
    ;
expr:
    NUMBER
    ;
%%
void yyerror(const char* s)
{
    printf("Syntax error:%s\n");
}

int main()
{
    printf("Application started.\n");
    yyparse();
    return 0;
}
