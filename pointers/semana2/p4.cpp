#include<iostream>
using namespace std;
int main(){
    int x=10;
     char y='F';
     int *a=&x;
     char *b=&y;
     char  *c;
     c=b;
     cout<<(*c)<<"\n";
     //printf("%s\n", (*c));
     //int &z;
    return 0;
}