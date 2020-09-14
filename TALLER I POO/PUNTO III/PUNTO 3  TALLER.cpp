#include <iostream>
using namespace std;
  
  //ejercicio 3 Taller

/* Suponga que se presenta por pantalla un menú de usuario. Con las opciones:
	• Seleccionar cliente.
	• Insertar cliente.
	• Editar cliente.
	• Borrar cliente.
	• Salir.
  Se pide implementar una clase Cliente que contenga los métodos que reciban cada
  elemento por individual y que imprima la información dada. */
  
class Cliente{
	
	private:                                          //ATRIBUTOS
		string cliente;
		
	public:
		Cliente(string _cliente);                      // CONSTRUCTOR
		
		void setcliente(string _cliente);              // 1mer METODO
		string getcliente();
		
		void setNuevocliente(string _Nuevocliente);    // 2do METODO
		string getNuevocliente();
		
		void setNombreEditado(string _NombreEditado);  // 3cer METODO
		string getNombreEditado();
		
		~Cliente(); // destructor                      // 4to METODO
};

Cliente::Cliente(string _cliente){  // incializo contructor
	cliente=_cliente;
}

//----------------------------------------- 1mer METODO

void Cliente::setcliente(string _cliente){  
	
	cliente=_cliente;	
}

string Cliente::getcliente(){
	return cliente;
}

//------------------------------------------- 2do METODO

void Cliente::setNuevocliente(string _Nuevocliente){
		
	cliente=_Nuevocliente;
}
	
string Cliente::getNuevocliente(){
	
	return cliente;
}
	
//------------------------------------------- 3cer METODO

void Cliente::setNombreEditado(string _NombreEditado){
	cliente=_NombreEditado;
}

string Cliente::getNombreEditado(){
	return cliente;
}

//------------------------------------------- 4to METODO

Cliente::~Cliente(){
}

//------------------------------------------- 5to METODO

int main(int argc, char** argv) {

	int op1,op2,op3,op4;
	string Nuevonombrecliente,Nuevonombreeditado;
	
	Cliente C1=Cliente("Abelardo Ramirez");        
	Cliente C2=Cliente("Sofia Franco");
	Cliente C3=Cliente("Gonzalos Hidalgos");
	Cliente C4=Cliente("");                    // Para ingresar un nuevo cliente
	
	cout<<"Seleccione una opcion del menu."<<endl;
	cout<<"1. Seleccionar cliente"<<endl;
	cout<<"2. Insertar nuevo cliente"<<endl;
	cout<<"3. Editar cliente"<<endl;
	cout<<"4. Borrar cliente"<<endl;
	cout<<"5. Salir"<<endl<<endl;
	cin>>op1;cout<<endl;
	
	switch(op1){                      //  1mer METODO 
		case 1:
			
			cout<<"Que cliente desea seleccionar?"<<endl<<endl;
			cout<<"1. Abelardo Rmirez "<<endl;
			cout<<"2. Sofia Franco "<<endl;
			cout<<"3. Gonzalos Higaldo"<<endl<<endl;
			cin>>op2;cout<<endl;
			
			switch (op2){
				case 1:
					cout<<"Cliente seleccioando: "<<C1.getcliente()<<endl;
				break;
				case 2:
					cout<<"Cliente seleccioando: "<<C2.getcliente()<<endl;
				break;
				case 3:
					cout<<"Cliente seleccioando: "<<C3.getcliente()<<endl;	
				break;
				default:
				cout<<"Numero no existente."<<endl;
				break;		
			} 
		break;
		case 2:                       // 2do METODO            
			
			cout<<"Ingrese el nuevo cliente"<<endl<<endl;
			cin>>Nuevonombrecliente;cout<<endl;
			C4.setNuevocliente(Nuevonombrecliente);
			cout<<"El nuevo cliente es: "<<C4.getNuevocliente()<<endl;
		break;
		case 3:                       // 3cer METODO
			
			cout<<"Seleccione el cliente a editar"<<endl<<endl;
			cout<<"1. Abelardo Ramirez "<<endl;
			cout<<"2. Sofia Franco "<<endl;
			cout<<"3. Gonzalos Higaldo"<<endl<<endl;
			cin>>op3;cout<<endl;
			
			switch(op3){
				
				case 1:
					cout<<"Ingrese el nuevo nombre: ";
					cin>>Nuevonombreeditado; cout<<endl;
					C1.setNombreEditado(Nuevonombreeditado);
					cout<<"El nuevo nombre es "<<C1.getNombreEditado()<<endl;
				break;
				case 2:
					cout<<"Ingrese el nuevo nombre: ";
					cin>>Nuevonombreeditado;cout<<endl;
					C2.setNombreEditado(Nuevonombreeditado);
					cout<<"El nuevo nombre es "<<C2.getNombreEditado()<<endl;
				break;
				case 3:
					cout<<"Ingrese el nuevo nombre: ";
					cin>>Nuevonombreeditado;cout<<endl;
					C3.setNombreEditado(Nuevonombreeditado);
					cout<<"El nuevo nombre es "<<C3.getNombreEditado()<<endl;
				break;	
				default:
				cout<<"Numero no existente."<<endl;
				break;	
			}	
		break;
		case 4:                 // 4to METODO
			cout<<"Elija el cliente que desea borrar."<<endl<<endl;
			cout<<"1. Abelardo Rmirez "<<endl;
			cout<<"2. Sofia Franco "<<endl;
			cout<<"3. Gonzalos Higaldo"<<endl<<endl;
			cin>>op4;
			
			switch(op4){
				
				case 1:
					C1.~Cliente(); cout<<endl;  // destruyendo objeto
					cout<<"los clientes restantes son:"<<endl<<endl;
					cout<<C2.getcliente()<<endl;
					cout<<C3.getcliente()<<endl;
				break;
				case 2:
					C2.~Cliente(); cout<<endl;  // destruyendo objeto
					cout<<"los clientes restantes son:"<<endl<<endl;
					cout<<C1.getcliente()<<endl;
					cout<<C3.getcliente()<<endl;
				break;	
				case 3:
					C3.~Cliente(); cout<<endl; // destruyendo objeto
					cout<<"los clientes restantes son:"<<endl<<endl;
					cout<<C1.getcliente()<<endl;
					cout<<C2.getcliente()<<endl;
				break;
			}	
		break;
		case 5:
		exit(-1);
		break;	
	}
}
