class Auto {
	private:
		int cantidad;
		string marca;
		
	public:
		Auto(int,string);
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
