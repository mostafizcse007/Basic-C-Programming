%{
    #include "variable.tab.h"
    #include <stdlib.h>
    #include <string.h>
%}

%%
[a-zA-Z_][a-zA-Z0-9_]*   { yylval.str = strdup(yytext); return ID; }
[0-9]+                   { yylval.num = atoi(yytext); return NUMBER; }
[ \t\r\n]+               { /* ignore whitespace */ }
"="                      { return '='; }
";"                      { return ';'; }
[+\-*/()]                { return yytext[0]; }
.                        { return yytext[0]; }
%%

int yywrap(void)
{
    return 1;
}