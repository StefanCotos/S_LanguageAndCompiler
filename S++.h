#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cctype>
#include <memory>
#include <stack>
using namespace std;

extern bool isInteger(const string& s);
extern bool isFloat(const string& s);
extern bool isChar(const string& s);
extern bool isBool(const string& s);
extern bool isString(const string& s);

struct varInfo
{
    string name;
    string type;

    string value;
    string def;
};

struct funcInfo
{
    string name;
    string returnType;
    vector<string> parameters;
    string def;
};

struct classInfo
{
    string name;
    string def;
};

enum TokenType
{
    Operand,
    Operator,
    LParenthesis,
    RParenthesis,
};

struct Tokens
{
    TokenType type;
    string value;

    Tokens(TokenType type, string value) : type(type), value(value) {}
};

struct Operations
{
    TokenType type;
    string value;
    unique_ptr<Operations> left_expr;
    unique_ptr<Operations> right_expr;

    Operations(const TokenType &type, const string &value) : type(type), value(value), left_expr(nullptr), right_expr(nullptr) {}
    Operations() : value(""), left_expr(nullptr), right_expr(nullptr) {}
};

class AST
{
public:
    vector<Tokens> lexing(const string &input);
    vector<Tokens> lexing_bool(const string &input);
    int get_precedence(string op);
    int get_precedence_bool(string op);
    Operations parse(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);
    Operations parse_expression(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);
    Operations parsing(vector<Tokens> tokens);
    Operations parse_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);
    Operations parse_expression_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);
    Operations parsing_bool(vector<Tokens> tokens);
    int result_int(const Operations &node);
    float result_float(const Operations &node);
    int result_bool(const Operations &node);
    void preorder(const Operations &node);
    string ret_value_int(string input);
    string ret_value_float(string input);
    string ret_value_bool(string input);
    string ret_type(const string &s);
    string expr_type(const string &s);

};

class symbolTable
{
    vector<varInfo> varInfoShow;
    vector<funcInfo> funcInfoShow;
    vector<classInfo> classInfoShow;
    AST ast;

public:
    void addVar(string type, string name, string value, string def);
    void addFunc(string name, string returnType, vector<string> parameters, string def);
    void addClass(string name, string def);
    void printTable();
    string varName(string msg);  
    string varType(string msg);  
    string varVal(string msg);   
    string varDef(string msg);   
    string funcName(string msg); 
    string funcType(string msg); 
    string funcPar(string msg);  
    string funcDef(string msg);
    string className(string msg); 
};

void yyerror(const string &s);