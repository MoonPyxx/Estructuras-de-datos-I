//Deseamos desarrollar un programa que permita obtener las notas superiores a la media de una serie de notas
//introducidas por teclado. Dichas notas se irán introduciendo hasta que el usuario no desee seguir introduciendo notas

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define SALTO 10
using namespace std;

int main()
{
    float *notas=new float[SALTO];
    int i=0;
    char c;
    float suma=0;
    float media;

    do
    {
     cout<<"Deme nota del alumno "<<i+1<<endl;
     cin>>notas[i];
     suma=suma + notas[i];
     i++;

     if (i%SALTO==0)
     {
      float *nuevatabla=new float[i+SALTO];
      if (nuevatabla==NULL)
      {
       cout<<"Sin memoria, no permitido\n";
      }
      else
      {
       for (int j=0;j<i;j++)
        nuevatabla[j]=notas[j];
       delete [] notas;
       notas=nuevatabla;
      }

     }

     cout<<"Desea introducir mas notas (s/n)?\n" << endl;
     c=toupper(getche());
    cout << endl;
    } while (c!='N');
    media=suma/i;
    cout<<"La media es "<<media<<endl;
    for (int j=0;j<i;j++)
    {
        if (notas[j]>media)
            cout<<"El alumno "<<j+1<<"tiene nota superior: "<<notas[j]<<endl;
    }
    system("pause");
    delete [] notas;
    return 0;
}