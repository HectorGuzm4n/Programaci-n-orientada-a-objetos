#include <iostream>
#include <stdlib.h>
using namespace std;

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
					Auto q3(45,"Adventador"); 
					
					Modelo modelo1;
					
					modelo1.setModelo("Nissan","Chevrolet","Lamborghini");
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
