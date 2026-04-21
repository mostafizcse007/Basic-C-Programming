%{
    #include "iteration.tab.h"
    #include <stdlib.h>
%}

%%
[0-9]+              { yylval = atoi(yytext); return NUMBER; }
","                 { return ','; }
[ \n\t\r]+          {   }
end                 { return 0; }
.                   { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}