
#include <iostream>
using namespace std;

void triangulo( int (*Mat)[9], int MatTam ){

//este es un ejemplo de codigo añadido en vim 

Mat++;
int *prev=*Mat;	
Mat++;
int *s= *Mat;
int numfilas=2; 
int numpos=0;
 while(numfilas < MatTam){	
	numpos=0;
	*s=1;
	while(numpos<numfilas){
	s++;//ahora sumo 1 para calcular valor de la sgte posicion
	*s = *prev+ *(prev+1);
        numpos++;
        prev++;	
	}
        *s=1;	
     //primera posicion de s la pongo en 1    
  numfilas++;
  prev=*Mat; 
  Mat++;
  //ya luego de sumarle lo asigno a la nueva variable s
  s=*Mat;
 }



}




void  imprimir( int *m, int dim1, int dim2  ){

 int *p = m;
     
 int *q = m;
 
 while( p< m + (dim1 * dim2) ){

   while(p<q + (dim2)){
     std::cout<<*p << " ";
     p++;
   }
  std::cout<< "\n";
  q =  q + dim2;
 }

}



void ceros(int *m, int dim1, int dim2){

int *p=m;
int *q=m;




while( p< m + (dim1 * dim2) ){
   while(p<q + (dim2)){
      *p=0;
     p++;
   }
  
  q =  q + dim2;
 }
}


int main(){
 
 int M[9][9];
 ceros(M[0],9,9);
 M[0][0]=1;
 M[1][0]=1;
 M[1][1]=1;

 triangulo( &M[0],9);
 imprimir(M[0],9,9);
  return 0;

}
