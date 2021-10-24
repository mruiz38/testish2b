#include <iostream>
#include <ctime>
using namespace std;


/*
con la primera funcion las variables enviadas, no se modifican
en la segunda funcion las variables enviadas si son modificadas.
en la tercera funcion el compilador lanzaria un error, no permite 
modificar las variables 

porque se estan pasando como const
*/
int funcion1(int n,int m);
int funcion2(int &n, int &m);
int funcion3(const int &n, const int &m);

int main()
{
    int a,b;
    a=10;
    b=20;

    cout<<"a,b ->"<<a <<" , "<<b<<endl;
    cout<<"funcion1(a,b)"<<funcion1(a,b)<<endl;
    cout<<"a,b ->"<<a <<" , "<<b<<endl;
    //cout<<"funcion2(a,b)"<<funcion2(a,b)<<endl;
    //cout<<"a,b ->"<<a <<" , "<<b<<endl;
    cout<<"funcion3(a,b)"<<funcion3(a,b)<<endl;
    cout<<"a,b ->"<<a <<" , "<<b<<endl;
}

int funcion1(int n, int m){
    n=n+2;
    m=m-5;
    return n+m;
}

int funcion2(int &n, int &m){
    n=n+2;
    m=m-5;
    return n+m;
}


int funcion3(const int &n, const int &m){
    //n=n+2;
    //m=m-5;
    return n+m;
}