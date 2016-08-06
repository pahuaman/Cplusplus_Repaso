#include <iostream>
#include <sstream>

using namespace std;

template <typename T>
T ValorMax(T &a, T &b)
{
    if(a>b)
    {
        return a;
    }//if
    else
    {
        return b;
    }//else

}//funcio generica

int main()
{
    int v1 = 10;
    int v2 = 25;

    double x1 = 3.455;
    double x2 = 1.67;

    string p1 = "manzana";
    string p2 = "lampara";

    cout<<ValorMax(v1, v2)<<endl;
    cout<<ValorMax(x1, x2)<<endl;
    cout<<ValorMax(p1, p2)<<endl;

    return 0;
}//main
