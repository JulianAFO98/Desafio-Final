#include "Tienda.h";
#include "Cotizacion.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
Cotizacion* Lista = new Cotizacion;
void Tienda::MostrarStock() {
	system("cls");
	cout << "Cantidad de items disponibles en stock:" << "\n";
	cout << "==========CAMISAS==========" << "\n";
	cout << "--------MANGA CORTA--------" << "\n";
	cout << "Cuello Mao Premium: " << MangaCortaMaoP << "\n";
	cout << "Cuello Mao Comun: " << MangaCortaMaoC << "\n";
	cout << "Cuello Normal Premium: " << MangaCortaNormalP<< "\n";
	cout << "Cuello Normal Comun: " << MangaCortaNormC << "\n";
	cout << "--------MANGA LARGA--------" << "\n";
	cout << "Cuello Mao Premium: " << MangaLargaMaoP << "\n";
	cout << "Cuello Mao Comun: " << MangaLargaMaoC << "\n";
	cout << "Cuello Normal Premium: " << MangaLargaNormP << "\n";
	cout << "Cuello Normal Comun: " << MangaLargaNormC << "\n";
	cout << "==========PANTALONES==========" << "\n";
	cout << "--------CHUPIN--------" << "\n";
	cout << "Premium: " << PantChupinPre << "\n";
	cout << "Normal: " << PantChupinCas << "\n";
	cout << "--------COMUN--------" << "\n";
	cout << "Premium: " << PantNormPre << "\n";
	cout << "Normal: " << PantNormCas << "\n";
	cout << "-------------Presione enter para continuar--------------";
	cin.get();
	cin.get();
	  
}
Tienda::Tienda() {
	NombreTienda = "El rey del calcetin";
	CodigoTienda = "K3423C";
}
string Tienda::RetornarNombre() {
	return NombreTienda;
}
string Tienda::RetornarCodigo() {
	return CodigoTienda;
}
void Tienda::IngresarPrecioUnitario() {
	system("cls");
	cout << "-------------------COTIZADOR EXPRESS-------------------" << "\n";
	cout << "Ingrese el precio unitario del articulo" << "\n";
	while (true) {
		cin >> precioUnitario;
		if (cin.fail()) {
			cout << "------------Ingreso un caracter invalido, intente nuevamente------\n";
			cin.clear();
			cin.ignore(100, '\n');
		}
		else {
			break;

		}
	}
	
}
void Tienda::MostrarCamisas() {
	cout << "--------MANGA CORTA--------" << "\n";
	cout << "1-Cuello Mao Premium " << "\n";
	cout << "2-Cuello Mao Comun " <<  "\n";
	cout << "3-Cuello Normal Premium "  << "\n";
	cout << "4-Cuello Normal Comun "  << "\n";
	cout << "--------MANGA LARGA--------" << "\n";
	cout << "5-Cuello Mao Premium "<< "\n";
	cout << "6-Cuello Mao Comun " << "\n";
	cout << "7-Cuello Normal Premium "  "\n";
	cout << "8-Cuello Normal Comun "  << "\n";
}
void Tienda::MostrarPantalones() {
	cout << "--------CHUPIN--------" << "\n";
	cout << "1-Premium "  << "\n";
	cout << "2-Normal "  << "\n";
	cout << "--------COMUN--------" << "\n";
	cout << "3-Premium "  << "\n";
	cout << "4-Normal "  << "\n";
}
void Tienda::BorrarCantidad(int x,int &p1 ) {
	p1 = p1 - x;
}

void Tienda::EmpezarCotizacionCamisa(int x, int z) {
	int cant;
	int *product=nullptr;
	string Nproduct;
	if (x != 0) {
		IngresarPrecioUnitario();
	}
	if (x == 1) {
		precioUnitario = (((precioUnitario * 0.9) * 0.93) * 1.30);
		product = &MangaCortaMaoP;
		Nproduct = "Manga Corta Cuello Mao Premium";
	}
	else
	{
		if (x == 2) {
			precioUnitario = ((precioUnitario * 0.9) * 0.93);
			product = &MangaCortaMaoC;
			Nproduct = "Manga Corta Cuello Mao Normal";
		}
		else {
			if (x == 3) {
				precioUnitario = ((precioUnitario * 0.9) * 1.30);
				product = &MangaCortaNormalP;
				Nproduct = "Manga Corta Cuello Standard Premium";
			}
			else {
				if (x == 4) {
					precioUnitario = (precioUnitario * 0.9);
					product = &MangaCortaNormC;
					Nproduct = "Manga Corta Cuello Standard Normal";
				}
				else {
					if (x == 5) {
						precioUnitario = ((precioUnitario * 1.03) * 1.30);
						product = &MangaLargaMaoP;
						Nproduct = "Manga Larga Cuello Mao Premium";
					}
					else {
						if (x == 6) {
							precioUnitario = (precioUnitario * 1.03);
							product = &MangaLargaMaoC;
							Nproduct = "Manga Larga Cuello Mao Normal";
						}
						else {
							if (x == 7) {
								precioUnitario = (precioUnitario * 1.30);
								product = &MangaLargaNormP;
								Nproduct = "Manga Larga Cuello Standard Premium";
							}
							else {
								if (x == 8) {
									precioUnitario = precioUnitario;
									product = &MangaLargaNormC;
									Nproduct = "Manga Larga Cuello Standard Normal";
								}
							}
						}

					}


				}
			}

		}
	}
	
	if (x != 0) {
		system("cls");
		cout << "---------------------------------------------------" << "\n";
		cout << "Existen " << *product << " unidades en el stock" << "\n";
		cout << "---------------------------------------------------" << "\n";
		cout << "Ingrese la cantidad de objetos solicitados: " << "\n";
		while (true) {
			cin >> cant;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;

			}
		}
		ComprobarCantidad(cant,* product);
		BorrarCantidad(cant, *product);
		CrearCotizacion(cant, *product,Nproduct,z,precioUnitario);
	}
}
void Tienda::EmpezarCotizacionPant(int x, int z) {
	int cant;
	int* product = nullptr;
	string Nproduct;
	if (x != 0) {
		IngresarPrecioUnitario();
	}
	if (x == 1) {
		precioUnitario = (precioUnitario*0.88)*1.30;
		product = &PantChupinPre;
	}
	else {
		if (x == 2) {
			precioUnitario = (precioUnitario * 0.88);
			product = &PantChupinCas;
		}
		else {
			if (x == 3) {
				precioUnitario = precioUnitario * 1.30;
				product = &PantNormPre;
			}
			else {
				if (x == 4) {
					precioUnitario = precioUnitario;
					product = &PantNormCas;
				}
			}
		}
	}
	
	if (x != 0) {
		system("cls");
		cout << "---------------------------------------------------" << "\n";
		cout << "Existen " << *product << " unidades en el stock" << "\n";
		cout << "---------------------------------------------------" << "\n";
		cout << "Ingrese la cantidad de objetos solicitados: " << "\n";

		while (true) {
			cin >> cant;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;

			}
		}
		ComprobarCantidad(cant, *product);
		CrearCotizacion(cant, *product, Nproduct, z,precioUnitario);
		BorrarCantidad(cant,*product);
	}
}
void Tienda::ComprobarCantidad(int cant,int product) {
	if (cant > product) {
		cout << "---------------------------------------------------" << "\n";
		cout << "La cantidad solicitada sobrepasa a las disponibles en stock" << "\n";
		cout << "---------------------------------------------------" << "\n";
		cout << "--------------Presione enter para continuar---------------" << "\n";
	}
	else {
		cout << "---------------------------------------------------" << "\n";
		cout << "Se puede realizar la transaccion" << "\n";
		cout << "---------------------------------------------------" << "\n";
		cout << "--------------Presione enter para continuar---------------" << "\n";
	}
	cin.get();
	cin.get();

}
void Tienda::CrearCotizacion(int cant, int product,string a,int z,float u) {
	
	Lista->AgregarCotizacion(cant,product,a,z,u);

	
}
void Tienda::imprimirHistorial() {
	Lista->imprimir();
}