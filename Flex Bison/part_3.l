%{
    #include "part_3.tab.h"
%}

%%
"AND"       { return AND; }
"OR"       { return OR; }
"NOT"       { return NOT; }
"TRUE"       { return TRUE; }
"FALSE"       { return FALSE; }
[ \t\r]       { }
"\n"        { return '\n'; }
[()]            { return yytext[0]; }
.           { return yytext[0]; }
%%

int yywrap()
{
    return 1;
}