#include <iostream>
using namespace std;

int main (){
int a;
//declarando un puntero a entero;
int *p;
p=&a;


cout<<"ingrese un numero";
cin>>a;
cout<<"usted ingreso el numero"<<*p;


return 0;
}
