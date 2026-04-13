%{
    #include <stdlib.h>
    #include "part_2.tab.h"
%}

%%
[a-z]       { yylval = yytext[0] - 'a'; return ID; }
[0-9]+      { yylval = atoi(yytext); return NUMBER; }
[ \t\n\r]   {       }
"="         { return '='; }
";"         { return ';'; }
[+\-*/()]     { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}