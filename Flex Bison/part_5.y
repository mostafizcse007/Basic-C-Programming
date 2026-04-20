%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char* s);
%}

%token NUMBER

%%
input:

    |input list
    ;
list:
    list ',' NUMBER     { printf("%d\n",$3); }
    | NUMBER            { printf("%d\n",$1); }
    ;
%%

void yyerror(const char* s)
{
    printf("Syntax error: %s\n",s);
}

int main()
{
    printf("Program started.\n");
    yyparse();
    return 0;
}