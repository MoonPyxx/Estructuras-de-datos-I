#include <iostream>
#include <fstream>
#include <conio.h>
#include "string.h"
#include "stdlib.h"
using namespace std;
#define MAX_STR 30
typedef char cadena[MAX_STR]; //define tipo string
//-----Definición de la Clase coche-------------
class Coche
{
long NumKm;
 cadena Matricula;
public:
 void setMat(cadena mat){strcpy(Matricula,mat);};
 void setNumKm(long num){NumKm=num;};
 const char *getMat(){return Matricula;};
 long getNumKm(){return NumKm;};
};
int main()
{
 Coche C;
 char op;
 int indice;
 cadena mat;
 long Km;
 fstream f;
 f.open("datos1.dat",ios::in|ios::out|ios::binary);//vemos si datos1.dat
//existía previamente
 if (f.fail())
 //el fichero no existe, debo crearlo
 {
 f.close();
 f.clear();
 f.open("datos1.dat",ios::out|ios::binary); //se crea el fichero
 f.close();
 f.clear();
 f.open("datos1.dat",ios::in|ios::out|ios::binary); //ya abrimos de nuevo el
//fichero tras crearlo
 }
 if (f)
 {
 do
 {
 system ("cls");
 cout <<"Elija operación\n";
 cout <<"1-Ver Matrícula y Km de un Coche\n";
 cout <<"2-Asignar Matrícula y Km a un Coche\n";
 cout <<"3- Salir\n";
 op=getch();    
 typedef char cadena[MAX_STR]; //define tipo string
//-----Definición de la Clase coche-------------
class Coche
{
long NumKm;
 cadena Matricula;
public:
 void setMat(cadena mat){strcpy(Matricula,mat);};
 void setNumKm(long num){NumKm=num;};
 const char *getMat(){return Matricula;};
 long getNumKm(){return NumKm;};
};
int main()
{
 Coche C;
 char op;
 int indice;
 cadena mat;
 long Km;
 fstream f;
 f.open("datos1.dat",ios::in|ios::out|ios::binary);//vemos si datos1.dat
//existía previamente 
 if (f.fail())
 //el fichero no existe, debo crearlo
 {
 f.close();
 f.clear();
 f.open("datos1.dat",ios::out|ios::binary); //se crea el fichero
 f.close();
 f.clear();
 f.open("datos1.dat",ios::in|ios::out|ios::binary); //ya abrimos de nuevo el
//fichero tras crearlo
 }
 if (f)
 {
 do
 {
 system ("cls");
 cout <<"Elija operación\n";
 cout <<"1-Ver Matrícula y Km de un Coche\n";
 cout <<"2-Asignar Matrícula y Km a un Coche\n";
 cout <<"3- Salir\n";
 op=getch();
 }
 }
break;
 case '3': break;
 default : cout <<"Opción Incorrecta";
 }
 }while (op!='3');
 f.close();
}
else
 cout<<"fichero no abierto";
system("pause");
return 0;
}
