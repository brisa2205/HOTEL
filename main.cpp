/**
 *
 * Proyecto Hotel clase Cliente
 * Brisa Itzel Reyes Castro
 * A01710395
 * 15/06/2023
 * versio : 4
 * Este es un programa donde el usuario ingresa sus datos, 
 *posteriormente se le desploiega un menu sobre algunos 
 *servicios y  ella puede apartar su servicio predeterminado 
 *y posteriormente el sistema le muestra lo apartado.
 */


#include <iostream>
#include <string>
#include "CLIENTE.h"
#include "Serviciohotel.h"

using namespace std;



int main() {
    int noServicio;
    string nombre;
    string apellido;
    string correo;
    string metodoPago;

    cout << "Ingrese el número de servicio: ";
    cin >> noServicio;
    cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese el apellido del cliente: ";
    cin >> apellido;
    cout << "Ingrese el correo del cliente: ";
    cin >> correo;
    cout << "Ingrese el método de pago del cliente: ";
    cin >> metodoPago;

    // Crear instancias de servicios
    Restaurante* restaurante = new Restaurante("Restaurante la Vaca", "antea", "08:00 - 22:00", 50.0, 100,"enchiladas","jugo de naranja","ensalada de manzana");
    Evento* evento = new Evento("Evento XY años", "Ubicación salon villagrand", "10:00 - 18:00", 20.0, 200,20,"banda",200,"mole con pollo","tematica de mariposas");
    Alojamiento* alojamiento = new Alojamiento("holiday inn","5 de febrero", "20:00", 100 ,4, 304,"matrimonial")
    

    // Crear instancia del cliente
    

    // Menú de interacción con el cliente
    int opcion;
    //ciclo while
    while (true) {
        cout << endl;
        cout << "---- MENÚ ----" << endl;
        cout << "1. Mostrar servicios disponibles" << endl;
        cout << "2. Apartar servicio" << endl;
        cout << "3. Mostrar apartados por tipo" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cout << endl;
//condicionales
        if (opcion == 1) {
            cliente.mostrarServiciosDisponibles();
        } else if (opcion == 2) {
            int servicio;
            cout << "Ingrese el número de servicio a apartar: ";
            cin >> servicio;
            cliente.apartarServicio(servicio);
        } else if (opcion == 3) {
            string tipo;
            cout << "Ingrese el tipo de servicio a mostrar (Restaurante, Evento, Alojamiento): ";
            cin >> tipo;
            cliente.mostrarApartados(tipo);
        } else if (opcion == 4) {
            break;
        } else {
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }

   
    return 0;
	}
