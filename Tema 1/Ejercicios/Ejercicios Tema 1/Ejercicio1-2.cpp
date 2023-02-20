// Ejercicio 1
/*Declarar y construir la siguiente tabla dinámica de datos
 e inicializarla con el valor 0: */
#include <iostream>
using namespace std;

int main(){
float suma=0;

  // Declarar tabla
    float **tabla = new float*[100];
    // comprobear si hay memoria
    if (tabla!=NULL){
        for (int i = 0; i < 100; i++) {
            tabla[i] = new float[100-i];
            // comprobear si hay memoria en tabla [i]
            if(tabla[i]!=NULL){
                // Inicializar con el valor 0
            for (int j = 0; j < 100-i; j++) {
                tabla[i][j] = 0;
            }
        }}
    } else {
        cout << "Error: no hay memoria" << endl;
        return 1;
    }
    
// Ejercicio 2
/*Destruir la estructura del ejercicio anterior, calculando previamente
la suma de los elementos que contiene. */
 // Calcular la suma de los elementos de la tabla
    for (int i = 0; i < 100; i++) {
        if (tabla[i]!=NULL){
        for (int j = 0; j < 100-i; j++) {
            suma += tabla[i][j];
        }
         delete[] tabla[i];
    }
    }
    cout << "La suma de los elementos de la tabla es: " << suma << endl;
    // Liberar la memoria utilizada por la tabla
    delete[] tabla;

    return 0;
}