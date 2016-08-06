#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int *pVar=0; //puntero NULL
    int Var1=100, Var2=50;
    int *pVar01=&Var1;

    Var2+= *pVar01; //dereferenciacion

    cout<<"Puntero nulo: "<<pVar<<endl<<endl;
    cout<<"Valor de Var1: "<<Var1<<endl;
    cout<<"Direccion de Var1: "<<&Var1<<endl;
    cout<<endl<<endl;
    cout<<"Valor almacenado en la direccion a la que Pvar01 apunta: "<<*pVar01<<endl;
    cout<<"Direccion que el puntero pVar01 almacena: "<<pVar01<<endl;
    cout<<"direccion de memoria para pVar01: "<<&pVar01<<endl;

    cout<<endl<<endl<<endl;

    cout<<"Valor de Var2: "<<Var2<<endl;


    return 0;
}
