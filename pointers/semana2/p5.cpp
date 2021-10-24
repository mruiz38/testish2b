#include<iostream>
using namespace std;
int main(){
    const double & a{1};
    double &b{1};
    cout<<b<<"\n";

    return 0;
}