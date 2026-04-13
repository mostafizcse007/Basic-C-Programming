%{
    #include<stdio.h>
    #include<stdlib.h>
    int yylex();
    void yyerror(const char* s);
    int arr[26];
%}

%token ID NUMBER

%%

program:
        program stmt
        | stmt
        ;

stmt:
    ID '=' expr ';'     { arr[$1] = $3; printf("%c = %d\n",$1+'a',$3); }
    ;

expr:
    expr '+' term   { $$ = $1 + $3; }
    | expr '-' term  { $$ = $1 - $3;}
    | term
    ;

term:
    term '*' factor { $$ = $1 * $3; }
    | term '/' factor  { $$ = $1 / $3; }
    | factor
    ;

factor:
        NUMBER
        | ID    { $$ = arr[$1]; }
        | '(' expr ')'  { $$ = $2; }
        ;

%%

void yyerror(const char* s)
{
    printf("Syntax error: %s\n",s);
}

int main()
{
    printf("Enter assignments:\n");
    yyparse();
    return 0;
}