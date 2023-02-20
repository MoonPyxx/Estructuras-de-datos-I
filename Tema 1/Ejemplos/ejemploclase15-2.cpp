/*Un programa que nos saque los enteros contenidos
 en un fichero por pantalla, 13/02/23*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f;
    char fichero[250];
    int i;
    char respuesta;

    cout << "Introduce el nombre del fichero: \n";
    gets(fichero);
    f.open(fichero, ios::binary);
    if (f.fail()){
        cout << "Error \n";
    } else {
       do {
        cout << "Dame un entero \n";
        cin >> i;
        f.write((char *)&i,sizeof(i));
        cout << "Quieres mas numeros(S/N)\n";
        respuesta = toupper(getchar());
       } while (respuesta!='N');
       f.close();
    }
    return 0;
}
