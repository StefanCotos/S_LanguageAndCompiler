#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <memory>
#include <stack>
using namespace std;

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

vector<Tokens> lexing(const string &input)
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
            if (*elements == '+' || *elements == '-' || *elements == '*' || *elements == '/' || *elements == '%')
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

vector<Tokens> lexing_bool(const string &input)
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

int get_precedence(string op)
{
    if (op == "_+_" || op == "_-_")
        return 1;
    else if (op == "_*_" || op == "_/_" || op == "_%_")
        return 2;
    else
        return 0;
}

int get_precedence_bool(string op)
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

Operations parse_expression(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);

Operations parse(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
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

Operations parse_expression(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
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

Operations parsing(vector<Tokens> tokens)
{
    auto tokens_iter = tokens.begin();
    return parse_expression(tokens, tokens_iter);
}

Operations parse_expression_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter);

Operations parse_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
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

Operations parse_expression_bool(vector<Tokens> tokens, vector<Tokens>::iterator &tokens_iter)
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

Operations parsing_bool(vector<Tokens> tokens)
{
    auto tokens_iter = tokens.begin();
    return parse_expression_bool(tokens, tokens_iter);
}

void preorder(const Operations &node)
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

int result_int(const Operations &node)
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
    else if (node.value == "_%_")
        return result_int(*node.left_expr) % result_int(*node.right_expr);
    else
    {
        throw runtime_error("Eroare: Operator necunoscut!");
    }
}

float result_float(const Operations &node)
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

int result_bool(const Operations &node)
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

int main()
{
    /*string input = "(((2 _+_ 5) _*_ 5 _%_ 3) _*_ 10) _/_ 4 _-_ 2";
    auto t = lexing(input);
    for (auto token : t)
    {
        cout << "Tipul:" << token.type << " "
             << "Valoarea:" << token.value << endl;
    }
    auto expr = parsing(t);
    preorder(expr);
    cout << endl;
    cout << "Rezultatul:" << result_int(expr);
    cout << endl;*/

    //string input = "_!_((4 eq (10 _-_ 6)) _&_ _!_true _|_ _!_false) eq (12 neq 12) neq _!_true _&_ _!_(3 great 4)";
    string input="4 eq 4";
    auto t = lexing_bool(input);
    for (auto token : t)
    {
        cout << "Tipul:" << token.type << " "
             << "Valoarea:" << token.value << endl;
    }
    auto expr = parsing_bool(t);
    preorder(expr);
    cout << endl;
    string res;
    if (result_bool(expr) == 1)
        res = "true";
    else
        res = "false";
    cout << "Rezultatul:" << res;
    cout << endl;

    return 0;
}
