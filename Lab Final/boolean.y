%{
    #include<stdio.h>
    #include<stdlib.h>
    int yylex();
    void yyerror(const char* s);
%}

%token AND OR NOT TRUE FALSE

%%
stmt:
    stmt input
    |input
    ;

input: 
     expr '\n'    { if($1==1)
                        printf("True\n");
                    else
                        printf("False\n");
                }
    ;

expr:
    expr OR term     { $$ = $1 || $3; }
    |term
    ;

term:
    term AND factor     { $$ = $1 && $3; }
    |factor
    ;

factor:
    NOT factor       { $$ = !$2; }
    |TRUE            { $$ = 1; }
    |FALSE           { $$ = 0; }
    | '('expr')'     { $$ = $2; }
    ;
%%

void yyerror(const char *s)
{
    printf("Error: %s\n",s);
}

int main(){
    printf("Parser started.\n");
    yyparse();
    return 0;
}