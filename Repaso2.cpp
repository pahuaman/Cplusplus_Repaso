#include <iostream>
#include <sstream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

inline void Keep_window_open(){char c; cin>>c;}

int main()
{
    vector <string> Palabra;
    string Pal1, no_pal="brocoli";
    while(cin>>Pal1)//ctrl+z para terminar el ciclo
     {
         Palabra.push_back(Pal1);

     }//while
    //system("cls");
    for(int i=0; i<Palabra.size(); i++)
    {
        if(Palabra[i]!=no_pal)
        {
            cout<<Palabra[i]<<"\n";
        }//if
        else if(Palabra[i]==no_pal)
        {
            Palabra[i]="::censurado::";
            cout<<Palabra[i]<<endl;
        }//else if
    }//for
    Keep_window_open();
    return 0;
}

