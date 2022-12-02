#include <iostream>
#include <stdlib.h>
using namespace std;

class Conductor {
	private: //Atributos
		int edad;
		string nombre;
		
	public: //metodos
		Conductor(int,string); //constructor
		void set_nombre();
		void set_edad();
};

Conductor::Conductor(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

void Conductor::set_nombre(){
	cout<<"Nombre: "<<nombre<<" "<<endl;
}

void Conductor::set_edad(){
	cout<<"Edad: "<<edad<< " "<<endl;
} 


class Auto {
	private: //Atributos
		int cantidad;
		string marca;
		
	public: //metodos
		Auto(int,string); //constructor
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

class Modelo {
	private: //Atributos
		string modelo2;
		string modelo3;
		string modelo4;
		string modelo5;
		
	public: //metodos
		Modelo(); //constructor
		void setModelo(string,string,string,string);
		//Getters
		string getModelomodelo2();
		string getModelomodelo3();
		string getModelomodelo4();
		string getModelomodelo5();

};

Modelo::Modelo(){
}
//setters
void Modelo::setModelo(string _modelo2,string _modelo3,string _modelo4,string _modelo5){
	modelo2 = _modelo2;
	modelo3 = _modelo3;
	modelo4 = _modelo4;
	modelo5 = _modelo5;
}	

string Modelo::getModelomodelo2(){
	return modelo2;
}

string Modelo::getModelomodelo3(){
	return modelo3;
}

string Modelo::getModelomodelo4(){
	return modelo4;
}

string Modelo::getModelomodelo5(){
	return modelo5;
}

class Destinos {
	private: //Atributos
		int tiempo;
		string lugar;
		float kilometraje;
		
	public: //Metodos
		Destinos(int,string,float); //constructor
		void horas();
		void destino();
		void km();

};

class Costo : public Destinos{
	private: //Atributos
		int cantidad;
	public: //Metodos
		Costo(int,string,float,int); //Constructor de la clase Costo
		void mostrarCosto();
};
//constructor de la clase padre
Destinos::Destinos(int _tiempo,string _lugar,float _kilometraje){
	tiempo=_tiempo;
	lugar=_lugar;
	kilometraje=_kilometraje;
}

Costo::Costo(int _tiempo,string _lugar,float _kilometraje,int _cantidad) : Destinos(_tiempo,_lugar,_kilometraje){

	cantidad = _cantidad;
}
void Destinos::horas(){
	cout<<"Tiempo: "<<tiempo<<" horas "<<endl;
}

void Destinos::destino(){
	cout<<"Destino: "<<lugar<< " "<<endl;
	

} 

void Destinos::km(){
	cout<<kilometraje<<" Km"<<endl;
}



void Costo::mostrarCosto(){
	destino();
	horas();
	km();
	cout<<"Costo: $ "<<cantidad<<endl;
}

class Viaje {
	private: //Atributos
		string viaje1;
		string viaje2;
		
	public: //metodos
		Viaje(); //constructor
		void setViaje(string,string);
		//Getters
		string getViajeviaje1();
		string getViajeviaje2();

};

Viaje::Viaje(){
}
//setters
void Viaje::setViaje(string _viaje1,string _viaje2){
	viaje1 = _viaje1;
	viaje2 = _viaje2;
}	

string Viaje::getViajeviaje1(){
	return viaje1;
}

string Viaje::getViajeviaje2(){
	return viaje2;
}



int main () {
	
	 int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        cout << "\n\nServicio de transporte" << endl;
        cout << "1. Personal" << endl;
        cout << "2. Autos" << endl;
        cout << "3. Destinos" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: {
                Conductor p1 = Conductor(22, "Oscar");
				Conductor p2(25,"Victor");
				Conductor p3(30, "Alain"); 
				Conductor p4(32,"Isaac");
				Conductor p5(25,"Juan"); 
				
				cout << "Personal total: 5 "<<endl;
				cout<<"***********"<<endl;
				p1.set_nombre();
				p1.set_edad();
				cout<<"***********"<<endl;
				p2.set_nombre();
				p2.set_edad();
				cout<<"***********"<<endl;
				p3.set_nombre();
				p3.set_edad();   
				cout<<"***********"<<endl;
				p4.set_nombre();
				p4.set_edad(); 
				cout<<"***********"<<endl;
				p5.set_nombre();
				p5.set_edad();          
                
                system("pause>nul");
                break;
            }
                
            case 2: {
                	Auto q1 = Auto(5,"Tsuru");
					Auto q2(10,"Camaro");
					Auto q3(5,"Adventador"); 
					Auto q4(2,"620R");
					Modelo modelo1;
					
					modelo1.setModelo("Nissan","Chevrolet","Lamborghini","McLaren");
					cout<<modelo1.getModelomodelo2()<<endl;
					
					q1.tipo();
					q1.contar();
					
					cout<<"***********"<<endl;
					
					cout<<modelo1.getModelomodelo3()<<endl;
					
					
					q2.tipo();
					q2.contar();
					cout<<"***********"<<endl;
					
					cout<<modelo1.getModelomodelo4()<<endl;				
				
					q3.tipo();
					q3.contar();
					cout<<"***********"<<endl;
					
					cout<<modelo1.getModelomodelo5()<<endl;				
				
					q4.tipo();
					q4.contar();
					cout<<"***********"<<endl;
					cout<<"Unidades totales: 22"<<endl;
					      
                
                system("pause>nul");
                break;
            }
                
            case 3: {
				
				Costo costo1(3,"CDMX",217,2170);
				Costo costo2(3,"San Luis Potosi",207,2070);
				Costo costo3(4,"Puebla",340,3400);
				Costo costo4(1,"Bernal",64,640);
				Costo costo5(1,"Tequisquiapan",72,720);
				Costo costo6(3,"Jalpan de Serra",189,1890);
				
				
				Viaje viaje4;
					
					viaje4.setViaje("Nacionales","Regionales");
					
					cout<<viaje4.getViajeviaje1()<<endl;
				cout<<"***********"<<endl;
	
				costo1.mostrarCosto();
				
				cout<<"***********"<<endl;
				costo2.mostrarCosto();
				cout<<"***********"<<endl;
				costo3.mostrarCosto();
				cout<<"***********"<<endl;
				cout<<"***********"<<endl;
				
				cout<<viaje4.getViajeviaje2()<<endl;
	           		cout<<"***********"<<endl;
				costo4.mostrarCosto();
				cout<<"***********"<<endl;
				costo5.mostrarCosto();
				cout<<"***********"<<endl;
				costo6.mostrarCosto();
				
                system("pause>nul"); // Pausa            
                break;
            }
            
            case 0: {
            	repetir = false;
            	break;
            }
        }        
    } while (repetir);
	 
    return 0;
}
	
	
	

