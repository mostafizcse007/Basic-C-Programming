%{
    #include "condition.tab.h"
    #include <stdlib.h>
%}

%%
IF          { return IF; }
ELSE        { return ELSE; }
"="         { return '='; }
";"         { return ';'; }
[ \n\t\r]+   {  }
[a-z]       { yylval = yytext[0]; return ID; }
[0-9]+      { yylval = atoi(yytext); return NUMBER; }
[()]        { return yytext[0]; }
.           { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}