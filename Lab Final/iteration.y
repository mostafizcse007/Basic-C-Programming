%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    void yyerror(const char *s);
%}

%token  NUMBER

%%
expr:
    expr factor
    |factor
    ;
factor:
        NUMBER      { printf("%d\n",$1); }
        | factor ',' NUMBER { printf("%d\n",$3); }
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