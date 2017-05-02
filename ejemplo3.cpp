#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
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
    // Nombre del archivo
    string na = "datos3.txt";
    
    // Crear un objeto de archivo de lectura
    ifstream archivo (na);
    
    // Variable de string para leer cada linea
    string texto;
    vector<string> vlineas;
    
    // Leo las lineas del archivo
    while ( getline (archivo, texto) )
    {
        //cout<<texto<<endl;
        
        //Agregando al vector vlineas
        vlineas.push_back(texto);
    }
    
    for (auto i : vlineas )
    {
        cout << i << endl;
    }
    

    // Imprimir usando el vector tradicional
    for ( int i= 0 ; i < vlineas.size() ; i++ )
    {
        cout << vlineas[i] << endl;
    }
    
    // Los vecotres por columna 
    vector <string> nombres;
    vector <float> notas1;
    vector <float> notas2;
    
    // Recorrer el vecotr de lineas y actualizar los vecotres columna
    for ( int i=1; i < vlineas.size(); i++ )
    {
        auto datos = split (vlineas[i], ',');
        nombres.push_back(datos[0]);
        
        notas1.push_back(atof(datos[1].c_str()));
        notas2.push_back(atof(datos[2].c_str()));
    }
    
    for ( auto i : nombres )
    cout << i << endl;
    
    float promedio=0;
    for ( auto i : notas1 )
    {
         cout << i << endl;
         promedio += i; // promedio = promedio + i 
    }
   
    promedio = promedio / notas1.size();
    
    cout << "El promedio es: " << promedio;
    
    
    
    
    // codigo para saber quie ha sacado la mejor nota ( examen )
    //int i = 0;

   // int winner = vector[0];

   // for(i=0;i < 10; i++)
    {
      //  printf("vector = %d \n", vector[i]);

       // if(winner > vector[i])
        {
            //printf("winner was %d \n", winner);
            //winner = vector[i];
           // printf("but now is %d \n", winner);
        }
    }

   // printf("the minimu is %d", winner);
    
    
    return 0;
} 
