#include <iostream>
#include <stdlib.h>
using namespace std;

class Conductor {
	private:
		int edad;
		string nombre;
		
	public: //setters
		Conductor(int,string);
		void set_nombre();
		void set_edad();
};

Conductor::Conductor(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}
//getters
void Conductor::set_nombre(){
	cout<<"Nombre: "<<nombre<<" "<<endl;
}

void Conductor::set_edad(){
	cout<<"Edad: "<<edad<< " "<<endl;
} 


class Auto {
	private:
		int cantidad;
		string marca;
		
	public: //setters
		Auto(int,string);
		void contar();
		void tipo();

};

Auto::Auto(int _cantidad,string _marca){
	cantidad=_cantidad;
	marca=_marca;
}
//getters
void Auto::contar(){
	cout<<"Unidades disponilbes: "<<cantidad<<" "<<endl;
}

void Auto::tipo(){
	cout<<"Modelo: "<<marca<< " "<<endl;
	

} 

class Modelo {
	private:
		string modelo2;
		string modelo3;
		string modelo4;
		
	public: //setters
		Modelo();
		void setModelo(string,string,string);
		//getters
		string getModelomodelo2();
		string getModelomodelo3();
		string getModelomodelo4();

};

Modelo::Modelo(){
}

void Modelo::setModelo(string _modelo2,string _modelo3,string _modelo4){
	modelo2 = _modelo2;
	modelo3 = _modelo3;
	modelo4 = _modelo4;
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


class Destinos {
	private:
		int tiempo;
		string lugar;
		
	public: //setters
		Destinos(int,string);
		void horas();
		void destino();

};

Destinos::Destinos(int _tiempo,string _lugar){
	tiempo=_tiempo;
	lugar=_lugar;
}
//getters
void Destinos::horas(){
	cout<<"Tiempo: "<<tiempo<<" horas "<<endl;
}

void Destinos::destino(){
	cout<<"Destino: "<<lugar<< " "<<endl;
	

} 

class Viaje {
	private:
		string viaje1;
		string viaje2;
		
	public: //setters
		Viaje();
		void setViaje(string,string);
		//getters
		string getViajeviaje1();
		string getViajeviaje2();

};

Viaje::Viaje(){
}

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
				
				cout << "Personal total: 3 "<<endl;
				cout<<"***********"<<endl;
				p1.set_nombre();
				p1.set_edad();
				cout<<"***********"<<endl;
				p2.set_nombre();
				p2.set_edad();
				cout<<"***********"<<endl;
				p3.set_nombre();
				p3.set_edad();            
                
                system("pause>nul");
                break;
            }
                
            case 2: {
                	Auto q1 = Auto(25,"Tsuru");
					Auto q2(10,"Camaro");
					Auto q3(45,"Leon 245 HP"); 
					
					Modelo modelo1;
					
					modelo1.setModelo("Nissan","Chevrolet","Cupra");
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
					cout<<"Unidades totales: 80"<<endl;
					
					      
                
                system("pause>nul");
                break;
            }
                
            case 3: {
                Destinos w1 = Destinos(3,"CDMX");
				Destinos w2(3,"San Luis Potosi");
				Destinos w3(4,"Puebla");
				Destinos w4(1,"Bernal");
				Destinos w5(1,"Tequisquiapan");
				Destinos w6(3,"Jalpan de Serra");
				
				Viaje viaje4;
					
					viaje4.setViaje("Nacionales","Regionales");
					
					cout<<viaje4.getViajeviaje1()<<endl;
				cout<<"***********"<<endl;
				w1.destino();
				w1.horas();
				cout<<"***********"<<endl;
				w2.destino();
				w2.horas();
				cout<<"***********"<<endl;
				w3.destino();
				w3.horas();
				cout<<"***********"<<endl;
				cout<<"***********"<<endl;
				cout<<viaje4.getViajeviaje2()<<endl;
	            cout<<"***********"<<endl;
				w4.destino();
				w4.horas();
				cout<<"***********"<<endl;
				w5.destino();
				w5.horas();
				cout<<"***********"<<endl;
				w6.destino();
				w6.horas();   
                
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
	

