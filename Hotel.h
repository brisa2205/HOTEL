#ifndef HOTEL_H_
#define HOTEL_H_

#include <iostream>
#include <string>
#include "CLIENTE.h"
#include "Serviciohotel.h"

using namespace std;






class Hotel {
private:
    string nombre;
    string ubicacion;
    vector<Cliente*> clientes;

public:
    Hotel();
    Hotel(const string& _nombre, const string& _ubicacion);
    void mostrarResumen();
    void agregarCliente(Cliente* cliente);
};

Hotel::Hotel() {
    nombre = "sin nombre";
    ubicacion = "sin ubicacion";
}

Hotel::Hotel(const string& _nombre, const string& _ubicacion) {
    nombre = _nombre;
    ubicacion = _ubicacion;
}
void Hotel::mostrarResumen() {
    cout << "Nombre: " << nombre << endl;
    cout << "Ubicacion: " << ubicacion << endl;
    cout << "Número de clientes: " << clientes.size() << endl;
}

void Hotel::agregarCliente(Cliente* cliente) {
    clientes.push_back(cliente);
}






#endif
