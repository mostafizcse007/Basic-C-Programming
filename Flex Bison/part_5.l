%{
    #include <stdlib.h>
    #include "part_5.tab.h"
%}

%%
[0-9]+      { yylval = atoi(yytext); return NUMBER; }
","         { return ','; }
[ \n\t\r]   {             }
.           { return yytext[0]; }
end         { return 0; }
%%

int yywrap()
{
    return 1;
}