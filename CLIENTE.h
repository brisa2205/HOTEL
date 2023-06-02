#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <string>

#include <iostream>

#include <sstream>

#include "Hotel.h"

// La clase Cliente y la clase ticket forman una agregación
class Cliente{
private:
    string nombre;
    string Apellido;
public:
    Cliente();
    Cliente(string,string);
    generarRecepcion()
    pedirInformacion()
    elegirservicio()
    pagarservicio()


   
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
#endif //claseHotel
