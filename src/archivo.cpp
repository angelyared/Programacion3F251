#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Persona
{
    char nombre[10];
    int edad;
};

int main(int argc, char const *argv[])
{
    ifstream archivoEntrada("archivo.txt");
    if (!archivoEntrada) {
        cerr << "Error al leer archivo" << endl;
        return 1; // Finalizar con error
    }
    
    cout << "Leyendo archivo" << endl;
    string linea;
    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
    }
    
    archivoEntrada.close();

    //
    ofstream archivoSalidaBinario ("archivo.bin", ios::binary);
    if(!archivoSalidaBinario){
        cerr << "Error al leer archivo"<< endl;
        return 1; //Finalizar con error
    }

    Persona p1 = {"Juan", 20};
    Persona p2 = {"Pedro", 30};
    Persona p2 = {"Maria", 40};

    
    archivoSalidaBinario.write((char*)(&p1), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p2), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p3), sizeof(Persona));

    return 0;

}