//**************************************
// lex.h
//
// Defines global symbols used the the flex generated lexer and 
// bison generated parser.
//
// Author: Alexander Tappin, Anthony Nguyen
// alexander.tappin@oit.edu, anthony.nguyen@oit.edu
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
#include "cArrayDecl.h"
#include "langparse.h"*/

extern char *yytext;
extern int yylineno;
extern FILE *yyin;          // input file for lexer
extern int yyparse();
extern int yylex();