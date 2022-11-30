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
