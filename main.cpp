#include <iostream>   
//bibliotecas
#include "Hotel.h" 

#include "Serviciohotel.h"


int main(){
// Aplicamos polimorfismo en el main
ServicoHotel * cuarto[2];

cuarto[0]=new Restaurante("Enchiladas", "pollo", 3)
cuarto[0]->buscarServicio();
cout<<"\n";
cuarto[1]=new Evento(5, "si", 20, "mole con pollo", "si")
cuarto[1]->buscarServico();
cout<<"\n";
cuarto[2]= new Alojamiento("5 cuartos ", "4 personas")
cout<<"\n";
}



