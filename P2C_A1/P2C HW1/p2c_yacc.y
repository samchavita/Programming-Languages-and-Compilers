%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "p2c.h"
%}
%token PROG PROC BG END INT BOOL TRUE
%token LP RP LSP RSP FALSE CC
%token DOT SEMI VAR ARRAY OF DOTDOT
%token IF THEN READ WRITE WHILE DO
%token ELSE ASSIGN COMMA COLON ID NUM
%left OR AND
%left NOT
%left EQ NE LT GT LE GE
%left ADD MINUS
%left DIV TIMES
%expect 1

%%
prog 	:	PROG ID SEMI block DOT {printf("prog => PROG ID SEMI block DOT \n********Parsed OK!**********\n");}
		|	{printf("********Parsing failed! \n");}	
		;

block	:	vardecs prodecs stmts {printf("block=>vardecs prodecs stmts \n");}
		;

vardecs	:	VAR vardec SEMI morevd {printf("vardecs => VAR vardec SEMI morevd \n");}
		|	{printf("vardecs => Null \n");}
		;

morevd	:	vardec SEMI morevd	{printf("morevd => vardec SEMI morevd \n");}
		|	{printf("morevd => Null \n");}
		;

vardec	:	ID moreid COLON type {printf("vardec => ID moreid COLON type\n");}
		;

moreid	:	COMMA ID moreid	{printf("moreid	=>	COMMA ID moreid \n");}
		|	{printf("moreid => Null \n");}
		;

type	:	simtype	{printf("type => simtype \n");}
		|	arrtype	{printf("type => arrtype \n");}
		;

arrtype	:	ARRAY LSP inrange RSP OF simtype {printf("arrtype => ARRAY LSP inrange RSP OF simtype \n");}
		;

inrange	:	NUM DOTDOT NUM {printf("inrange => NUM DOTDOT NUM \n");}
		;

simtype	:	INT {printf("simtype => INT \n");}
		|	BOOL {printf("simtype => BOOL \n");}
		;

prodecs	:	proc SEMI prodecs	{printf("prodecs => proc SEMI prodecs \n");}
		|	{printf("prodecs => Null \n");}
		;

proc	:	PROC ID SEMI block	{printf("proc => PROC ID SEMI block \n");}
		;

stmts	:	comstmt	{printf("stmts => comstmt \n");}
		;

comstmt	:	BG stmt morestm	END	{printf("comstmt => BG stmt morestm	END \n");}
		;

morestm	:	SEMI stmt morestm	{printf("morestm => SEMI stmt morestm \n");}
		|	{printf("morestm => Null \n");}
		;

stmt	:	simstmt	{printf("stmt => simstmt \n");}
		| structStmt {printf("stmt => structStmt \n");}
		;
		
simstmt : 	assiStmt {printf("simstmt => assiStmt \n");}
		| proStmt {printf("simstmt => proStmt \n");}
		| readStmt {printf("simstmt => readStmt \n");}
		| writeStmt {printf("simstmt => writeStmt \n");}
		;
		
assiStmt :	variable ASSIGN expression {printf("assiStmt => variable ASSIGN expression \n");}
		;

proStmt :	ID {printf("proStmt => ID \n");}
		;

readStmt :	READ LP input moreInput RP {printf("readStmt => READ LP input moreInput RP \n");}
		;

moreInput :	COMMA input moreInput {printf("moreInput => COMMA input moreInput \n");}
		|	{printf("moreInput => Null \n");}
		;

input	:	variable {printf("input => variable \n");}
		;

writeStmt :	WRITE LP outputVal moreOutputVal RP {printf("writeStmt => WRITE LP outputVal moreOutputVal RP \n");}
		;

moreOutputVal : COMMA outputVal moreOutputVal {printf("moreOutputVal => COMMA outputVal moreOutputVal \n");}
		|	{printf("moreOutputVal => Null \n");}
		;

outputVal :	expression {printf("outputVal => expression \n");}
		;

structStmt :	comstmt {printf("structStmt => comstmt \n");}
		| ifStmt {printf("structStmt => ifStmt \n");}
		| whileStmt {printf("structStmt => whileStmt \n");}
		;
		
ifStmt :	IF expression THEN stmt {printf("ifStmt => IF expression THEN stmt \n");}
		| IF expression THEN stmt ELSE stmt {printf("ifStmt => IF expression THEN stmt ELSE stmt \n");}
		;
		
whileStmt :	WHILE expression DO stmt {printf("whileStmt => WHILE expression DO stmt \n");}
		;

expression :	simpExpression {printf("expression => simpExpression \n");}
		| simpExpression relOp simpExpression {printf("expression => simpExpression relOp simpExpression \n");}
		;

simpExpression: sign term moreAddOp {printf("simpExpression => sign term moreAddOp \n");}
		;

moreAddOp :	addOp term moreAddOp {printf("moreAddOp => addOp term moreAddOp \n");}
		|	{printf("moreAddOp => Null \n");}
		;
		
term	:	factor moreMulOp {printf("term => factor moreMulOp \n");}
		;

moreMulOp :	mulOp factor moreMulOp {printf("moreMulOp => mulOp factor moreMulOp \n");}
		|	{printf("moreMulOp => Null \n");}
		;

factor	:	variable {printf("factor => variable \n");}
		| constant {printf("factor => constant \n");}
		| LP expression RP {printf("factor => RLP expression RP \n");}
		| NOT factor {printf("factor => NOT factor \n");}
		;

relOp :		ASSIGN {printf("relOp => ASSIGN \n");}
		| LT GT {printf("relOp => LT GT \n");}
		| LT {printf("relOp => LT \n");}
		| LE {printf("relOp => LE \n");}
		| GE {printf("relOp => GE \n");}
		| GT {printf("relOp => GT \n");}
		;

sign :		ADD {printf("sign => ADD \n");}
		| MINUS {printf("sign => MINUS \n");}
		| {printf("sign => Null \n");}
		;

addOp :		ADD {printf("addOp => ADD \n");}
		| MINUS {printf("addOp => MINUS \n");}
		| OR {printf("addOp => OR \n");}
		;

mulOp :		TIMES {printf("mulOp => TIMES \n");}
		| DIV {printf("mulOp => DIV \n");}
		| AND {printf("mulOp => AND \n");}
		;
		
variable :	ID {printf("variable => ID \n");}
		| indexedVar {printf("variable => indexedVar \n");}
		;

indexedVar :	ID LSP expression RSP {printf("indexedVar => expression \n");}
		;

constant :	NUM {printf("constant => NUM \n");}
		| TRUE {printf("constant => TRUE \n");}
		| FALSE {printf("constant => FALSE \n");}
		| CC {printf("constant => CC \n");}
		;
%%

int yyerror(char *s)
{
	printf("%s\n",s);
        return 1;
}
