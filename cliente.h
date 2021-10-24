#ifndef CLIENTE_H
#define CLIENTE_H


#include <stdio.h>
#include <string>

class cliente{
private:
int codigoCliente;
string nombreCliente;
//String a;



public:
cliente(){}
cliente(int tmpCodCli, string tmpNombreCliente ): codigoCliente(tmpCodCli) : nombreCliente  {}

void imprimirCliente();


};

#endif


