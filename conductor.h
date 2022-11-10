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
