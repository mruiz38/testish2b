#include <iostream>

using namespace std;

int main(){

int B[2][3]=
{

 {2,3,6 },
 {2,3,6}
};
 

int (*p)[3] = B;

int i=0;
while (i<3)
  {cout<<B[0][i]<<endl;
   i++;
  }


cout<<"probando programa funcione"<<endl;

return 0;
}
