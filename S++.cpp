#include "S++.h"
using namespace std;

void symbolTable::addVar(string type, string name, string value, string def)
{
    varInfo v;
    v.type=type;
    v.name=name;
    v.value=value;
    v.def=def;
    varInfoShow.push_back(v);
}

void symbolTable::printTable()
{
    cout<<"Information about variables:"<<endl;
    for(varInfo v: varInfoShow)
    {
        cout<<"Type: "<<v.type<<" Name: "<<v.name<<" Value: "<<v.value<<" Defined: "<<v.def<<endl;
    }
    
}