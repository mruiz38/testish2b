#include<iostream>
using namespace std;
int main(){
    int x=5;
     int *p1=&x;
    int **p2=&p1;
    int ***p3=&p2;  
    cout<<*(*p2)<<"\n";   
    ***p3=10;
    cout<<x<<endl;
    return 0;
}
