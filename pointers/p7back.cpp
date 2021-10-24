#include<iostream>
using namespace std;

int main(){

//int a=1100;
int a=15;
int *p=&a;
int *&q=p;
cout<<" * q"<<*q<<endl;
cout<<"p " <<p<<endl;
cout<<"q " <<q<<endl;

cout<<"&p " <<&p<<endl;
cout<<"&q " <<&q<<endl;
q--;
cout<<"p " <<p<<endl;
cout<<"q " <<q<<endl;

cout<<"&p " <<&p<<endl;
cout<<"&q " <<&q<<endl;

return 0;
/*

*/

}