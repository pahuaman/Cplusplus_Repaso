#include <iostream>

using namespace std;

/*utilizando Genericos en C++ la palabras reservadas template<typename T>*/

template<typename T>
class Lista
{
private:
    T   num[100];
    int top;

public:
    Lista()
    {
        top=-1;
    }//constrcutor

    void add(T valor)
    {
        top++;
        num[top] = valor;
    }//metodo para agregar

    T quitar_ultimo()
    {
        T valor = num[top];
        num[top] = 0;
        top--;
        return valor;
    }//funcion ultimo

    void print_list()
    {
        for(int i = 0; i<=top; i++)
        {
            cout<<"\n"<<num[i];
        }//for
    }//funcion para imprimir nuestra lista

};

template<>
class Lista<string>
{
private:
    string  nombre[100];
    int top;

public:
    Lista()
    {
        top=-1;
    }//constrcutor

    void add(string valor)
    {
        top++;
        nombre[top] = valor;
    }//metodo para agregar

    string quitar_ultimo()
    {
        string valor = nombre[top];
        nombre[top] = " ";
        top--;
        return valor;
    }//funcion ultimo

    void print_list()
    {
        for(int i = 0; i<=top; i++)
        {
            cout<<"\n"<<nombre[i];
        }//for
    }//funcion para imprimir nuestra lista
};

int main()
{
    Lista<string> X;

    X.add("hola");
    X.add("mundo");
    X.add("yeah");

    X.print_list();

    cout<<"\n______________"<<endl<<endl;

    cout<<"Elemento eliminado "<< X.quitar_ultimo();

    cout<<"\n______________"<<endl<<endl;

    X.print_list();

    return 0;
}//main
