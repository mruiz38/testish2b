#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=&x;
    //p=0;
    //p=nullptr;
    *p=1;
    cout<<p;

    return 0;
}