%{
#include <stdlib.h>
#include "part_1.tab.h"
%}

%%
[0-9]+      {yylval = atoi(yytext); return NUMBER;}
[+\-*/(\)]   { return yytext[0]; }
[ \t]     {       }
\n      { return '\n'; }
.       { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}