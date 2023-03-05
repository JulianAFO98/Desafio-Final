#include "vendedor.h"
#include <iostream>
#include <string>
#include<time.h>

using namespace std;

vendedor::vendedor() {
	nombre = "Fernando";
	apellido = "Perez";
	GenerarCodigovendedor();
}

 int vendedor::GenerarCodigovendedor() {
	 srand(time(NULL));
	 codigoVendedor = 1000+rand() % 100;
	 return codigoVendedor;
}
 string vendedor::RetornarNombre() {
	 return nombre;
 }
 string vendedor::RetornarApellido() {
	 return apellido;
 }

 int vendedor::RetornarCodigoVendedor() {
	 return codigoVendedor;
 }