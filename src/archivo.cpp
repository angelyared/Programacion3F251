#include<iostream>
#include<fstream>
#include<string>
using namespace std;

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

}