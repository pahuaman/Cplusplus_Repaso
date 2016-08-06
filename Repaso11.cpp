#include <iostream>
#include <vector>

using namespace std;

/*prototipos de clase */

template<class T, class U>
class Empleado
{
private:
    vector<T> nomb;
    vector<U> pago;

public:
    void Insertar(T aNomb, U aPago)
    {
        nomb.push_back(aNomb);
        pago.push_back(aPago);
    }//metodo insertar

    void get(int n)
    {
        cout<<nomb[n]<<" : "<<pago[n];

    }//funicon para mostrar el registro

};//class


int main()
{
    Empleado<string, int> MiEmpleado;

    MiEmpleado.Insertar("Daniel", 6700);
    MiEmpleado.Insertar("Gabriela", 8900);

    MiEmpleado.get(0);
    cout<<""<<endl;
    MiEmpleado.get(1);

    return 0;
}//main
