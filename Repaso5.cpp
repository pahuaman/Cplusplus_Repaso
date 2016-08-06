#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int VarLocal = 25;
    int *PLocal = &VarLocal;
    int *PmemDin = new int;

    if(PmemDin == NULL)
    {
        cout<<"Error no queda memoria disponible! ";
        return 0;
    }//if
    *PmemDin = 7;
    cout<<"Variable Local: "<< VarLocal <<endl;
    cout<<"Valor al que apunta PLocal: "<< *PLocal <<endl;
    cout<<"Valor al que apunta PmemDin: "<< *PmemDin <<endl;
    delete PmemDin;

    PmemDin = new int;
    if(PmemDin == NULL)
    {
        cout<<"Error no queda memoria disponible! ";
        return 0;
    }//if
    *PmemDin = 9;
    cout<<"Valor al que apunta PmemDin: "<< *PmemDin <<endl;
    delete PmemDin;
    return 0;
}
