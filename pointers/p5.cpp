#include<iostream>
using namespace std;

int main(){

int a=1100;
//int a=11111;
char* pc;
pc = (char*) &a;
printf("%d\n", *(pc+1));
return 0;
/*

*/

}