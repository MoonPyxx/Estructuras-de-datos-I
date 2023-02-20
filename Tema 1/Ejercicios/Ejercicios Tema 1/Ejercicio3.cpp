/*Ejercicio 3: Diseñe un programa que permita crear dos ficheros
con información referente a los artículos de un almacén. */

#include <iostream>
#include <fstream>

using namespace std;

// precios.dat
struct reg1 {
int codigo;
int cantidad;
int precio;
}; 
//pesos.dat
struct reg2 {
int codigo;
int peso;
int cantidad;
}; 

/* Los artículos en ambos ficheros estarán 
ordenados ascendentemente por código. */ 

int main(){
int n;
cout << "Introduce el numero de articulos:" << endl;
cin >> n;
reg1 r1[n];
reg2 r2[n];
cout << "Introduce los detalles de los articulos:" << endl;
 for (int i = 0; i < n; i++) {
        cout << "Articulo " << i+1 << endl;

        cout << "Codigo: ";
        cin >> r1[i].codigo;
        r2[i].codigo = r1[i].codigo;

        cout << "Cantidad: ";
        cin >> r1[i].cantidad;
        r2[i].cantidad = r1[i].cantidad;

        cout << "Precio: ";
        cin >> r1[i].precio;

        cout << "Peso: ";
        cin >> r2[i].peso;
    }

    ofstream precios, pesos;
    precios.open("precios.dat", ios::binary);
    pesos.open("pesos.dat", ios::binary);
if (!precios.fail() && !pesos.fail()){
    // reg1 a precios.dat
    for (int i=0;i<n;i++){
        reg1 temp = r1[i];
        for (int j= i-1; j>=0 && r1[j].codigo > temp.codigo; j--){
            r1[j+1] = r1[j];
        
        r1[j+1] = temp;}
        for (int i=0; i<n; i++){
        precios.write((char*)&r1[i],sizeof(reg1));
        }
    // reg2 a pesos.dat
   for (int i = 0; i < n; i++) {
        reg2 temp = r2[i];
        int j;
        for (j = i-1; j >= 0 && r2[j].codigo > temp.codigo; j--) {
            r2[j+1] = r2[j];
        }
        r2[j+1] = temp;
    }

    for (int i = 0; i < n; i++) {
        pesos.write((char*) &r2[i], sizeof(reg2));
    }
    
    precios.close();
    pesos.close();
} 
return 0;
}
}