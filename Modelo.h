class Modelo {
	private: //Atributos
		string modelo2;
		string modelo3;
		string modelo4;
		
	public: //metodos
		Modelo(); //constructor
		void setModelo(string,string,string);
		//Getters
		string getModelomodelo2();
		string getModelomodelo3();
		string getModelomodelo4();

};

Modelo::Modelo(){
}
//setters
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
