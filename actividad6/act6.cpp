



#include <iostream>
using namespace std;



void imprimir ( int *p, int dim){
   int *lim=p; 
   while(lim< p + dim ){
      cout<<*lim <<" ";
      lim++;
    }
   cout<<endl;
}

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
  
  int (*pfiguras)[10] = vectorMedianas;
  
  int medianapar[10]={10,20,30,40,50,60,70,80,90,100};
  int medianaimp[3]={1,2,3};
   
  int matriz[4][4]={
	  {1,2,3,4},
	  {4,6,2,1},
	  {1,2,4,4},
	  {4,3,2,1}
  };
  int (*pmatriz)[4] = matriz;
  int *ptrMatriz = *(matriz);
  int op[2]={0,1};
  int *pop = op;
   
  for (int i =0; i<4; i++){
     //empieza llamando a la funcion para  los arreglos unidimensionales
     imprimir(*pfiguras,10); 
     cout<<calcularMedianas( (*( ppff2 + *pop  )) , *pfiguras, 10      )<< " "<<endl;
     
     pfiguras++;
  }
   cout<<endl;

  //ahora hago la llamada para el calculo de  la mediana de la matriz
  ///incremento el puntero  pop
    pop++;
    cout<<calcularMedianas( (*( ppff2 + *pop  )) , *pmatriz, 4      )<< " "<<endl;


    
  


	


}
