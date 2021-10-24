#include<iostream>

using namespace std;

int main(){
int x=5;
int *p=&x;
int *q=&x;
cout<<*q <<"\n";
cout<<&*(q+1) <<"\n";
return 0;
}

