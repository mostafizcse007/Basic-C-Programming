%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int yylex(void);
    void yyerror(const char *s);

    typedef struct {
        char name[100];
        int value;
    } Symbol;

    Symbol table[100];
    int symbol_count = 0;

    int get_value(char *name);
    void set_value(char *name, int value);
%}

%union {
    int num;
    char *str;
}

%token <str> ID
%token <num> NUMBER

%type <num> expr term factor

%%
loop:
      loop printing
    | printing
    ;

printing:
      ID '=' expr ';'
      {
          set_value($1, $3);
          printf("%s = %d\n", $1, $3);
          free($1);
      }
    ;

expr:
      expr '+' term   { $$ = $1 + $3; }
    | expr '-' term   { $$ = $1 - $3; }
    | term            { $$ = $1; }
    ;

term:
      term '*' factor { $$ = $1 * $3; }
    | term '/' factor { $$ = $1 / $3; }
    | factor          { $$ = $1; }
    ;

factor:
      ID
      {
          $$ = get_value($1);
          free($1);
      }
    | NUMBER          { $$ = $1; }
    | '(' expr ')'    { $$ = $2; }
    | '-' factor      { $$ = -$2; }
    ;
%%

int get_value(char *name)
{
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(table[i].name, name) == 0) {
            return table[i].value;
        }
    }
    printf("Undefined variable: %s\n", name);
    return 0;
}

void set_value(char *name, int value)
{
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(table[i].name, name) == 0) {
            table[i].value = value;
            return;
        }
    }

    strcpy(table[symbol_count].name, name);
    table[symbol_count].value = value;
    symbol_count++;
}

void yyerror(const char *s)
{
    printf("Error: %s\n", s);
}

int main(void)
{
    printf("Parser started.\n");
    yyparse();
    return 0;
}