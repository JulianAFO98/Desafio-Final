#include "menu.h"
#include "vendedor.h"
#include "Tienda.h"
#include <stdlib.h>
#include "Cotizacion.h"

using namespace std;
vendedor* v1 = new vendedor;
Tienda* t1 = new Tienda;

string nombre = v1->RetornarNombre();
string apellido = v1->RetornarApellido();
int CodigVend = v1->RetornarCodigoVendedor();

void Menu::SegundoMenu() {
	int num2;
	do {
		system("cls");
		cout << "--------------COTIZADOR EXPRESS--------------" << "\n";
		cout << "Seleccione prenda a cotizar:" << "\n";
		cout << "1-Pantalon" << "\n";
		cout << "2-Camisa" << "\n";
		cout << "---------------------------------------------" << "\n";
		cout << "Presione 0 para volver hacia atras" << "\n";
		while (true) {
			cin >> num2;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;
				
			}
		}
		
		if (num2 == 1 || num2 == 2 || num2 == 0) {
			if (num2 == 1) {
				MenuPantalon();
			}
			if (num2 == 2) {
				MenuCamisa();
			}

		}
		else {
			cout << "Ingreso una opcion erronea" << "\n";
			cout << "-------------------Presione enter para continuar-------------------" << "\n";
			cin.get();
			cin.get();
			break;
		}
	} while (num2 != 0);
}

void Menu::MenuCamisa() {
	int num3;
	
	do {
		system("cls");
		cout << "--------------COTIZADOR EXPRESS--------------" << "\n";
		cout << "Seleccione prenda a cotizar:" << "\n";
		t1->MostrarCamisas();
		cout << "---------------------------------------------" << "\n";
		cout << "Presione 0 para volver hacia atras" << "\n";
		while (true) {
			cin >> num3;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente-------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;

			}
		}
		
		if (num3 == 1 || num3 == 2 || num3 == 3 || num3 == 4 || num3 == 5 || num3 == 6 || num3 == 7 || num3 == 8 || num3 == 0) {
			t1->EmpezarCotizacionCamisa(num3,CodigVend);
		}
		else {
			cout << "Ingreso una opcion erronea" << "\n";
			cout << "-------------------Presione enter para continuar-------------------" << "\n";
			cin.get();
			cin.get();
		}

	} while (num3 != 0);
}

void Menu::MenuPantalon() {
	int num4;
	do {
		system("cls");
		cout << "--------------COTIZADOR EXPRESS--------------" << "\n";
		cout << "Seleccione prenda a cotizar:" << "\n";
		t1->MostrarPantalones();
		cout << "---------------------------------------------" << "\n";
		cout << "Presione 0 para volver hacia atras " << "\n";
		while (true) {
			cin >> num4;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente-------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;

			}
		}
		if (num4 == 1 || num4 == 2 || num4 == 3 || num4 == 4 || num4 == 0) {
			t1->EmpezarCotizacionPant(num4,CodigVend);
		}
		else {
			cout << "Ingreso una opcion erronea" << "\n";
			cout << "-------------------Presione enter para continuar-------------------" << "\n";
			cin.get();
			cin.get();
			
		}
	} while (num4 != 0);
}


void Menu::PrimerMenu() {
	int num;
	
	do {
		system("cls");
		cout << "COTIZADOR EXPRESS - MENU PRINCIPAL" << "\n";
		cout << "------------------------------------------" << "\n";
		cout << "Tienda: " << t1->RetornarNombre() << " | " << "Codigo tienda: " << t1->RetornarCodigo() << "\n";
		cout << "------------------------------------------" << "\n";
		cout << "Nombre: " << nombre << " | " << "Apellido: " << apellido << " | " << "Codigo de vendedor: " << CodigVend << "\n";
		cout << "------------------------------------------" << "\n";
		cout << "Seleccione una opcion" << "\n";
		cout << "1-Ver historial de cotizaciones" << "\n";
		cout << "2-Ver Stock" << "\n";
		cout << "3-Realizar una cotizacion" << "\n";
		cout << "4-Salir" << "\n";
		while (true) {
			cin >> num;
			if (cin.fail()) {
				cout << "------------Opcion invalida,seleccione nuevamente-------\n";
				cin.clear();
				cin.ignore(100, '\n');
			}
			else {
				break;

			}
		}
		if (num == 1 || num == 2 || num == 3 || num == 4) {
			if (num == 1) {
				t1->imprimirHistorial();
			}
			if (num == 2) {
				t1->MostrarStock();
			}
			if (num == 3) {
				SegundoMenu();
			}
		}
		else {
			cout << "Ingreso una opcion erronea" << "\n";
			cout << "-------------------Presione enter para continuar-------------------" << "\n";
			cin.get();
			cin.get();
			
		}
	} while (num != 4);
}
