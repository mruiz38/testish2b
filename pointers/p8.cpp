#include<iostream>
using namespace std;

int main(){
    int a=15;
    int *p=&a;
    int *q;//=p; //=p;
    q=p;
    q++;
    cout<<*q<<endl;

return 0;
}