
#ifndef Hotel_H_
#Define Hotel_H_
#include <iostream>
#include <string>
#include <stream>

using namespace std;

//Declarar la clase Hotel
class Hotel{
private:
    string Nombre;
    string Ubicacion;
    Ticket ticket;

public:
    Hotel();
    Hotel(string,string,Ticket);
    void muestraCliente();
    void muestraTicket();
     
    
};
//declaramos metodos clase HOTEL
Hotel::Hotel(){
    
    Nombre ="sin nombre";
    Ubicacion="sin ubicación";
    Ticket ticket1;
    ticket = ticket1;
}
// Generamos constructore vacios
Hotel::Hotel(string _Nombre, string _ubicación,Ticket_ticket){
    Nombre = _Nombre;
    Ubicacion = _Ubicacion;
    ticket =_ticket;
}

void Hotel::muestraTicket(){
    cout << endl << "-----------------------Datos del Ticket ---------------------------------------" << endl;
    cout << "                      Nombre: " << Nombre << endl;
    cout << "                      Ubicación: " << Ubicacion << endl;
    ticket.muestraTicket();
}

// declarar clase Ticket

class Ticket{
private:
   cliente Cliente;
   

public:
    Ticket();
    Ticket(Cliente);


};
#endif //Hotel _H_
