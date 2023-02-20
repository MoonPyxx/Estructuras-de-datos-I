/*Ejercicio 5: Realizar un programa que a partir de un fichero “datos1.txt”,
escriba su contenido en otro fichero “datos2.txt” pero al revés,
sin usar ninguna estructura de datos auxiliar. */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
ifstream entrada("datos1.txt",ios::binary);
ofstream salida("datos2.txt", ios::binary);

if (entrada.fail()||salida.fail()){
    cout << "Error: no se puede abrir\n";
    return 1;
} else{
entrada.seekg(0,ios::end);
int n = entrada.tellg();

char c;
for (int i=n; i>0; i--){
    entrada.seekg(i-1, ios::beg);
    entrada.read((char*)&c, sizeof(char));
    salida.write((char*)&c, sizeof(char));
}
entrada.close();
salida.close();
cout << "Contenido de los archivos revertido correctamente" << endl;
system("pause");
return 0;
}
}
