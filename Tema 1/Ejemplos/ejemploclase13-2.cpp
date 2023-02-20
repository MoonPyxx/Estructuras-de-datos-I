/*Un programa que nos saque los enteros contenidos
 en un fichero por pantalla, 13/02/23*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream f;
    char fichero[250];
    int i;

    cout << "Introduce el nombre del fichero: \n";
    gets(fichero);
    f.open(fichero, ios::binary);
    if (f.fail()){
        cout << "Error \n";
    } else {
        f.read((char *) &i, sizeof(i));
        while (!f.eof()&& (!f.fail())){
            cout << i << endl;
            f.read((char *) &i, sizeof(i));
            if (f.fail()){
                cout << "Error \n";
            }
        }
    f.close();
            }
    system("pause");
    return 0;
}
