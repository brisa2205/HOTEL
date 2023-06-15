/*
 *
 * Proyecto Hotel clase Cliente
 * Brisa Itzel Reyes Castro
 * A01710395
 * 15/06/2023
 * Esta clase defina objeto de tipo Cliente que contiene todos las metodos
 * los cuales se basan en mostrar, aprtar servicios además dee mostrar servicio 
 *  apartado con el fin de que el cliente interactua y visualice la información
 */





#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <iostream>

#include <sstream>

#include "Serviciohotel.h" //biblioteca con los objetos a usar

using namespace std;

//definimos clase cliente
class Cliente {
	
//declaramos las variables privadas
private:
	
    int noServicio;
    string nombre;
    string apellido;
    string correo;
    string metodoPago;
    ServicioHotel* servicios[3]; // uso de listas con apuntadores
    ServicioHotel* apartados[6];
    int apartadoActual;//variable de aprtado para visualizar el comportamiento

public:
	//constructores por default
    Cliente(int _noServicio, string _nombre, string _apellido, string _correo, string _metodoPago,
        ServicioHotel* restaurante, ServicioHotel* evento, ServicioHotel* alojamiento)
        : noServicio(_noServicio), nombre(_nombre), apellido(_apellido), correo(_correo), metodoPago(_metodoPago) {
        apartadoActual = 0;
        //constructores de los apuntadores
        servicios[0] = restaurante;
        servicios[1] = evento;
        servicios[2] = alojamiento;
    }

    void mostrarServiciosDisponibles();
    void apartarServicio(int opcion);
    void mostrarApartados(string tipo);
};


/**hacemos el uso de un for, para recorrer nuestro arreglo iniciando en 0 hasta 3 
*de los 3 objetos que nos gustaria crear
*/
void Cliente::mostrarServiciosDisponibles() {
    cout << "Servicios disponibles:" << endl;
    for (int i = 0; i < 3; i++) {
        servicios[i]->mostrarServicio();
    }
}
	/**
	*uso de for para recorrer los lugares de mis servicios apartados
	
	*usamos condicionales par saber que servicio esta ocup
	*/

void Cliente::apartarServicio(int opcion) {
    if (apartadoActual < 6) {
        if (opcion >= 1 && opcion <= 3) {
            apartados[apartadoActual++] = servicios[opcion - 1];
            cout << "Servicio apartado exitosamente." << endl;
        } else {
            cout << "Opción inválida." << endl;
        }
    } else {
        cout << "No es posible apartar más servicios. Límite alcanzado." << endl;
    }
}
	/**
	* usamos un ciclo for teniendo en cuenta que si apartamos 
	*en esta sección nos mostrara lo que apartamos anteriormente.
	*/
	
void Cliente::mostrarApartados(string tipo) {
    cout << "Apartados de tipo " << tipo << ":" << endl;
    bool encontrado = false;
    for (int i = 0; i < apartadoActual; i++) {
        if (tipo == "Restaurante" && dynamic_cast<Restaurante*>(apartados[i]) != NULL) {
            apartados[i]->mostrarServicio();
            encontrado = true;
        } else if (tipo == "Evento" && dynamic_cast<Evento*>(apartados[i]) != NULL) {
            apartados[i]->mostrarServicio();
            encontrado = true;
        } else if (tipo == "Alojamiento" && dynamic_cast<Alojamiento*>(apartados[i]) != NULL) {
            apartados[i]->mostrarServicio();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron apartados de tipo " << tipo << "." << endl;
    }
}



#endif

