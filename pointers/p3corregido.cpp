#include<iostream>
using namespace std;

int main(){

float x=10;
float* pv =&x;
pv++;
printf("%2.0f\n",pv);

return 0;
}
