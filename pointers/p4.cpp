#include<iostream>
using namespace std;

int main(){

int  vector[] = {4,5,6};
int* p1 = vector;

cout<<"sizeof(p1)"<<sizeof(p1)<<endl;
cout<<"sizeof(vector)"<<sizeof(vector)<<endl;
int *p2 = vector +2;
cout<<*p2<<endl;
return 0;

/*

*/


}
