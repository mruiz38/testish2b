
#include <iostream>

using namespace std;

int main(){
int *p,*q;
//
//intentar mostrar diferentes direcciones de memoria

cout<<"direccion de memoria de p : "<<&p<<endl;
//cout<<"probando la direccion de memoria de la direccion de memoria"<<&(&p)<<endl;
//luego intentar imprimir la direccion de la dirreccion de p 
// y asi sucesivamente hasta donde se pueda llegar

//ahora voy a asignar  con new la memoria

p= new int;

cout<<"eliminando direccion de memoria : "<<&p<<endl;

delete p;

cout<<"ahora trato de mostrar la direccion de memoria de p: "<<&p<<endl;

//ahora trato nuevamente de eliminar la direccion de p 

//delete p;

/*queda pendiente revisar que podriamos hacer  de diferente
  luego de inicializar la cantidad de memoria a utilizar 

 
*/
return 0;
}
