%{
#include "p2c.h"
#include "p2c_yacc.h"
%}

ID  [A-Za-z][A-Za-z0-9]*
NUM [0-9][0-9]*
CC1  '[^']*'
CC2 ''''

%%

div		{return DIV;}
or		{return OR;}
and		{return AND;}
not		{return NOT;}
if		{return IF;}
then		{return THEN;}
else		{return ELSE;}
of		{return OF;}
while		{return WHILE;}
do		{return DO;}
begin		{return BG;}
end		{return END;}
read		{return READ;}
write		{return WRITE;}
var		{return VAR;}
array		{return ARRAY;}
procedure	{return PROC;}
program		{return PROG;}
integer		{return INT;}
Boolean		{return BOOL;}
true		{return TRUE;}
false		{return FALSE;}
"+"		{return ADD;}
"-"		{return MINUS;}
"*"		{return TIMES;}
"="		{return EQ;}
"<>"		{return NE;}
"<"		{return LT;}
">"		{return GT;}
"<="		{return LE;}
">="		{return GE;}
"("		{return LP;}
")"		{return RP;}
"["		{return LSP;}
"]"		{return RSP;}
		
":="		{return ASSIGN;}
"."		{return DOT;}
","		{return COMMA;}
";"		{return SEMI;}
":"		{return COLON;}
".."		{return DOTDOT;}
{ID}		{return (ID);}
{NUM}		{return (NUM);}
{CC1}		{return (CC);}
{CC2}		{return (CC);}

[ \t\n]		{/* skip blanks */}

%%

int yywrap() {return 1;}

