#pragma once
#include <string>
using namespace std;

class Cotizacion {
	class Nodo {
	public:
		string info;
		int info2;
		float info3;
		Nodo *sig;
	};
	Nodo* raiz;
	string fecha;
	int numIden;
public:
	Cotizacion();
	void AgregarCotizacion(int cant,int product,string a, int z,float u);
	void imprimir();
	void imprimirCotizacionActual();
	void GenerarFecha();
	void GenerarNumeroIden();
	~Cotizacion();
};
