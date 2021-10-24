#include<iostream>

using namespace std;

int main(){
int x=10;
int *p=&x;

cout<<"contenido de p : "<<*p<<"\n";
cout<<"direcciond de p: "<<&p<<"\n";
cout<<"direccion de x : " <<&x<<"\n";

return 0;
}

