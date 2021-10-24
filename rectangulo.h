#include <iostream>

class rectangulo{
protected:
 int largo;
 int alto;


public:
 rectangulo();
 rectangulo(int tmpL, int tmpA){
  //this.largo=tmpL;
  //this.alto=tmpA;
 };


 int imprimirArea(){
  return  largo*alto;
  };




};
