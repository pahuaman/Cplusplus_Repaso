#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

int a,b; //variables globales
int ch;

void Captura()
{
    cout<<"captura el 1er numero: "; cin>>a; cout<<endl;
    cout<<"captura el 2do numero: "; cin>>b; cout<<endl;
}//captura

inline void Limpia_P(){system("cls"); };

int Menu()
{
    Limpia_P();
    cout<<"1. suma "<<endl;
    cout<<"2. resta "<<endl;
    cout<<"3. multiplica "<<endl;
    cout<<"4. salir "<<endl;
    cout<<"ELIGE TU OPCION "<<endl;

    cin>>ch;

    return ch;
}

int main ()
{
    Captura();

    Menu:

    Menu();

    switch(ch)
    {
        case 1:
            Limpia_P();
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;

        case 2:
            Limpia_P();
            cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

        case 3:
            Limpia_P();
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;

        case 4:
            Limpia_P();
            return 0;
        break;

        default:
            Limpia_P();
            cout<<endl<<"opcion no valida "<<endl;
            system("Pause");
            goto Menu;
        break;

    }//switch


    return 0;

}//main
