%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char *s);
    int arr[26];
%}

%token ID NUMBER

%%
loop:
    loop printing
    |printing
    ;

printing:
        ID '=' expr ';'        { arr[$1] = $3; printf("%c = %d\n",$1+'a',$3); }
        ;

expr:
    expr '+' term           { $$ = $1 + $3; }
    |expr '-' term          { $$ = $1 - $3; }
    |term
    ;

term:
    term '*' factor         { $$ = $1 * $3; }
    |term '/' factor        { $$ = $1 / $3; }
    |factor
    ;

factor:
    ID                      { $$ = arr[$1]; }  
    |NUMBER                 { $$ = $1; }        
    |'('expr')'            { $$ = $2; }
    |'-'factor             { $$ = -$2; }
    ;       
%%

void yyerror(const char *s)
{
    printf("Error:%s\n",s);
}

int main()
{
    printf("Parser started.\n");
    yyparse();
    return 0;
}