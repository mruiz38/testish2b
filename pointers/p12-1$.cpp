#include<iostream>

using namespace std;

int main(){
int x=10;
int *p=&x;
int contador=0;
cout<<"contenido  de *p : "<<*p<<"\n";
cout<<"direccion  de &p : "<<&p<<"\n";
cout<<"direccion  de  p : "<<p <<"\n";
cout<<"direccion de x : " <<&x<<"\n";
cout<<"ahora voy a variar la direccion del puntero"<<endl;

while (contador<=5){
cout<<"incremento la direccion del puntero p++"<<endl;
p++;
cout<<&p<<endl;
cout<<p<<endl;
contador++;
}
cout<<"ahora verifico la direccion del puntero"<<&p<<endl ;
p++;
cout<<"ahora verifico luego de volver a incrementar"<<&p<<endl;
p-=2;
cout<<&p<<endl;
//#cout<<"ahora seria como haber movido el puntero 1 posicion hacia atras desde el primero momento"<<p

return 0;
}

