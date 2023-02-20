#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float *notas;
    int n; // cuantos tios
    float ma,me,media,menoresm,mayoresm,suma=0;

    system("cls"); // limpia la pantalla

    cout << "Cuantos tios se han presentado"<< endl;
    cin >> n;
    notas = new float[n]; // crea una tabla dinámica con n posiciones
    if (notas  == NULL){
    cout << "No podemos gestionar tantas notas" << endl;
    }    else {
            for (int i=0;i<n;i++){ // bucle para dar notas
                cout << "Dame nota del alumno " << i+1 << endl; // i + 1 porque la primera posición es 0
                cin >> notas [i];
                if (i==0){
                    ma = notas[0];
                    me = notas[0];
                } else{
                    if (notas [i] > ma){
                        ma = notas[i];
                    }
                    if (notas[i]< me)
                    me = notas[i];
                }
                suma= suma + notas [i]; // suma= notas[i];
            }
      }
       cout << "La nota mayor es: " << ma << endl;
            cout << "La nota menor es: " << me << endl;
            media = suma/n;
            cout << "La nota media es: " << media << endl;
            for (int i=0;i<n;i++){
                if (notas[i]>media)
                mayoresm++;
                if (notas[i]<media)
                menoresm++;
            }
            cout << "Hay " << mayoresm << " notas mayoes que la media" << endl;
            cout << "Hay " << menoresm << " notas menores que la media" << endl;

            system("pause");
            return 0;
}