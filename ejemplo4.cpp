#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector <string> split (string texto, char separador )
{
    vector <string> datos;
     string valor;
    for ( auto i : texto )
    {
        if ( i!= separador)
        {
            valor = valor + i;
        }
        else 
        {
            datos.push_back(valor);
            valor.clear();
        }
    }
    datos.push_back(valor);
    return datos;
}


int main()
{
    string texto = "dato1,10.95,19.8";
    
    auto datos = split ( texto, ',');
    
    for ( auto i : datos )
    {
        cout << i << endl;
    }
    
    return 0;
}