/* lang.y */

%{
#include <iostream>
#include "lex.h"
%}

%locations

%union
    {
        int                 int_val;
    }
%{
    int yyerror(const char *msg);

%}

%token <int_val>    INT_VAL

%token  PRINT
%token  END
%token  OPERATOR
%token  IDENTIFIER
%token  JUNK_TOKEN



%%

program:    stmts END ';'       {}

stmts:      stmts stmt          {}
        |   stmt                {}

stmt:       expr PRINT ';'      {}
        |   END ';'             {}
ident:      expr IDENTIFIER ';' {}
expr:       INT_VAL             {}
        |   expr expr OPERATOR  {}
        |   ident               {}
        

%%

int yyerror(const char *msg)
{
    std::cerr << "ERROR: " << msg << " at symbol "
        << yytext << " on line " << yylineno << "\n";

    return 0;
}
