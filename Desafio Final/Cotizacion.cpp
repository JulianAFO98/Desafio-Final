#include "Cotizacion.h"
#include <time.h>
#include<stdlib.h>
#include <string>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;


Cotizacion::Cotizacion() {
	raiz = NULL;
};
void Cotizacion::AgregarCotizacion(int cant, int product,string a, int z,float u) {
    GenerarFecha();
    GenerarNumeroIden();
    Nodo* texto = new Nodo;
    Nodo* numero = new Nodo;
    Nodo* numero2 = new Nodo;
    Nodo* text2 = new Nodo;
    Nodo* texto3 = new Nodo;
    Nodo* numero3 = new Nodo;
    Nodo* texto4 = new Nodo;
    Nodo* numero4 = new Nodo;
    Nodo* texto5 = new Nodo;
    Nodo* numero5 = new Nodo;
    Nodo* texto6 = new Nodo;
    Nodo* numero6 = new Nodo;
    Nodo* texto7 = new Nodo;
    Nodo* numero7 = new Nodo;
    Nodo* numero8 = new Nodo;
    Nodo* texto8 = new Nodo;
    texto->info = "Numero de Identificacion: ";
    text2->info = "Codigo de Vendedor: ";
    texto3->info = "Fecha y hora de la transaccion: ";
    texto4->info = "Prenda Cotizada: ";
    texto5->info = "Precio unitario: ";
    texto6->info = "Cantidad de unidades: ";
    texto7->info = "Precio Total: ";
    texto8->info = "-------------------------------";
    numero->info2 = numIden;
    numero2->info2 = z;
    numero3->info = fecha;
    numero4->info = a;
    numero5->info2 = u;
    numero6->info2 = cant;
    numero7->info3 = cant * u;
    numero8->info = "------------------------------";
    
    if (raiz == NULL)
    {
        numero->sig = NULL;
        texto->sig = numero;
        numero2->sig = texto;
        text2->sig = numero2;
        numero3->sig = text2;
        texto3->sig = numero3;
        numero4->sig = texto3;
        texto4->sig = numero4;
        numero5->sig = texto4;
        texto5->sig = numero5;
        numero6->sig = texto5;
        texto6->sig = numero6;
        numero7->sig = texto6;
        texto7->sig = numero7;
        numero8->sig = texto7;
        texto8->sig = numero8;
        raiz = texto8;
    }
    else
    {
        
        numero->sig = raiz;
        texto->sig = numero;
        numero2->sig = texto;
        text2->sig = numero2;
        numero3->sig = text2;
        texto3->sig = numero3;
        numero4->sig = texto3;
        texto4->sig = numero4;
        numero5->sig = texto4;
        texto5->sig = numero5;
        numero6->sig = texto5;
        texto6->sig = numero6;
        numero7->sig = texto6;
        texto7->sig = numero7;
        numero8->sig = texto7;
        texto8->sig = numero8;
        raiz = texto8;
    }
    imprimirCotizacionActual();
}

void Cotizacion::imprimir()
{
    system("cls");
    int x=1;
    cout << "------------HISTORIAL COTIZACION--------------" << "\n";
    Nodo* reco = raiz;
    if (reco == NULL) {
        cout << "El historial esta vacio" << "\n";
        cout << "------------Presione enter para continuar----------";
        cin.get();
        cin.get();
    }
    else {
        while (reco != NULL)
        {
            cout << reco->info;
            if (reco->info2 != 0) {
                cout << reco->info2;
            }
            if (reco->info3 != 0){
                cout << reco->info3;
            }
            reco = reco->sig;
            if (x % 2 == 0) {
                cout << "\n";
            }
            x++;
        }
        cout <<"------------Presione enter para continuar----------";
        cin.get();
        cin.get();
    }
  
}
Cotizacion::~Cotizacion()
{
    Nodo* reco = raiz;
    Nodo* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}
void Cotizacion::imprimirCotizacionActual() {
    system("cls");
    cout << "-------------TRANSACCION EXITOSA";
    Nodo* reco = raiz;
    int x = 1;

    for (int y = 0; y < 16; y++) {

        cout << reco->info;
        if (reco->info2 != 0) {
            cout << reco->info2;
        }
        if (reco->info3 != 0) {
            cout << reco->info3;
        }
        reco = reco->sig;
        if (x % 2 == 0) {
            cout << "\n";
        }
        x++;
    }
    cout << "------------Presione enter para continuar----------";
    cin.get();
}

void Cotizacion::GenerarFecha() {
    
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);
    char dia[80];
    strftime(dia, 80, "%d/%m/%Y %H:%M:%S", &ltm);
    string date_str(dia);
    fecha.assign(date_str);

}

void Cotizacion::GenerarNumeroIden() {
    srand(time(NULL));
    numIden= rand();
}
