#include <iostream>
#include <fstream>

using namespace std;

struct ficha {
 char nombre[50];
 float nota;
};

int main() {
 ficha fichas[3] = { {"Ana", 7.2} ,{"Juan", 6.3}, {"Rodolfo",8} };
 int i;
 ofstream salida("fichas", ios::binary);
 if(salida.fail()) {
 cout << "No se puede abrir el archivo fichas";
 }
 else
 {
 salida.write((char*) fichas, sizeof(fichas));
 salida.close() ;
 for(i=0; i<3; i++) {
 fichas[i].nota = 0;
 }
 ifstream entrada("fichas", ios::binary);
 entrada.read((char *) fichas, sizeof(fichas));
 for(i=0; i<3; i++)
 cout << fichas[i].nombre << " " << fichas[i].nota << endl;
 entrada.close() ;
 }
 return 0;
}
