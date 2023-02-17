#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	private :
		string nit;
		
		public :
			Cliente(){
			}
			Cliente(string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){
			nit = n;	
			}
			//set (modificar el atributo) metodo
			void setNit(string n){nit = n;}
			void setNombres(string nom){nombres = nom;}
			void setApellidos(string ape){apellidos = ape;}
			void setDireccion(string dir){direccion = dir;}
			void setTelefono(int tel){telefono = tel;}
			void setFecha_Nacimiento(string fn){fecha_nacimiento = fn;}
			
			
			//get (mostrar el atributo) funcion
			string getNit(){return nit;}
			string getNombres(){return nombres;}
			string getApellidos(){return apellidos;}
			string getDireccion(){return direccion;}
			int getTelefono(){return telefono;}
			string getFecha_Nacimiento(){return fecha_nacimiento;}
			
			void mostrar(){
				cout<<"_______________________"<<endl;
				cout<<nit<<endl;
				cout<<nombres<<endl;
				cout<<apellidos<<endl;
				cout<<direccion<<endl;
				cout<<telefono<<endl;
				cout<<fecha_nacimiento<<endl;
			}
	
};
