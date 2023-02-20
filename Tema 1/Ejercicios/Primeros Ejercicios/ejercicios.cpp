#include <iostream>
using namespace std;
int main()
{
    // 1/2
    float *f;
    Proveedor *p;
    f = new float;
    p = new Proveedor;
    // 3.
   clientes *c = new Clientes[100];
   // 4. Correción: Darle a cada casilla el valor de NULL
   clientes **cl = new clientes*[1000];
   for (int i= 0; i<1000< i++){
        cl[i] = NULL;
   }   
   // 5. 
   Proveedor **p = new Proveedor*[120];
   if (p!=NULL){
    for (int i=0; i<120;i++){
        p[i] = new Proveedor;
    }
   }
   // 6.
 for (int i= 0; i<120; i++){
        delete p [i];
   }
   // 7.
   for (int i= 0; i<120; i++){
        delete p [i];
   }

}