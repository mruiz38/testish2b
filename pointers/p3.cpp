#include<iostream>
using namespace std;

int main(){

float x=10;
float* pv =&x;
pv++;
printf("%d\n", pv);

return 0;
}
