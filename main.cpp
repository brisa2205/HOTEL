
#include <iostream>
#include <string>

#include "Hotel.h"
#include "Serviciohotel.h"
#include "CLIENTE.h"

int main() {
    string nombreHotel, ubicacionHotel;
    cout << "Ingrese el nombre del hotel: ";
    getline(cin, nombreHotel);
    cout << "Ingrese la ubicaci�n del hotel: ";
    getline(cin, ubicacionHotel);

    Hotel hotel(nombreHotel, ubicacionHotel);

    int noServicio;
    string nombreCliente, apellidoCliente, correoCliente, metodoPagoCliente;
    cout << "Ingrese el n�mero de servicio del cliente: ";
    cin >> noServicio;
    cin.ignore();
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);
    cout << "Ingrese el apellido del cliente: ";
    getline(cin, apellidoCliente);
    cout << "Ingrese el correo del cliente: ";
    getline(cin, correoCliente);
    cout << "Ingrese el m�todo de pago del cliente: ";
    getline(cin, metodoPagoCliente);

    Cliente cliente(noServicio, nombreCliente, apellidoCliente, correoCliente, metodoPagoCliente);

    int opcion;
    string nombreServicio, recinto, horario;
    float precio;
    int numPersonas;

    cout << "Elija el tipo de servicio:" << endl;
    cout << "1. Evento" << endl;
    cout << "2. Alojamiento" << endl;
    cout << "3. Restaurante" << endl;
    cout << "Ingrese su opci�n: ";
    cin >> opcion;

    cout << "Ingrese el nombre del servicio: ";
    cin.ignore();
    getline(cin, nombreServicio);
    cout << "Ingrese el recinto del servicio: ";
    getline(cin, recinto);
    cout << "Ingrese el horario del servicio: ";
    getline(cin, horario);
    cout << "Ingrese el precio del servicio: ";
    cin >> precio;
    cout << "Ingrese el n�mero de personas: ";
    cin >> numPersonas;

    if (opcion == 1) {
        cliente.elegirServicio(new Evento(0, "si", 0, "pan", "si", nombreServicio, recinto, horario, precio, numPersonas));
    } else if (opcion == 2) {
        cliente.elegirServicio(new Alojamiento("cinco", "grande", nombreServicio, recinto, horario, precio, numPersonas));
    } else if (opcion == 3) {
        cliente.elegirServicio(new Restaurante("vegana", "pescado", "manzan", "lsl", "sbd", "3:15",200 , 5));
    } else {
        cout << "Opci�n inv�lida." << endl;
        return 0;
    }

    cout << endl;
    hotel.agregarCliente(&cliente);
    hotel.mostrarResumen();
    cout << endl;
    cliente.mostrarInfo();
    cout << endl;
    cliente.pagarServicio();

    return 0;
}


