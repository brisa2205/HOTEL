
#if !defined( Hotel_H_) 

#define Hotel_H_
#include <iostream>
#include <string>






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
    Ubicacion="sin ubicacion";
    Ticket ticket1;
    ticket = ticket1;
}
// Generamos constructore vacios
Hotel::Hotel(string _Nombre, string _Ubicacion,Ticket_ticket){
    Nombre = _Nombre;
    Ubicacion = _Ubicacion;
    ticket =_ticket;
}

void Hotel::muestraTicket(){
    cout << endl << "-----------------------Datos del Ticket ---------------------------------------" << endl;
    cout << "                      Nombre: " << Nombre << endl;
    cout << "                      Ubicacion: " << Ubicacion << endl;
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
