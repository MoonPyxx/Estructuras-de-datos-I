/*Ejercicio 4: A partir de los ficheros del ejercicio anterior, cree un algoritmo
que fusione la información de ambos ficheros en otro que se llamará "mezcla.dat",
cuyos elementos estarán ordenados ascendentemente según el campo código*/

/*Si un artículo tiene información en ambos ficheros, en el campo cantidad se almacenará
la suma de las dos cantidades que aparecen. */

#include <iostream>
#include <fstream>
using namespace std;

struct reg1 {
    int codigo;
    int cantidad;
    int precio;
};

struct reg2 {
    int codigo;
    int peso;
    int cantidad;
};

struct reg3 {
    int codigo;
    int cantidad;
    int datos[2];
};
int main (){
    ifstream precios, pesos;
    precios.open("precios.dat",ios::binary);
    pesos.open("pesos.dat",ios::binary);
    ofstream mezcla;
    mezcla.open("mezcla.dat",ios::binary);
    reg1 r1;
    reg2 r2;
    reg3 r3;
    int cantidad_total, precio_total, peso_total;
    precios.read((char*)&r1,sizeof(reg1));
    pesos.read((char*)&r2,sizeof(reg2));
    while (!precios.eof() && !pesos.eof()){
          if (r1.codigo < r2.codigo) {
            r3.codigo = r1.codigo;
            r3.cantidad = r1.cantidad;
            r3.datos[0] = r1.precio;
            r3.datos[1] = 0;
            mezcla.write((char*) &r3, sizeof(reg3));
            precios.read((char*) &r1, sizeof(reg1));
        } else if (r2.codigo < r1.codigo) {
            r3.codigo = r2.codigo;
            r3.cantidad = r2.cantidad;
            r3.datos[0] = 0;
            r3.datos[1] = r2.peso;
            mezcla.write((char*) &r3, sizeof(reg3));
            pesos.read((char*) &r2, sizeof(reg2));
        } else { // r1.codigo == r2.codigo
            cantidad_total = r1.cantidad + r2.cantidad;
            precio_total = r1.precio;
            peso_total = r2.peso;

            r3.codigo = r1.codigo;
            r3.cantidad = cantidad_total;
            r3.datos[0] = r1.precio;
            r3.datos[1] = r2.peso;
            mezcla.write((char*) &r3, sizeof(reg3));
            precios.read((char*) &r1, sizeof(reg1));
            pesos.read((char*) &r2, sizeof(reg2));
        }
    }

    while (!precios.eof()) {
        r3.codigo = r1.codigo;
        r3.cantidad = r1.cantidad;
        r3.datos[0] = r1.precio;
        r3.datos[1] = 0;
        r3.datos[1] = r2.peso;
        mezcla.write((char*) &r3, sizeof(reg3));
        pesos.read((char*) &r2, sizeof(reg2));
}

    precios.close();
    pesos.close();
    mezcla.close();

return 0;
    }