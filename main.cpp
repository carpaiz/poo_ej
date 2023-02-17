#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fn;
	int telefono;
	//cout<<"Ingrese Nit:";
	//cin>>nit;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	Cliente c = Cliente();
	c.setNombres(nombres);
	c.setApellidos(apellidos);
	cout<<"El nombres completo del cliente es:"<<c.getNombres()<<" "<<c.getApellidos()<<endl;
	
	
	
	/*cout<<"Ingrese Direccion:";
	cin>>direccion;
	cout<<"Ingrese telefono:";
	cin>>telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>fn;
	*/
	/*
	// instanciar una clase 
	Cliente c = Cliente(nombres,apellidos,direccion,telefono,fn,nit);
	c.mostrar();
	 
	cout<<"Ingrese Nit:";
	cin>>nit;
	c.setNit(nit);
	c.mostrar();
	cout<<"El nombres completo del cliente es:"<<c.getNombres()<<" "<<c.getApellidos()<<endl;
	
	*/
	
	
}

