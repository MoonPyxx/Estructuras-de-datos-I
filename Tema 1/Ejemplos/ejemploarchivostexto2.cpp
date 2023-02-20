#include <iostream>
#include <fstream>
using namespace std;
int main() {
 int edad;
 float sueldo;
 ofstream salida("datos");
 cout << "Edad: ";
 cin >> edad;
 cout << "Sueldo: ";
 cin >> sueldo;
 salida << edad << " " << sueldo;
 salida.close();

ifstream entrada("datos");
 entrada >> edad >> sueldo;
 cout << edad << endl << sueldo;
 entrada.close();
 return 0;
}