/*
 * Brisa
 * Proyecto Hotel
 * 
 */

#ifndef SERVICIO_HOTEL_H_
#define SERVICIO_HOTEL_H_
#include <iostream>
#include <string>
using namespace std;


#include <iostream>
#include <string>

using namespace std;

class ServicioHotel {
private:
    string nombreServicio;
    string recinto;
    string horario;
    float precio;
    int noPersonas;

public:
    ServicioHotel();
    ServicioHotel(string, string, string, float, int);
    virtual void buscarServicio() = 0;
};

ServicioHotel::ServicioHotel() {
    nombreServicio = "sin especificar";
    recinto = "no especificado";
    horario = "no especificado";
    precio = 0;
    noPersonas = 0;
}

ServicioHotel::ServicioHotel(string _nombreServicio, string _recinto, string _horario, float _precio, int _noPersonas) {
    nombreServicio = _nombreServicio;
    recinto = _recinto;
    horario = _horario;
    precio = _precio;
    noPersonas = _noPersonas;
}

void ServicioHotel::buscarServicio() {
    cout << "Nombre Servicio: " << nombreServicio << endl;
    cout << "recinto: " << recinto << endl;
    cout << "Horario: " << horario << endl;
    cout << "Precio: " << precio << endl;
    cout << "No. de personas: " << noPersonas << endl;
}

class Restaurante : public ServicioHotel {
private:
    string tipoComida;
    string preferenciasComida;
    string Ensalada;

public:
    Restaurante();
    Restaurante(string, string, string, string, string, string, float, int);
    void buscarServicio();
};

Restaurante::Restaurante() : ServicioHotel() {
    tipoComida = "ninguno";
    preferenciasComida = "ninguno";
    Ensalada = "ninguno";
}

Restaurante::Restaurante(string _tipoComida, string _preferenciasComida, string _Ensalada, string _nombreServicio, string _recinto, string _horario, float _precio, int _Nopersonas) : ServicioHotel(_nombreServicio, _recinto, _horario, _precio, _Nopersonas) {
    tipoComida = _tipoComida;
    preferenciasComida = _preferenciasComida;
    Ensalada = _Ensalada;
}

void Restaurante::buscarServicio() {
    ServicioHotel::buscarServicio();
    cout << "Tipo de comida: " << tipoComida << endl;
    cout << "Preferencia de comida: " << preferenciasComida << endl;
    cout << "Cuantas ensaladas desea: " << Ensalada << endl;
}

class Evento : public ServicioHotel {
private:
    float Mesas;
    string Musica;
    float sillas;
    string comida;
    string Decoracion;

public:
    Evento();
    Evento(float, string, float, string, string, string, string, string, float, int);
    void buscarServicio();
};

Evento::Evento() : ServicioHotel() {
    Mesas = 0;
    Musica = "ninguna";
    sillas = 0;
    comida = "ninguna";
    Decoracion = "ninguna";
}

Evento::Evento(float _Mesas, string _Musica, float _sillas, string _comida, string _Decoracion, string _nombreServicio, string _recinto, string _horario, float _precio, int _Nopersonas) : ServicioHotel(_nombreServicio, _recinto, _horario, _precio, _Nopersonas) {
    Mesas = _Mesas;
    Musica = _Musica;
    sillas = _sillas;
    comida = _comida;
    Decoracion = _Decoracion;
}

void Evento::buscarServicio() {
    ServicioHotel::buscarServicio();
    cout << "Cuantas mesas: " << Mesas << endl;
    cout << "Desea musica: " << Musica << endl;
    cout << "Cuantas sillas desea: " << sillas << endl;
    cout << "Que comida desea: " << comida << endl;
    cout << "Desea decoracion: " << Decoracion << endl;
}

class Alojamiento : public ServicioHotel {
private:
    string numerohabitacion;
    string tipohabitacion;

public:
    Alojamiento();
    Alojamiento(string, string, string, string, string, float, int);
    void buscarServicio();
};

Alojamiento::Alojamiento() : ServicioHotel() {
    numerohabitacion = "no especificado";
    tipohabitacion = "no especificado";
}

Alojamiento::Alojamiento(string _numerohabitacion, string _tipohabitacion, string _nombreServicio, string _recinto, string _horario, float _precio, int _Nopersonas) : ServicioHotel(_nombreServicio, _recinto, _horario, _precio, _Nopersonas) {
    numerohabitacion = _numerohabitacion;
    tipohabitacion = _tipohabitacion;
}

void Alojamiento::buscarServicio() {
    ServicioHotel::buscarServicio();
    cout << "Numero de habitacion: " << numerohabitacion << endl;
    cout << "Tipo de habitacion: " << tipohabitacion << endl;
}


#endif

