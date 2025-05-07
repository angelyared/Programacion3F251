//Contenedores
#include <list>
#include <vector>
#include <map>
// Flujo de datos (stream)
#include <iostream>
#include <fstream>
#include <sstream>
//Cadenas de texto
#include <string>
using namespace std;
void demo();
enum TipoPokemon{
    FUEGO,
    PLANTA,
    AGUA,
    ELECTRICO,
    VOLADOR
};

class Pokemon{
    private:
        string nombre;
        list<TipoPokemon> tipos;
    public:
    Pokemon(){}
};

int main (int argc, char const *argv[]){
    demo();
    return 0;

}


void demo()
{
    //Arreglos Clasicos (memoria estatica)
    cout << "1.-Arreglos"<<endl;
    int edades [10];
    edades[0] = 1;
    edades [1] = 10;
    edades [2] = 20;
    edades [3] = 30;
    edades [4] = 40;
    cout << "Edad numero 1 : " << edades [0]<< endl; //<-- Acceder a un valor unico
    
    //Contenedores de la libreria estandar C++
    cout << "2.-Listas"<<endl;
    list<int> listaEdades;
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);
    //No se puede seleccionar un elemento unico de forma natural
    //Ya que la lista esta diseñada para ser recorridad
    int indice = 0;
    for (auto &&edad : listaEdades)
    {
        cout << "Edad numero "<< indice <<" : " << edades[indice]<<endl;
        indice++;
    }

    //Utilizar estructura de vector 
    //La cual si se puede acceder por elementos 
    cout << "3.-Vectores"<<endl;
    vector<int> vectorEntero;
    vectorEntero.push_back(1);
    vectorEntero.push_back(2);
    vectorEntero.push_back(3);
    vectorEntero.push_back(4);
    vectorEntero[4] = 5; //<-- Aqui utilizamos el operador []

    for(int i = 0; i < 5; i++){
        cout << "Edad"<< i <<" : "<< vectorEntero[i] <<endl;
    }

   
}