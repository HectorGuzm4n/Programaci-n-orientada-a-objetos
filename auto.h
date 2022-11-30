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
