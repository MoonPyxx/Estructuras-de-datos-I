//programa hecho en clase, en notepad, con el siguiente enunciado: SE quiere realizar un programa que permita
//obtener la nota mayor y menor de los alumnos presentados a un examen. Al mismo tiempo se desea ver cuantos //valores son mayores que la media y cuantos menores que ésta

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
 {
  float *notas;
  float ma,me,suma=0,media;
  int n,mayorm=0,menorm=0; //cuantos tios, mayores media y menores media
  system("cls");
  cout<<"Cuantos tios se han presentado?\n";
  cin>>n;
  notas=new float[n];
  if (notas==NULL)
    cout<<"no podemos gestionar tantas notas\n";
  else
   {
    for (int i=0;i<n;i++)
     {
      cout<<"dame nota del alumno "<<i+1<<endl;
      cin>>notas[i];
      if (i==0)
       {
        ma=notas[0];  
        me=notas[0];  
       }
      else
       {
        if (notas[i]>ma)
          ma=notas[i];
        if (notas[i]<me)
          me=notas[i]; 
       }  
      suma=suma + notas[i]; //suma+=notas[i];
     }
    cout<<"La nota mayor es "<<ma<<endl;
    cout<<"La nota menor es "<<me<<endl;
    cout<<"La media es "<<ma<<endl;
    media=suma/n;
    cout<<"La nota media es "<<media<<endl;  
    for (int i=0;i<n;i++)
     {
      if notas[i]>media
        mayoresm++;
      if notas[i]<media
        menoresm++;
    }
   cout<<"hay " <<mayoresm<<" notas mayores que la media\n";
   cout<<"hay " <<menoresm<<" notas menores que la media\n";
   delete [] notas;
  }
 system("pause");
 return 0;
} 
    
