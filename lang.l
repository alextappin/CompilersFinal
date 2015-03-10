%{
// lang lexer definition file
//
// Author: Alexander Tappin

//#include "cSymbol.h"
//#include "cSymbolTable.h"
#include "lex.h"
#include "tokens.h"
//#include "langparse.h"

#define RETURN(a) return Return(a);
static int Return(int val);
%}

%option noyywrap
%option noinput
%option nounput
%option yylineno

    /* definitions go here. period is an example. */

identifiers         [a-z][a-z]*
integer             [-]?[0-9]+
operators           [*\-+\/]
comments            "//".*$
whitespace          [' '\t\n]*
%%
    // token definitions go here.
"end"                       RETURN(END);
"print"                     RETURN(PRINT);
{comments}                  //no comments
{identifiers}               {  
                                RETURN(IDENTIFIER);
                            }
{integer}                   {
                                RETURN(INT_VAL);
                            }
{operators}                 RETURN(yytext[0]);
{whitespace}                //no whitespace
.                           RETURN(JUNK_TOKEN);
%%

    // This function allows us to do extra processing on each token
static int Return(int val)
{
    //printf("Scanned '%s': %d\n", yytext, val);
    return val;
}


