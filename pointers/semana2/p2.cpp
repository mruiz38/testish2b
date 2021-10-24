#include<iostream>
struct sampleData{
 int N=6;
 int M=7;
 int O=8;

};

int funcion1(sampleData d){
    return d.N;
}


int funcion2(sampleData &d){
    return d.N;
}

int funcion3(sampleData *d){
    return (*d).N;
}



int main(){
    sampleData data;
    std::cout<<funcion1(data)<<std::endl;
    std::cout<<funcion2(data)<<std::endl;
    std::cout<<funcion3(&data)<<std::endl;



    return 0;
}