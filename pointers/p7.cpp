#include<iostream>
using namespace std;

int main(){
    int a=15;
    int *p=&a;
    int *&q=p;
    q--;
    cout<<p<<endl;
    p--;
    cout<<*(p+2)<<endl;
    cout<<p+4<<endl;
    cout<<*(&(*(p+2)))<<endl;

    //cout<<"&p " <<&p<<endl;
    //cout<<"&q " <<&q<<endl;

return 0;
}