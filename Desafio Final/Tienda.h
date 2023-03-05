#pragma once
#include <string>
using namespace std;

class Tienda {
protected:
	int MangaCortaMaoP = 100;
	int MangaCortaMaoC = 100;
	int MangaCortaNormalP = 150;
	int MangaCortaNormC = 150;
	int MangaLargaMaoP = 75;
	int MangaLargaMaoC = 75;
	int MangaLargaNormP = 175;
	int MangaLargaNormC = 175;
	int PantChupinPre = 750;
	int PantChupinCas = 750;
	int PantNormPre = 250;
	int PantNormCas = 250;
	float precioUnitario;
	string CodigoTienda;
	string NombreTienda;
	
public:
	Tienda();
	void MostrarStock();
	string RetornarNombre();
	string RetornarCodigo();
	void MostrarCamisas();
	void MostrarPantalones();
	void EmpezarCotizacionPant(int x, int z);
	void EmpezarCotizacionCamisa(int x,int z);
	void CrearCotizacion(int cant, int product,string a, int z,float u);
	void ComprobarCantidad(int cant,int product);
	void imprimirHistorial();
	void IngresarPrecioUnitario();
	void BorrarCantidad(int x, int& p1);

};
