



#include <iostream>
using namespace std;


int medianaVector( int *mv, int dimension ){
    
    if(!(dimension%2))   
	    return *(mv + dimension/2) + *(mv +  ( (dimension/2)-1) );
    
    else
            return *(mv + dimension/2);


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

int main() {

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

  //cout<<"imprimo el valor de mediana, antes de enviarlo "<<mediana<<endl;; 
  cout<<"resultado"<<medianaVector(medianapar,10)<<endl; 
  cout<<"resultado mediana impar"<<medianaVector(medianaimp,3)<<endl;
  


	


}
