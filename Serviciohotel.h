#ifndef Serviciohotel_H_
#define Serviviohotel_H_

#include <string>

#include <iostream>

#include <sstream>

#include "Hotel.h" //objetos a usar

using namespace std;


//declarar clase servicioHotel

class ServicioHotel{
protected:
  string NombreServicio;
  string NombreHotel;
  string Ubicacion;
  string Horario;
  float Precio;
  float Nopersonas;

public:
    ServicioHotel();
    ServicioHotel(string,string,string,string,float,float);
//   usamos las palabra virtual nos idic funcion de polimorfismo
    virtual void buscarServicio()=0 ;


};

// metodos de la clase hotel
ServicioHotel::ServicioHotel(){

  NombreServicio = "sin especificar";
   NombreHotel="no especificado";
    Ubicacion="no especificado";
    Horario="no especificado";
    Precio=0;
    Nopersonas=0;
}
ServicioHotel::ServicioHotel(string _NombreServicio,string _NombreHotel,string _Ubicacion,string _Horario,float _Precio,float _Nopersonas)  {
  NombreServicio = _NombreServicio; 
  NombreHotel = _NombreHotel ;
  Ubicacion= _Ubicacion;
  Horario= _Horario;
  Precio= _Precio;
  Nopersonas= _Nopersonas;

 }

void ServicioHotel::buscarservicio(){

cout<<"Nombre hotel"<<NombreHotel<< endl;
cout<<"Nombre Servicio"<<NombreServicio<<endl;
cout<<"Ubicacion"<<Ubicacion<<endl;
cout<<"Horario"<<Horario<<endl;
cout<<"Precio"<<Precio;
cout<<"no. de personas "<<Nopersonas;

}

 
//  Tenemos 3 clases que son hijos de la clase padre, ene este caso ServicioHotel es el padre
//Lo que es clase  restaurante,Evento y alojamiento heredan la clase padre 
// declarar clase restaurante

class Restaurante:public ServicioHotel{

private:
  string tipoComida;
  string preferenciasComida;
  string Ensalada;

public:
  Restaurante();
  Restaurante(string,string,string);
  void buscarServicio();

};
// metodos
Restaurante::Restaurante(){

  tipoComida="ninguno";
  preferenciasComida="ninguno";
  Ensalada="ninguno";
  
}

Restaurante::Restaurante(string _tipoComida, string _preferenciasComida, float _Ensalada){
  tipoComida = _tipoComida;
  preferenciasComida = _preferenciasComida;
  Ensalada= _Ensalada;
}


void restaurante::buscarServicioHotel(){
      ServicioHotel::buscarServicioHotel()
      cout<<"tipo de comida:"<<tipoComida<<endl;
      cout<<"preferencia de comida:"<<preferenciaComida<<endl;
      cout<<"cuantas ensaladas desea:"<<Ensalada;  

}



// Declarar clase evento
class Evento:public ServicioHotel{

private:
  float Mesas;
  string Musica;
  float sillas;
  string comida;
  string Decoraci�n;

public:
  Evento();
  Evento(float,string,float,string,string);
  void buscarSericio();

};

 
// METODOS
Evento::Evento(){
    float Mesas =0;
  string Musica="ninguna";
  float sillas=0;
  string comida="ninguna";
  string Decoracion="ninguna";
  
}

Evento::Evento(float _Mesas, string _Musica, float _Sillas, string _comida, string_Decoracion){
  Mesas =_Mesas;
  Musica=_Musica;
  Sillas=_Sillas;
  Comida=_Comida;
  Decoracion=_Decoracion;
}
void Evento::buscarSerivioHotel(){
     ServicioHotel::buscarServicioHotel()
      cout <<"�cuantas mesas?"<<Mesas<<endl;
      cout<<"�desea musica?"<<Musica<<endl:
      cout<<"�cuantas sillas desea?"<<Sillas<<endl;
      cout"que comidad desea"<<Comida<<endl;
      cout<<"�Deses decoraci�n?"<<Decoracion<<endl;
}

//  Declarar clase alojamiento

class Alojamiento: public ServicioHotel{
    private:
        float numerohabitacion;
        string tipohabitacion;
    public:
        Alojamiento();
        Alojamiento(float,string);

    };

Alojamiento::Alojamiento(){

    NumeroHabitacion="no esspecificado";
    TipoDeHabitacion="no especificado";
}

Alojamiento::Alojamiento(string _NumeroHabitacion, string _TipoDeHabitacion){
    Numerohabitacion= _NumeroHabitaci�n;
    TipoDeHabitacion= _TipoDeHabitacion;

}
void Alojamiento::buscarServicio(){
     ServicioHotel::buscarServicio()

      cout <<"�numerro de habitaci�n?"<<Numerohabitacion<<endl;
      cout<<"tipo de habitaci�n:"<<TipoDeHabitacion<<endl:
      
}
#endif //Serviciohotel


