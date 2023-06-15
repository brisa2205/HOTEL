/*
 *
 * Proyecto Hotel clase Cliente
 * Brisa Itzel Reyes Castro
 * A01710395
 * 15/06/2023
 
 * Esta clase defina objeto de tipo ServivioHotel qla cual es la clase padre ya
 *que le hereda atributos a sus hijas con el fin de usar polimorfismo y 
 *tener clase abstracta.
 */

#ifndef SERVICIO_HOTEL_H_
#define SERVICIO_HOTEL_H_

#include <iostream>

#include <sstream>

using namespace std;

//declaramos clase 
class ServicioHotel {
protected:
    string nombreServicio;
    string ubicacion;
    string horario;
    double precio;
    int noPersonas;
//declaramos metodos
public:
    ServicioHotel(string _nombreServicio, string _ubicacion, string _horario, double _precio, int _noPersonas)
        : nombreServicio(_nombreServicio), ubicacion(_ubicacion), horario(_horario), precio(_precio), noPersonas(_noPersonas) {}

//metodo abstracto
    virtual void mostrarServicio() = 0;
};

//declaramos clase Restaurante
//Aplicamos herencia 

class Restaurante : public ServicioHotel {
private:
    string tipoComida;
    string bebida;
    string ensalada;
    
//metodos restaurante
public:
    Restaurante(string _nombreServicio, string _ubicacion, string _horario, double _precio,int _noPersonas, string _tipoComida, string _bebida, string _ensalada)
        : ServicioHotel(_nombreServicio, _ubicacion, _horario, _precio, _noPersonas), tipoComida(_tipoComida), bebida(_bebida), ensalada(_ensalada) {}

    void mostrarServicio() {
        cout << "Nombre del servicio: " << nombreServicio << endl;
        cout << "Ubicación: " << ubicacion << endl;
        cout << "Horario: " << horario << endl;
        cout << "Precio: " << precio << endl;
        cout<<"no de personas"<<noPersonas<<endl;
        cout << "tipo de comida: " << tipoComida<< endl;
         cout << "tipo de bebida: " << bebida << endl;
        cout << "tipo de ensalada" << ensalada << endl;
    
        cout << endl;
    }
};

class Evento : public ServicioHotel {
private:
    float mesas;
    string musica;
    float sillas;
    string comida;
    string decoracion;
    
//metodos publicos
public:
    Evento(string _nombreServicio, string _ubicacion, string _horario, double _precio,int _noPersonas, int _mesas,string _musica,float _sillas, string _comida, string _decoracion)
        : ServicioHotel(_nombreServicio, _ubicacion, _horario, _precio, _noPersonas),mesas(_mesas),musica (_musica),sillas(_sillas),comida(_comida),decoracion(_decoracion){}

    void mostrarServicio() {
        cout << "Nombre del servicio: " << nombreServicio << endl;
        cout << "Ubicación: " << ubicacion << endl;
        cout << "Horario: " << horario << endl;
        cout << "Precio: " << precio << endl;
         cout<<"no de personas"<<noPersonas<<endl;
        cout << "cuantas mesas: " << mesas << endl;
         cout << "tipo de musica:"<< musica << endl;
        cout << "cuantas sillas " << sillas << endl;
        cout << "desea comida: " << comida << endl;
        cout << "tipo de decoracion " << decoracion << endl;
        
        
        cout << endl;
    }
};

//declaramos clase 
class Alojamiento : public ServicioHotel {
private:
    float numeroDeHabitacion;
    string tipoDeHabitacion;
//metodos de alojamiento
public:
    Alojamiento(string _nombreServicio, string _ubicacion, string _horario, double _precio,int _noPersonas, float _numeroDeHabitacion, string  _tipoDeHabitacion)
        : ServicioHotel(_nombreServicio, _ubicacion, _horario, _precio, _noPersonas), numeroDeHabitacion(_numeroDeHabitacion), tipoDeHabitacion(_tipoDeHabitacion) {}

    void mostrarServicio() {
        cout << "Nombre del servicio: " << nombreServicio << endl;
        cout << "Ubicación: " << ubicacion << endl;
        cout << "Horario: " << horario << endl;
        cout << "Precio: " << precio << endl;
         cout<<"no de personas"<<noPersonas<<endl;
        cout << "numero de habitacion:: " << numeroDeHabitacion << endl;
        cout << "tipo de habitacion " << tipoDeHabitacion << endl;
        cout << endl;
    }
};


#endif

