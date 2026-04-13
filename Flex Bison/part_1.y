%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char* s);
%}

%token NUMBER 

%%
input:
    expr '\n'      { printf("Result = %d\n",$1); }
    ;
expr:
    expr '+' term       { $$ = $1 + $3; }
    | expr '-' term     { $$ = $1 - $3; }
    | term
    ;

term:
    term '*' factor         { $$ = $1 * $3; }
    | term '/' factor       { $$ = $1 / $3; }
    | factor
    ;

factor:
        NUMBER
        | '(' expr ')'      { $$ = $2; }
        ;
%%

void yyerror(const char* s)
{
    printf("Syntax error: %s\n",s);
}

int main()
{
    printf("Enter expression:\n");
    yyparse();
    return 0;
}