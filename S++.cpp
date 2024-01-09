#include "S++.h"
#include <fstream>
using namespace std;
ofstream fout("SymbolTable.txt");

void symbolTable::addVar(string type, string name, string value, string def)
{
    varInfo v;
    v.type=type;
    v.name=name;
    v.value=value;
    v.def=def;
    varInfoShow.push_back(v);
}

void symbolTable::addFunc(string name, string returnType, vector<string> parameters, string def)
{
    funcInfo f;
    f.name=name;
    f.returnType=returnType;
    f.parameters=parameters;
    f.def=def;
    funcInfoShow.push_back(f);
}

void symbolTable::printTable()
{
    fout<<"Information about variables:"<<endl;
    for(varInfo v: varInfoShow)
    {
        fout<<"Type: "<<v.type<<" Name: "<<v.name<<" Value: "<<v.value<<" Defined: "<<v.def<<endl;
    }
    fout<<"Information about functions:"<<endl;
    for(funcInfo f: funcInfoShow)
    {
        fout<<"Name: "<<f.name<<" Return type: "<<f.returnType<<" Parameters type: ";
        for(auto vect : f.parameters)
            fout<<vect<<" ";
        fout<<" Defined: "<<f.def<<endl;
    }
}