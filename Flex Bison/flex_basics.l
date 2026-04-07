%{
    #include<stdio.h>
    #include "bison_basics.tab.h"
%}

%%

[0-9]+\.[0-9]+      { return FLOAT; }
[0-9]+              { return INTEGER; }
"if"|"else"|"int"|"return"      { return KEYWORD; }
[+\-*/]              { return OPERATOR; }
[a-zA-Z_][a-zA-Z0-9_]*             { return IDENTIFIER; }
[ \t]           { }

%%

int yywrap() {
    return 1;
}