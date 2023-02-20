#include <iostream>
#include <fstream>
#include "string.h"
using namespace std;
int main()
{
 char cadena[100];

 ofstream salida("prueba.txt");
 if (!salida.fail())
 {
 do
 {
 cin >> cadena;
 salida << cadena << endl;
 } while (strcmp(cadena, "salir") !=0);
 salida.close();

 cout << "\nAhora se muestra el contenido del fichero\n";
 ifstream ent("prueba.txt");
 ent>>cadena;
 while (!ent.eof())
{
 cout <<cadena<<endl;
 ent>>cadena;
 }
 ent.close();
 }
 return 0;
}