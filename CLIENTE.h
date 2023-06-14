
#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
#include <sstream>
#include "Serviciohotel.h"
#include <vector>

using namespace std;



class Cliente {
private:
    int noServicio;
    string nombre;
    string apellido;
    string correo;
    string metodoPago;
    bool pagado;
    vector<ServicioHotel*> servicios;

public:
    Cliente(int _noServicio, const string& _nombre, const string& _apellido, const string& _correo, const string& _metodoPago)
        : noServicio(_noServicio), nombre(_nombre), apellido(_apellido), correo(_correo), metodoPago(_metodoPago), pagado(false) {}

    void elegirServicio(ServicioHotel* servicio) {
        servicios.push_back(servicio);
    }

    void pagarServicio() {
        pagado = true;
        cout << "El servicio ha sido pagado." << endl;
    }

    void mostrarInfo() {
        cout << "Información del cliente:" << endl;
        cout << "Número de servicio: " << noServicio << endl;
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Correo: " << correo << endl;
        cout << "Método de pago: " << metodoPago << endl;
        cout << "Estado de pago: " << (pagado ? "Pagado" : "Pendiente") << endl;
    }

   
    
    
};






#endif

