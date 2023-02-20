/* 1. Declarar los siguientes punteros: 
Un puntero a un real, un puntero a un entero,
un puntero a un Proveedor y un puntero a un Polinomio.*/
#include <iostream>
using namespace std;
int main(){
    class Proveedor{
    };
    float *f; //Puntero a un real
    int *p; // Puntero a un entero
    Proveedor *pr; // Puntero a un proveedor (clase)
    double *ptr; // Puntero a un polinomio
/*2. Reservar memoria dinámica apuntada por los anteriores punteros.
Suponer que Proveedor es una clase que tiene un constructor que
inicializa los atributos nombre y DNI del Proveedor.*/
    f = new float;
    p= new int;
    pr = new Proveedor;
    ptr = new double;
}