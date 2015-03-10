/* lang.y */

%{
#include <iostream>
#include "cSymbol.h"
#include "cSymbolTable.h"
#include "cAstNode.h"
#include "lex.h"
%}

%locations

%union
    {
        int                 int_val;
    }


%token <int_val>    INT_VAL

%token  PRINT
%token  END
%token  OPERATOR
%token  IDENTIFIER
%token  JUNK_TOKEN



%%

program:    stmts               {}

stmts:      stmts stmt          {}
        |   stmt                {}

stmt:       expr ident          {}
        |   expr PRINT          {}
        |   END                 {}
ident:      expr IDENTIFIER     {}
oper:       expr OPERATOR       {}
expr:       INT_VAL             {}
        |   IDENTIFIER          {}
        |   expr oper                {}




%%


