%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char *s);
%}

%token NUMBER

%%
stmt:
    | stmt input
    ;

input:
    expr '\n'      { printf("Result:%d\n",$1); }
    ;

expr:
    expr '+' term       { $$ = $1 + $3; }
    |expr '-' term       { $$ = $1 - $3; }
    |term
    ;

term:
    term '*' factor     { $$ = $1 * $3; }
    |term '/' factor     { $$ = $1 / $3; }
    |factor
    ;

factor:
    NUMBER      { $$ = $1; }
    | '('expr')'    { $$ = $2; }
    | '-'factor     { $$ = -$2; }
    ;
%%

void yyerror(const char *s)
{
    printf("Error is:%s\n",s);
}

int main()
{
    printf("Parser started.\n");
    yyparse();
    return 0;
}