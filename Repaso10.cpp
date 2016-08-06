#include <iostream>

using namespace std;

template<typename T, typename U>
T ValorMayor(T Val1, U Val2)
{
    T  r =(Val1 > Val2) ? Val1 : Val2; //funcion operador ternario ?
    return r;
}//funcion para evaluar


int main()
{
    double x  = 13.678;
    int    x2 = 6;

    cout<<"El valor mayor es: "<< ValorMayor(x,x2);

    return 0;
}//main
