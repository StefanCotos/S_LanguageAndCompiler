#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

struct varInfo{
    string type;
    string name;
    string value;
    string def;
};

struct funcInfo{
    string name;
    string returnType;
    vector<pair<string,string>> parameters;
    string def;
};

class symbolTable{
    vector<varInfo> varInfoShow;
    vector<funcInfo> funcInfoShow;

    public:
    void addVar(string type, string name, string value, string def);
    void printTable();
};
