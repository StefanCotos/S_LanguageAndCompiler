#include "S++.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cctype>
#include <memory>
#include <stack>
using namespace std;
ofstream fout("SymbolTable.txt");

void symbolTable::addVar(string type, string name, string value, string def)
{
    varInfo v;
    v.type = type;
    v.name = name;
    v.value = value;
    v.def = def;
    varInfoShow.push_back(v);
}

void symbolTable::addFunc(string name, string returnType, vector<string> parameters, string def)
{
    funcInfo f;
    f.name = name;
    f.returnType = returnType;
    f.parameters = parameters;
    f.def = def;
    funcInfoShow.push_back(f);
}

string symbolTable::varName(string msg) 
{
    for (varInfo v : varInfoShow)
    {
        if (v.name == msg)
        {
            return v.name;
        }
    }
    return "NULL";
}

string symbolTable::varType(string msg) 
{
    for (varInfo v : varInfoShow)
    {
        if (v.name == msg)
        {
            return v.type;
        }
    }
    return "NULL";
}

string symbolTable::varVal(string msg) 
{
    for (varInfo v : varInfoShow)
    {
        if (v.name == msg)
        {
            return v.value;
        }
    }
    return "NULL";
}

string symbolTable::varDef(string msg) 
{
    for (varInfo v : varInfoShow)
    {
        if (v.name == msg)
        {
            return v.def;
        }
    }
    return "NULL";
}

string symbolTable::funcName(string msg) 
{
    for (funcInfo f : funcInfoShow)
    {
        if (f.name == msg)
        {
            return f.name;
        }
    }
    return "NULL";
}

string symbolTable::funcType(string msg) 
{
    for (funcInfo f : funcInfoShow)
    {
        if (f.name == msg)
        {
            return f.returnType;
        }
    }
    return "NULL";
}

string symbolTable::funcPar(string msg) 
{
    string aux;
    for (funcInfo f : funcInfoShow)
    {
        if (f.name == msg)
        {
            for (auto vect : f.parameters)
            {
                aux = aux + vect;
                aux = aux + " ";
            }

            if (!aux.empty())
            {
                aux.erase(aux.size() - 1);
            }
            return aux;
        }
    }
    return ""; // Returnăm un șir vid în loc de "NULL"
}

string symbolTable::funcDef(string msg) 
{
    for (funcInfo f : funcInfoShow)
    {
        if (f.name == msg)
        {
            return f.def;
        }
    }
    return "NULL";
}

void symbolTable::printTable()
{
    fout << "Information about variables:" << endl;
    for (varInfo v : varInfoShow)
    {
        if(v.type=="normal" || v.type=="_const_ normal")
            fout << "Type: " << v.type << " Name: " << v.name << " Value: " << ast.ret_value_int(v.value) << " Defined: " << v.def << endl;
        else if(v.type=="different" || v.type=="_const_ different")
            fout << "Type: " << v.type << " Name: " << v.name << " Value: " << ast.ret_value_float(v.value) << " Defined: " << v.def << endl;
        else
            fout << "Type: " << v.type << " Name: " << v.name << " Value: " << v.value << " Defined: " << v.def << endl;
    }
    fout << endl;
    fout << "Information about functions:" << endl;
    for (funcInfo f : funcInfoShow)
    {
        fout << "Name: " << f.name << " Return type: " << f.returnType << " Parameters type: ";
        for (auto vect : f.parameters)
            fout << vect << " ";
        fout << " Defined: " << f.def << endl;
    }
}

vector<Tokens> AST::lexing(const string &input)
{
    vector<Tokens> tokens;
    auto elements = input.begin();
    string str;

    while (elements != input.end())
    {
        char c = *elements;
        switch (c)
        {
        case '0' ... '9':
        {
            while (elements != input.end() && (isdigit(*elements) || *elements == '.'))
            {
                str.push_back(*elements);
                elements++;
            }
            tokens.push_back(Tokens(TokenType::Operand, str));
            str.clear();
            break;
        }
        case '_':
        {
            str.push_back(*elements);
            elements++;
            if(*elements=='+' || *elements=='-' || *elements=='*' || *elements=='/' || *elements == '%')
            {
                str.push_back(*elements);
                elements++;
                if(*elements=='_')
                    str.push_back(*elements);
                else
                    throw runtime_error("Eroare: Expresie incorecta!");
            }
            else
                throw runtime_error("Eroare: Expresie incorecta!");
            tokens.push_back(Tokens(TokenType::Operator, str));
            elements++;
            str.clear();
            break;
        }
        case '(':
            str.push_back(*elements);
            tokens.push_back(Tokens(TokenType::LParenthesis, str));
            elements++;
            str.clear();
            break;
        case ')':
            str.push_back(*elements);
            tokens.push_back(Tokens(TokenType::RParenthesis, str));
            elements++;
            str.clear();
            break;
        case ' ':
            ++elements;
            break;
        default:
            throw runtime_error("Eroare: Expresie incorecta!");
        }
    }
    return tokens;
}

vector<Tokens> AST::lexing_bool(const string &input)
{
    vector<Tokens> tokens;
    auto elements = input.begin();
    string str;

    while (elements != input.end())
    {
        char c = *elements;
        switch (c)
        {
        case '0' ... '9':
        {
            while (elements != input.end() && (isdigit(*elements) || *elements == '.'))
            {
                str.push_back(*elements);
                elements++;
            }
            tokens.push_back(Tokens(TokenType::Operand, str));
            str.clear();
            break;
        }
        case '_':
        {
            str.push_back(*elements);
            elements++;
            if (*elements == '+' || *elements == '-' || *elements == '*' || *elements == '/' || *elements == '%' || *elements == '&' || *elements == '|' || *elements == '!')
            {
                str.push_back(*elements);
                elements++;
                if (*elements == '_')
                    str.push_back(*elements);
                else
                    throw runtime_error("Eroare: Expresie incorecta!");
            }
            else
                throw runtime_error("Eroare: Expresie incorecta!");
            tokens.push_back(Tokens(TokenType::Operator, str));
            elements++;
            str.clear();
            break;
        }
        case 'a' ... 'z':
        {
            while (elements != input.end() && (*elements >= 'a' && *elements <= 'z'))
            {
                str.push_back(*elements);
                elements++;
            }
            if (str == "eq" || str == "neq" || str == "leq" || str == "geq" || str == "low" || str == "great")
                tokens.push_back(Tokens(TokenType::Operator, str));
            else if (str == "true" || str == "false")
                tokens.push_back(Tokens(TokenType::Operand, str));
            else
                throw runtime_error("Eroare: Expresie incorecta!");
            str.clear();
            break;
        }
        case '(':
            str.push_back(*elements);
            tokens.push_back(Tokens(TokenType::LParenthesis, str));
            elements++;
            str.clear();
            break;
        case ')':
            str.push_back(*elements);
            tokens.push_back(Tokens(TokenType::RParenthesis, str));
            elements++;
            str.clear();
            break;
        case ' ':
            ++elements;
            break;
        default:
            throw runtime_error("Eroare: Expresie incorecta!");
        }
    }
    return tokens;
}

int AST::get_precedence(string op)
{
    if (op == "_+_" || op == "_-_")
        return 1;
    else if (op == "_*_" || op == "_/_" || op == "_%_")
        return 2;
    else
        return 0;
}

int AST::get_precedence_bool(string op)
{
    if (op == "_+_" || op == "_-_")
        return 1;
    else if (op == "_*_" || op == "_/_" || op == "_%_")
        return 2;
    else if (op == "eq" || op == "neq" || op == "leq" || op == "geq" || op == "low" || op == "great")
        return 3;
    else if (op == "_&_" || op == "_|_")
        return 4;
    else
        return 0;
}

Operations AST::parse(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
{
    if (tokens_iter->type == TokenType::Operand)
    {
        return Operations(tokens_iter->type, tokens_iter->value);
    }
    else if (tokens_iter->type == TokenType::LParenthesis)
    {
        tokens_iter++;
        auto expr = parse_expression(tokens, tokens_iter);
        if (tokens_iter->type == TokenType::RParenthesis)
            return expr;
        else
            throw runtime_error("Eroare: Paranteza nu s-a inchis!");
    }
    else
        throw std::runtime_error("Eroare: Token incorect!");
}

Operations AST::parse_expression(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
{
    Operations expr;
    if (tokens.size() == 1)
    {
        auto left_expr = parse(tokens, tokens_iter);
        expr = move(left_expr);
    }
    else
    {
        auto left_expr = parse(tokens, tokens_iter);
        tokens_iter++;
        while (tokens_iter != tokens.end())
        {
            if (tokens_iter->type == TokenType::Operator)
            {
                Operations new_expr;
                auto token_value = tokens_iter->value;
                auto token_type = tokens_iter->type;
                auto precedence = get_precedence(tokens_iter->value);
                tokens_iter++;
                auto right_expr = parse(tokens, tokens_iter);
                tokens_iter++;

                while (tokens_iter != tokens.end())
                {
                    if (tokens_iter->type == TokenType::Operator)
                    {
                        auto next_token_value = tokens_iter->value;
                        auto next_token_type = tokens_iter->type;
                        auto next_precedence = get_precedence(tokens_iter->value);
                        if (next_precedence > precedence)
                        {
                            tokens_iter++;
                            new_expr.value = next_token_value;
                            new_expr.type = next_token_type;
                            new_expr.left_expr = make_unique<Operations>(move(right_expr));
                            new_expr.right_expr = make_unique<Operations>(move(parse(tokens, tokens_iter)));
                            right_expr = move(new_expr);
                        }
                        else if (next_precedence <= precedence)
                        {
                            tokens_iter++;
                            new_expr.value = token_value;
                            new_expr.type = token_type;
                            new_expr.left_expr = make_unique<Operations>(move(left_expr));
                            new_expr.right_expr = make_unique<Operations>(move(right_expr));
                            right_expr = parse(tokens, tokens_iter);
                            left_expr = move(new_expr);
                            token_value = next_token_value;
                            token_type = next_token_type;
                            precedence = next_precedence;
                        }
                        else
                            break;
                        tokens_iter++;
                    }
                    else
                        break;
                }
                expr.value = token_value;
                expr.type = token_type;
                expr.left_expr = make_unique<Operations>(move(left_expr));
                expr.right_expr = make_unique<Operations>(move(right_expr));
            }
            else
                break;
        }
    }
    return expr;
}

Operations AST::parsing(vector<Tokens> tokens)
{
    auto tokens_iter = tokens.begin();
    return parse_expression(tokens, tokens_iter);
}

Operations AST::parse_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
{
    if (tokens_iter->type == TokenType::Operand)
    {
        return Operations(tokens_iter->type, tokens_iter->value);
    }
    else if (tokens_iter->type == TokenType::LParenthesis)
    {
        tokens_iter++;
        auto expr = parse_expression_bool(tokens, tokens_iter);
        if (tokens_iter->type == TokenType::RParenthesis)
            return expr;
        else
            throw runtime_error("Eroare: Paranteza nu s-a inchis!");
    }
    else
        throw std::runtime_error("Eroare: Token incorect!");
}

Operations AST::parse_expression_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
{
    Operations expr;
    Operations new_expr;

    if (tokens.size() == 1)
    {
        auto left_expr = parse_bool(tokens, tokens_iter);
        expr = move(left_expr);
    }
    else
    {
        Operations left_expr, right_expr;
        if (tokens_iter->value == "_!_")
        {
            new_expr.value = tokens_iter->value;
            new_expr.type = tokens_iter->type;
            tokens_iter++;
            left_expr = parse_bool(tokens, tokens_iter);
            new_expr.left_expr = make_unique<Operations>(move(left_expr));
            left_expr = move(new_expr);
        }
        else
            left_expr = parse_bool(tokens, tokens_iter);
        tokens_iter++;
        while (tokens_iter != tokens.end())
        {
            if (tokens_iter->type == TokenType::Operator)
            {
                auto token_value = tokens_iter->value;
                auto token_type = tokens_iter->type;
                auto precedence = get_precedence_bool(tokens_iter->value);
                tokens_iter++;
                if (tokens_iter->value == "_!_")
                {
                    right_expr.value = tokens_iter->value;
                    right_expr.type = tokens_iter->type;
                    tokens_iter++;
                    right_expr.left_expr = make_unique<Operations>(move(parse_bool(tokens, tokens_iter)));
                }
                else
                    right_expr = parse_bool(tokens, tokens_iter);
                tokens_iter++;

                while (tokens_iter != tokens.end())
                {
                    if (tokens_iter->type == TokenType::Operator)
                    {
                        auto next_token_value = tokens_iter->value;
                        auto next_token_type = tokens_iter->type;
                        auto next_precedence = get_precedence_bool(tokens_iter->value);
                        if (next_precedence > precedence)
                        {
                            tokens_iter++;
                            new_expr.value = next_token_value;
                            new_expr.type = next_token_type;
                            new_expr.left_expr = make_unique<Operations>(move(right_expr));
                            if (tokens_iter->value == "_!_")
                            {
                                new_expr.right_expr= make_unique<Operations>();
                                new_expr.right_expr->value = tokens_iter->value;
                                new_expr.right_expr->type = tokens_iter->type;
                                tokens_iter++;
                                new_expr.right_expr->left_expr = make_unique<Operations>(move(parse_bool(tokens, tokens_iter)));
                            }
                            else
                                new_expr.right_expr = make_unique<Operations>(move(parse_bool(tokens, tokens_iter)));
                            right_expr = move(new_expr);
                        }
                        else if (next_precedence <= precedence)
                        {
                            tokens_iter++;
                            new_expr.value = token_value;
                            new_expr.type = token_type;
                            new_expr.left_expr = make_unique<Operations>(move(left_expr));
                            new_expr.right_expr = make_unique<Operations>(move(right_expr));
                            if (tokens_iter->value == "_!_")
                            {
                                right_expr.value = tokens_iter->value;
                                right_expr.type = tokens_iter->type;
                                tokens_iter++;
                                right_expr.left_expr = make_unique<Operations>(move(parse_bool(tokens, tokens_iter)));
                            }
                            else
                                right_expr = parse_bool(tokens, tokens_iter);
                            left_expr = move(new_expr);
                            token_value = next_token_value;
                            token_type = next_token_type;
                            precedence = next_precedence;
                        }
                        else
                            break;
                        tokens_iter++;
                    }
                    else
                        break;
                }
                expr.value = token_value;
                expr.type = token_type;
                expr.left_expr = make_unique<Operations>(move(left_expr));
                expr.right_expr = make_unique<Operations>(move(right_expr));
            }
            else
                break;
        }
    }
    return expr;
}

Operations AST::parsing_bool(vector<Tokens> tokens)
{
    auto tokens_iter = tokens.begin();
    return parse_expression_bool(tokens, tokens_iter);
}

int AST::result_int(const Operations &node)
{
    if (node.type == 0)
        return stoi(node.value);
    else if (node.value == "_+_")
        return result_int(*node.left_expr) + result_int(*node.right_expr);
    else if (node.value == "_-_")
        return result_int(*node.left_expr) - result_int(*node.right_expr);
    else if (node.value == "_*_")
        return result_int(*node.left_expr) * result_int(*node.right_expr);
    else if (node.value == "_/_")
    {
        double right_value = result_int(*node.right_expr);
        if (right_value == 0)
        {
            throw std::runtime_error("Eroare: Impărțire la zero!");
        }
        return result_int(*node.left_expr) / right_value;
    }
    else if(node.value == "_%_")
        return result_int(*node.left_expr) % result_int(*node.right_expr);
    else
    {
        throw runtime_error("Eroare: Operator necunoscut!");
    }
}

float AST::result_float(const Operations &node)
{
    if (node.type == 0)
        return stof(node.value);
    else if (node.value == "_+_")
        return result_float(*node.left_expr) + result_float(*node.right_expr);
    else if (node.value == "_-_")
        return result_float(*node.left_expr) - result_float(*node.right_expr);
    else if (node.value == "_*_")
        return result_float(*node.left_expr) * result_float(*node.right_expr);
    else if (node.value == "_/_")
    {
        double right_value = result_float(*node.right_expr);
        if (right_value == 0)
        {
            throw std::runtime_error("Eroare: Impărțire la zero!");
        }
        return result_float(*node.left_expr) / right_value;
    }
    else
    {
        throw runtime_error("Eroare: Operator necunoscut!");
    }
}

int AST::result_bool(const Operations &node)
{
    if (node.type == 0 && node.value == "true")
        return true;
    else if (node.type == 0 && node.value == "false")
        return false;
    else if (node.type == 0)
        return stoi(node.value);
    else if (node.value == "_+_")
        return result_int(*node.left_expr) + result_int(*node.right_expr);
    else if (node.value == "_-_")
        return result_int(*node.left_expr) - result_int(*node.right_expr);
    else if (node.value == "_*_")
        return result_int(*node.left_expr) * result_int(*node.right_expr);
    else if (node.value == "_/_")
    {
        double right_value = result_int(*node.right_expr);
        if (right_value == 0)
        {
            throw std::runtime_error("Eroare: Impărțire la zero!");
        }
        return result_int(*node.left_expr) / right_value;
    }
    else if (node.value == "_%_")
        return result_int(*node.left_expr) % result_int(*node.right_expr);
    else if (node.value == "eq")
    {
        if (result_bool(*node.left_expr) == result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "neq")
    {
        if (result_bool(*node.left_expr) != result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "low")
    {
        if (result_bool(*node.left_expr) < result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "great")
    {
        if (result_bool(*node.left_expr) > result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "leq")
    {
        if (result_bool(*node.left_expr) <= result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "geq")
    {
        if (result_bool(*node.left_expr) >= result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "_&_")
    {
        if (result_bool(*node.left_expr) && result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "_|_")
    {
        if (result_bool(*node.left_expr) || result_bool(*node.right_expr))
            return true;
        return false;
    }
    else if (node.value == "_!_")
        return !(result_bool(*node.left_expr));
    else
    {
        throw runtime_error("Eroare: Operator necunoscut!");
    }
}

string AST::ret_value_int(string input)
{
    auto t = lexing(input);
    auto expr = parsing(t);
    //preorder(expr); cout<<endl;
    auto res = result_int(expr);
    //cout << "Rezultatul: " << res<<endl;
    string value = to_string(res);
    return value;
}

string AST::ret_value_float(string input)
{
    auto t = lexing(input);
    auto expr = parsing(t);
    //preorder(expr); cout<<endl;
    auto res = result_float(expr);
    //cout << "Rezultatul: " << res<<endl;
    string value = to_string(res);
    return value;
}

string AST::ret_value_bool(string input)
{
    auto t = lexing_bool(input);
    auto expr = parsing_bool(t);
    //preorder(expr); cout<<endl;
    auto res = result_bool(expr);
    //cout << "Rezultatul: " << res<<endl;
    if(res==1)
        return "true";
    return "false";
}

void AST::preorder(const Operations &node)
{
    std::cout << node.value << "(" << node.type << ")"
              << " ";
    if (node.left_expr)
    {
        cout << "left_expr: ";
        preorder(*node.left_expr);
    }
    if (node.right_expr)
    {
        cout << "right_expr: ";
        preorder(*node.right_expr);
    }
}
