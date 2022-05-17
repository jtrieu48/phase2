%{
#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos; 
void yyerror(const char * msg) {
	printf("Error: On line %d, column %d: %s \n", currLine, currPos, msg);
}
%}

%union{
	char * identVal;
	int numVal;
}

%error-verbose

%start program

%token FUNCTION BEGINPARAMS ENDPARAMS BEGINLOCALS ENDLOCALS BEGINBODY ENDBODY INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE READ WRITE TRUE FALSE ASSIGN SEMICOLON COLON COMMA LPAREN RPAREN L_SQUARE_BRACKET R_SQUARE_BRACKET RETURN MULT DIV MOD ADD SUB LT LTE GT GTE EQ NEQ NOT AND OR

%token <numVal> NUMBER

%token <identVal> IDENT

%%
program:	functions
       		{printf("program->functions\n");}
		| error {yyerrok; yyclearin;}
       		;

functions: 	/*epsilon*/
	 	{printf("functions->epsilon\n");}
		| function functions
		  {printf("functions->function functions\n");}
		;

function:	FUNCTION Ident SEMICOLON BEGINPARAMS declarations ENDPARAMS BEGINLOCALS declarations ENDLOCALS BEGINBODY statements ENDBODY
		{printf("function->FUNCTION Ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
		;

declarations:	/*epsilon*/
	    	{printf("declarations->epsilon\n");}
		| declaration SEMICOLON declarations
		  {printf("declarations->declaration SEMICOLON declarations\n");}
		| declaration error {yyerrok;}
		;

declaration:	identifiers COLON INTEGER
	   	{printf("declaration->identifiers COLON INTEGER\n");}
		| identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		  {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", $5);}
		;

identifiers:	Ident
	  	{printf("identifiers->Ident\n");}
		| Ident COMMA identifiers
		  {printf("identifiers->Ident COMMA identifiers\n");}
		;

Ident:		IDENT
     		{printf("Ident->IDENT %s\n", $1);}
		;

statements:	statement SEMICOLON statements
	  	{printf("statements->statement SEMICOLON statements\n");}
		| statement SEMICOLON
		  {printf("statements->statement SEMICOLON\n");}
		| statement error {yyerrok;}
		;

statement:	statementVar
	  	{printf("statements->statementVar\n");}
	  	| statementIf
		  {printf("statements->statementIf\n");}
		| statementWhile
		  {printf("statements->statementWhile\n");}
		| statementDo
		  {printf("statements->statementDo\n");}
		| statementFor
		  {printf("statements->statementFor\n");}
		| statementRead
		  {printf("statements->statementRead\n");}
		| statementWrite
		  {printf("statements->statementWrite\n");}
		| statementCont
		  {printf("statements->statementCont\n");}
		| statementRet
		  {printf("statements->statementRet\n");}
		;

statementVar:		var ASSIGN expression
    		{printf("statementVar->var ASSIGN expression\n");}
		;

statementIf:		IF boolExpr THEN statements ENDIF
   		{printf("statementIf->IF boolExpr THEN statements ENDIF\n");}
		| IF boolExpr THEN statements ELSE statements ENDIF
		{printf("statementIf->IF boolExpr THEN statements ELSE statements ENDIF\n");}
		;

statementWhile:		WHILE boolExpr BEGINLOOP statements ENDLOOP
      		{printf("statementWhile->WHILE boolExpr BEGINLOOP statements ENDLOOP\n");}
		;

statementDo:		DO BEGINLOOP statements ENDLOOP WHILE boolExpr
   		{printf("statementDo-> DO BEGINLOOP statements ENDLOOP WHILE boolExpr\n");}
		;

statementFor:		FOR var ASSIGN NUMBER SEMICOLON boolExpr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
    		{printf("statementFor-> FOR var ASSIGN NUMBER %d SEMI COLON boolExpr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n", $4);}
		;

varLoop:	/*epsilon*/
       		{printf("varLoop->epsilon\n");}
		| COMMA var varLoop
		  {printf("varLoop-> COMMA var varLoop\n");}
		;

statementRead:		READ var varLoop
     		{printf("statementRead->READ var varLoop\n");}
		;
     
statementWrite:		WRITE var varLoop
      		{printf("statementWrite->WRITE var varLoop\n");}
		;

statementCont:	CONTINUE
	 	{printf("statementCont->CONTINUE\n");}
		;

statementRet:	RETURN expression
       		{printf("statementRet->RETURN expression\n");}
		;

boolExpr:	relExprs
	 	{printf("boolExpr->relExprs\n");}
		| boolExpr OR relExprs
		  {printf("boolExpr->boolExpr OR relExprs\n");}
		;

relExprs:	relExpr
	      	{printf("relExprs->relExprs\n");}
		| relExprs AND relExprs
		  {printf("relExprs->relExprs AND relExprs\n");}
		;

relExpr:	NOT ece
	     	{printf("relExpr->NOT ece\n");}
		| ece
		  {printf("relExprs->ece\n");}
		| TRUE
		  {printf("relExprs->TRUE\n");}
		| FALSE
		  {printf("relExprs->FALSE\n");}
		| LPAREN boolExpr RPAREN
		  {printf("relExprs->LPAREN boolExpr RPAREN\n");}
		;

ece:		expression comp expression
   		{printf("ece->expression comp expression\n");}
		;

comp:		
		LT
		  {printf("comp->LT\n");}
		| GT
		  {printf("comp->GT\n");}
		| LTE
		  {printf("comp->LTE\n");}
		| GTE
		  {printf("comp->GTE\n");}
		|  EQ
    		{printf("comp->EQ\n");}
		| NEQ
		  {printf("comp->NEQ\n");}
		;

expression:	multiExpr addSubExpr
	  	{printf("expression->multiExpr addSubExpr\n");}
		| error {yyerrok;}
		;

addSubExpr:	/*epsilon*/
	  	{printf("addSubExpr->epsilon\n");}
		| ADD expression
		  {printf("addSubExpr->ADD expression\n");}
		| SUB expression
		  {printf("addSubExpr->SUB expression\n");}
		;

multiExpr:	term
	  	{printf("multiExpr->term\n");}
		| term MULT multiExpr
		  {printf("multiExpr->term MULT multiExpr\n");}
		| term DIV multiExpr
		  {printf("multiExpr->term DIV multiExpr\n");}
		| term MOD multiExpr
		  {printf("multiExpr->term MOD multiExpr\n");}
		;

term:		SUB var
    		{printf("term->SUB var\n");}
		| var
		  {printf("term->var\n");}
		| SUB NUMBER
		  {printf("term->SUB NUMBER %d\n", $2);}
		| NUMBER
		  {printf("term->NUMBER %d\n", $1);}
		| LPAREN expression RPAREN
		  {printf("term->LPAREN expression RPAREN\n");}
		| Ident LPAREN expression expressionLoop RPAREN
		  {printf("term->Ident LPAREN expression expressionLoop RPAREN\n");}
		;

expressionLoop:	/*epsilon*/
	      	{printf("expressionLoop->epsilon\n");}
	      	| COMMA expression expressionLoop
	      	  {printf("exprssionLoop->COMMA expression expressionLoop\n");}
		;

var:		Ident
   		{printf("var->Ident\n");}
		| Ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		  {printf("var->Ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BACKET\n");}
		| Ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		  {printf("var->Ident L_SQSUARE_BRACKET expression R_SQUARE_BRACKET\n");}
		;

%%

int main(int argc, char ** argv) {
	if (argc >= 2) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			yyin = stdin;
		}
	}
	else {
		yyin = stdin;
	}
	yyparse();
	return 1;
}