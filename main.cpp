#include <iostream>
#include <stdlib.h>
using namespace std;

class Conductor {
	private:
		int edad;
		string nombre;
		
	public:
		Conductor(int,string);
		void manejar();
		void hablar();
};

Conductor::Conductor(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

void Conductor::hablar(){
	cout<<"Nombre: "<<nombre<<" "<<endl;
}

void Conductor::manejar(){
	cout<<"Edad: "<<edad<< " "<<endl;
} 


class Auto {
	private:
		int cantidad;
		string marca;
		
	public:
		Auto(int,string);
		void contar();
		void tipo();

};

Auto::Auto(int _cantidad,string _marca){
	cantidad=_cantidad;
	marca=_marca;
}

void Auto::contar(){
	cout<<"Unidades disponilbes: "<<cantidad<<" "<<endl;
}

void Auto::tipo(){
	cout<<"Modelo: "<<marca<< " "<<endl;
	

} 


class Destinos {
	private:
		int tiempo;
		string lugar;
		
	public:
		Destinos(int,string);
		void horas();
		void destino();

};

Destinos::Destinos(int _tiempo,string _lugar){
	tiempo=_tiempo;
	lugar=_lugar;
}

void Destinos::horas(){
	cout<<"Tiempo: "<<tiempo<<" horas "<<endl;
}

void Destinos::destino(){
	cout<<"Destino: "<<lugar<< " "<<endl;
	

} 


int main () {
	cout<<"Registro de servico de transporte"<<endl;
	Conductor p1 = Conductor(22, "Oscar");
	Conductor p2(25,"Victor");
	Conductor p3(30, "Alain");
	
	Auto q1 = Auto(25,"Tsuru");
	Auto q2(10,"Camaro");
	Auto q3(45,"Leon 245 HP");
	
	Destinos w1 = Destinos(3,"CDMX");
	Destinos w2(3,"San Luis Potosi");
	Destinos w3(4,"Puebla");
	
	//Personal () calculara el numero de empleados
	
	//Cantidades()  calculara el numero de autos totales
	
	//lugares()  Obtendra la distancia en kilometros del lugar de destino
	
	//Nacional()
	//Regional()  Ambos se encargaran de identificar si el viaje sera dentro del estado o fuera de el
	
	//FueraQueretaro() Se encargara de cobrar a base de la gasolina gastada
	
	//Queretaro() Cobrara a base del kilometraje 
	
	cout<<"Personal"<<endl;
	cout<<"***********"<<endl;
	p1.hablar();
	p1.manejar();
	cout<<"***********"<<endl;
	p2.hablar();
	p2.manejar();
	cout<<"***********"<<endl;
	p3.hablar();
	p3.manejar();
	cout<<"***********"<<endl;
	cout<<"***********"<<endl;
	cout<<"Autos"<<endl;
	cout<<"***********"<<endl;
	q1.tipo();
	q1.contar();
	cout<<"***********"<<endl;
	q2.tipo();
	q2.contar();
	cout<<"***********"<<endl;
	q3.tipo();
	q3.contar();
	cout<<"***********"<<endl;
	cout<<"***********"<<endl;
	cout<<"Destinos"<<endl;
	cout<<"***********"<<endl;
	w1.destino();
	w1.horas();
	cout<<"***********"<<endl;
	w2.destino();
	w2.horas();
	cout<<"***********"<<endl;
	w3.destino();
	w3.horas();
	
	
	
	system ("pause");
	return 0;
}
