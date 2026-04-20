%{
    #include "variable.tab.h"
    #include <stdlib.h>
%}

%%
[a-z]           { yylval = yytext[0] - 'a'; return ID; }
[0-9]+          { yylval = atoi(yytext); return NUMBER; }
"="             { return '='; }
";"             { return ';'; }
[+\-*/()]       { return yytext[0]; }
[ \t\r\n]       { }
end             { return 0; }
.               { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}