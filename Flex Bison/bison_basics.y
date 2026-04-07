%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
extern char *yytext;
void yyerror(const char *s);
%}

%token  INTEGER FLOAT IDENTIFIER KEYWORD OPERATOR

%%

input:
    | input input1;


input1:
    INTEGER         { printf("%s is an integer\n", yytext); }
    | FLOAT         { printf("%s is a float\n", yytext); }
    | KEYWORD       { printf("%s is a keyword\n", yytext); }
    | OPERATOR      { printf("%s is an operator\n", yytext); }
    | IDENTIFIER    { printf("%s is an identifier\n", yytext); }
    | '\n'      { }
    ;

%%

int main()
{
    printf("Parser started\n");
    yyparse();
    return 0;
}
void yyerror(const char *s)
{
    fprintf(stderr,"Error: %s\n",s);
}