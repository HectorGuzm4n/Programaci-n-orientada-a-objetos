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
