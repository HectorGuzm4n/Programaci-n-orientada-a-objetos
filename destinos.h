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
