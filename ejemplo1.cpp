#include<fstream>
#include<iostream>

using namespace std;

int main ()
{
    ofstream archivo("datos.txt");
    
    string texto;
    
    cout << "Ingrese el texto: " << endl;
    
    while ( texto != "*" )
    {
        getline( cin, texto);
        
        //Impresion en la pantalla
        //cout << "Linea ingresada es: " << texto << endl;
        
        if (texto != "*" )
        archivo << texto << endl;
    }
    
    archivo.close();

    
    return 0;
}
