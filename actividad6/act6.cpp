



#include <iostream>
using namespace std;


int sumaMedianaVector( int *mv, int dim1 ){
    int dimension=dim1;
    if(!(dimension%2))   
	    return *(mv + dimension/2) + *(mv +  ( (dimension/2)-1) );
    
    else
            return *(mv + dimension/2);


}


int sumaMedianaMatriz( int *p, int dim1 ){
int dim2=dim1;
int sumaElementos=0; 
int *q=p;
int *r=p;
int cuentaPos=0;
while(q < p  + (dim1 * dim2 )  ){
        sumaElementos+=*(q+cuentaPos);
        cuentaPos++;	
	while( q < r + (dim2)){                
	 q++;
        }     
     r = r + dim2;

}
	
 return sumaElementos;
}




float rectangulo(float base, float altura) {
	cout << "El area del rectangulo es: " << base * altura << endl;
	return base * altura;
}
float circulo(float radio, float zero) {
	float pi = 3.1416;
	cout << "El area del circulo es: " << pi * (radio * radio) << endl;
	return pi * (radio * radio);
}
float triangulo(float base, float altura) {
	cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
	return (base * altura) / 2;
}
float cuadrado(float lado, float zero) {
	cout << "El area del cuadrado es: " << lado * lado << endl;
	return lado * lado;
}

typedef float (*PF)(float, float);

float calcularArea(PF pf,float a, float b) {
  float area = pf(a,b);
  return area;
}

typedef int(*PF2)( int *, int);
int calcularMedianas(PF2 pf2x, int *pt, int dim){
   int sumaMedi = pf2x( pt, dim);
   return sumaMedi;
	   
}
int main() {
  PF2 PuntFun2[2]={sumaMedianaVector,sumaMedianaMatriz};
  PF2* ppff2 = PuntFun2;
  int vectorMedianas[4][10]={
	  {10,20,30,40,50,60,70,80,90,100},
	  {1,2,3,4,5,6,7,8,9,10},
	  {2,2,3,3,4,4,5,5,6,6},
	  {7,7,6,6,5,5,4,4,3,3}
  };

  /*	
  PF PuntFun[4] = {rectangulo,circulo,triangulo,cuadrado};
  PF* ppff = PuntFun;
  float figuras[4][2]={{2,0},{3,5},{10,0},{5,3}};//figuras
  //int num[10]={10,15,5,38,89,77,100,45,48,3};
  int op[4]= {3,2,1,0};//configuracion de figuras
  int* pop = op; 
  float area;
  float (*pfiguras)[2] = figuras;
  for(int i =0; i <4; i++)
  { 
    calcularArea( (*(ppff+*pop))  ,   (*pfiguras)[0]  ,    (*pfiguras)[1]);
    //(*(ppff+*pop))((*pfiguras)[0],(*pfiguras)[1]);
    pop++;
    pfiguras++;
  }
  */

  int medianapar[10]={10,20,30,40,50,60,70,80,90,100};
  int medianaimp[3]={1,2,3};
   
  int matriz[4][4]={
	  {1,2,3,4},
	  {4,6,2,1},
	  {1,2,4,4},
	  {4,3,2,1}
  };

  int op[2]={0,1};
  int *pop = op; 
  int (*p)
   
  for (int i =0; i<2; i++){
    
     calcularMedianas( (*( ppff2 + *pop  )) ,       );
  }


//cout<<"sumaMedianaMatriz : "<<sumaMedianaMatriz( matriz[0],4,4  )<<" "<<endl;  
  
  

  
  //cout<<"imprimo el valor de mediana, antes de enviarlo "<<mediana<<endl;; 
  //cout<<"resultado"<<sumaMedianaVector(medianapar,10)<<endl; 
  //cout<<"resultado mediana impar"<<sumaMedianaVector(medianaimp,3)<<endl;
  


	


}
