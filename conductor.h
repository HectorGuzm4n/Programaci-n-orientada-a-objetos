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
