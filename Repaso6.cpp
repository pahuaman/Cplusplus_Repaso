#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

int main()
{
    int Var1;
    int &rAlias = Var1;

    Var1 = 5;
    cout<<"Var1: "<< Var1 << endl;
    cout<<"Alias: "<< rAlias << endl;

    rAlias = 7;
    cout<<"Var1: "<< Var1 << endl;
    cout<<"Alias: "<< rAlias << endl;

    cout<<"&Var1: "<< &Var1 << endl;
    cout<<"&Alias: "<< &rAlias << endl;

    return 0;
}
