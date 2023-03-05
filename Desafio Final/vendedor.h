#include <string>
#include <iostream>
#include "Cotizacion.h"
using namespace std;

class vendedor {
private:
	string nombre;
	string apellido;
	int codigoVendedor;
public:
	vendedor();
	int GenerarCodigovendedor();
	string RetornarNombre();
	string RetornarApellido();
	int RetornarCodigoVendedor();
};


