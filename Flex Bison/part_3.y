%{
    #include<stdio.h>
    #include<stdlib.h>
    int yylex();
    void yyerror(const char* s);
%}

%token AND OR NOT TRUE FALSE

%%
input:
        input expr  '\n'  { printf("Result:%d\n",$2); }
        |expr   '\n'    { printf("Result:%d\n",$1); }
        ;
expr:
    expr OR term    { $$ = $1 || $3; }
    | term
    ;
term:
    term AND factor { $$ = $1 && $3; }
    | factor
    ;
factor:
    NOT factor { $$ = !$2; }
    | TRUE      { $$ = 1; }
    | FALSE     { $$ = 0; }
    | '(' expr ')'  { $$ = $2; }
    ;
%%

void yyerror(const char* s)
{
    printf("Syntax error:%s\n",s);
}
int main()
{
    printf("Program started.\n");
    yyparse();
    return 0;
}