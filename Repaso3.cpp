#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

inline void Pause(){cout<<"PRESIONE ENTER PARA CONTINUAR..."; cin.get();}
inline void Limpiar(){system("cls");}

class Num
{
private:
    int x;
    int y;

public:
    Num(int , int);
    ~Num();

    int getNumx();
    int getNumy();

    void setNumx(int);
    void setNumy(int);

};


int main()
{
  Num num01(0,0);
  int a,b;

  cout<<num01.getNumx()<<endl;
  cout<<num01.getNumy()<<endl;

  Pause();
  Limpiar();

  cout<<"ingresa numero a: "; cin>>a;
  cout<<"ingresa numero b: "; cin>>b;

  num01.setNumx(a);
  num01.setNumx(b);

  cout<<num01.getNumx()<<endl;
  cout<<num01.getNumy()<<endl;

  return 0;
}//main

Num::Num (int cx, int cy)
{
    x=cx;
    y=cy;
}

Num::~Num(){}

int Num::getNumx()
{
    return x;
}

int Num::getNumy()
{
    return y;
}

void Num::setNumx(int cX)
{
    x=cX;
}

void Num::setNumy(int cY)
{
    y=cY;
}
