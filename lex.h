//**************************************
// lex.h
//
// Defines global symbols used the the flex generated lexer and 
// bison generated parser.
//
// Author: Alexander Tappin
//
// parse function generated by bison
#pragma once
/*#include "cSymbol.h"
#include "cSymbolTable.h"
#include "cAstNode.h"
#include "cExprNode.h"
#include "cStmtNode.h"
#include "cDeclNode.h"
#include "cBlockNode.h"
#include "cPrintNode.h"
#include "cStmtsNode.h"
#include "cIfNode.h"
#include "cScanNode.h"
#include "cWhileNode.h"
#include "cAssignNode.h"
#include "cReturnNode.h"
#include "cBaseDecl.h"
#include "cDeclsNode.h"
#include "cVarDeclNode.h"
#include "cStructDeclNode.h"
#include "cFuncCall.h"
#include "cFuncDeclNode.h"
#include "cFuncHeader.h"
#include "cFuncPrefix.h"
#include "cParamNode.h"
#include "cParamsNode.h"
#include "cParamSpec.h"
#include "cParamsSpec.h"
#include "cIntExprNode.h"
#include "cFloatExprNode.h"
#include "cBinaryExprNode.h"
#include "cVarRefExprNode.h"
#include "cVarPartNode.h"
#include "cArraySpec.h"
#include "cArrayVal.h"
#include "cArrayDecl.h"*/
#include "langparse.h"

int yyparse();

// lexer function generated by flex
int yylex();

extern char *yytext;        // text of the current token
extern int yylineno;        // line number of current token
extern FILE *yyin;          // input file for lexer
