#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <string>

#include <iostream>

#include <sstream>

#include "Hotel.h"

// La clase Cliente y la clase ticket forman una agregaci�n
class Cliente{
private:
    string nombre;
    string Apellido;
public:
    Cliente();
    Cliente(string,string);
    generarRecepcion();
    elegirservicio();
    pagarservicio();
    generarticket()

   
};
//metodos clase Cliente 
Cliente::Cliente(){
    
    Nombre="sin nombre";
    Apellido="sin Apellidos";
}
Cliente::Cliente(string_Nombre,string_Apellido){

  Nombre=_Nombre;
  Apellido=_Apellido;
}
 void Cliente::generarRecepcion(){
     cout<<"Bienvenido a la recepcion"<<endl;
     cout<<"¿Cual es su nombre?"<<endl;
     cin>>Nombre;
     cout<<"¿Cual es su apellido?"<<endl;
     cin>>Apellido;
     cout<<"¿Que servicio desea?"<<endl;
     cout<<"1.-Alojamiento"<<endl;
     cout<<"2.-Restaurante"<<endl;
     cout<<"3.-Evento"<<endl;


 }
    
   

    void Cliente::elegirservicio(){
        int opcion;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"¿Cuantas noches desea alojarse?"<<endl;
                cin>>opcion;
                cout<<"¿Que tipo de habitacion desea?"<<endl;
                cout<<"1.-Sencilla"<<endl;
                cout<<"2.-Doble"<<endl;
                cout<<"3.-Triple"<<endl;
                cout<<"4.-Suite"<<endl;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        cout<<"El costo de su habitacion es de $1000 por noche"<<endl;
                        cout<<"El costo total es de $"<<opcion*1000<<endl;
                        break;
                    case 2:
                        cout<<"El costo de su habitacion es de $1500 por noche"<<endl;
                        cout<<"El costo total es de $"<<opcion*1500<<endl;
                        break;
                    case 3:
                        cout<<"El costo de su habitacion es de $2000 por noche"<<endl;
                        cout<<"El costo total es de $"<<opcion*2000<<endl;
                        break;
                    case 4:
                        cout<<"El costo de su habitacion es de $2500 por noche"<<endl;
                        cout<<"El costo total es de $"<<opcion*2500<<endl;
                        break;
                }
                break;
            case 2:
                cout<<"¿Cuantas personas son?"<<endl;
                cin>>opcion;
                cout<<"¿Que tipo de comida desea?"<<endl;
                cout<<"1.-Desayuno"<<endl;
                cout<<"2.-Comida"<<endl;
                cout<<"3.-Cena"<<endl;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        cout<<"El costo de su comida es de $100 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*100<<endl;
                        break;
                    case 2:
                        cout<<"El costo de su comida es de $150 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*150<<endl;
                        break;
                    case 3:
                        cout<<"El costo de su comida es de $200 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*200<<endl;
                        break;
                }
                break;
            case 3:
                cout<<"¿Cuantas personas son?"<<endl;
                cin>>opcion;
                cout<<"¿Que tipo de evento desea?"<<endl;
                cout<<"1.-Boda"<<endl;
                cout<<"2.-XV años"<<endl;
                cout<<"3.-Graduacion"<<endl;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        cout<<"El costo de su evento es de $10000 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*10000<<endl;
                        break;
                    case 2:
                        cout<<"El costo de su evento es de $15000 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*15000<<endl;
                        break;
                    case 3:
                        cout<<"El costo de su evento es de $20000 por persona"<<endl;
                        cout<<"El costo total es de $"<<opcion*20000<<endl;
                        break;
                }
                break;
        }
void Cliente::pagarservicio(){
    cout<<"¿Con que desea pagar?"<<endl;
    cout<<"1.-Efectivo"<<endl;
    cout<<"2.-Tarjeta"<<endl;
    cin>>opcion;
    switch(opcion){
        case 1:
            cout<<"Ingrese el monto a pagar"<<endl;
            cin>>opcion;
            cout<<"Su cambio es de $"<<opcion-opcion<<endl;
            break;
        case 2:
            cout<<"Ingrese el numero de su tarjeta"<<endl;
            cin>>opcion;
            cout<<"Ingrese el codigo de seguridad"<<endl;
            cin>>opcion;
            cout<<"Ingrese el monto a pagar"<<endl;
            cin>>opcion;
            cout<<"Su pago se ha realizado con exito"<<endl;
            break;
    }
}
void Cliente::generarticket(){
    cout<<"¿Desea generar ticket?"<<endl;
    cout<<"1.-Si"<<endl;
    cout<<"2.-No"<<endl;
    cin>>opcion;
    switch(opcion){
        case 1:
            cout<<"Ticket generado con exito"<<endl;
            break;
        case 2:
            cout<<"Gracias por su visita"<<endl;
            break;
    }
}

    
}

     
#endif //claseHotel
