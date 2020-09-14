#include <iostream>
using namespace std;

// PUNTO 4 FINAL 	TALLER 

/* 	Un concesionario de auto motores le pide que diseñe un programa que le permita
	almacenar la información de los carros que entren al mismo. Las características de los carros
	específicamente son: modelo, color, matricula, numero de puertas, numero de pasajeros y
	si tiene o no aire acondicionado. Al ingresar un carro, se debe almacenar toda la información
	o como mínimo los primeros 3 ítems nombrados anteriormente incluyendo la característica
	del aire acondicionado. La información, por su parte, debe tener la opción de ser modificada
	y obtenida de manera individual. */

	class Concesionario{
		
		private:
			int modelo;  
			string color;   
			int matricula;  
			int Npuertas;   
			int Npasajeros;   
			string AireA; 
			
		public:
			Concesionario(int _modelo, string _color, int _matricula, int _Npuertas, int _Npasajeros,string _AireA);
			
			void setModelo(int _modelo);
			int getModelo();
			
			void setcolor(string _color);
			string getcolor();
			
			void setmatricula(int _matricula);
			int getmatricula();
			
			void setNpuertas(int _Npuertas);
			int getNpuertas();
			
			void setNpasajeros(int _Npasajeros);
			int getNpasajeros();	
			
			void setAireA(string _AireA);
			string getAireA();		
	};
	
	Concesionario::Concesionario(int _modelo, string _color, int _matricula, int _Npuertas, int _Npasajeros,string _AireA){
		
		modelo=_modelo;
		color=_color;
		matricula=_matricula;
		Npuertas=_Npuertas;
		Npasajeros=_Npasajeros;   
		AireA=_AireA;
	}
	
void Concesionario::setModelo(int _modelo){
	modelo=_modelo;
}

int Concesionario::getModelo(){
	return modelo;
}
// -------------------------------------------- METODO color

void Concesionario::setcolor(string _color){
	color=_color;
}

string Concesionario::getcolor(){
	return color;
}
// -------------------------------------------- METODO matricula
void Concesionario::setmatricula(int _matricula){
	matricula=_matricula;
}

int Concesionario::getmatricula(){
	return matricula;
}
// -------------------------------------------- METODO N puertas 
void Concesionario::setNpuertas(int _Npuertas){
	Npuertas=_Npuertas;
}

int Concesionario::getNpuertas(){
	return Npuertas;
}
// -------------------------------------------- METODO N pasajeros 
void Concesionario::setNpasajeros(int _Npasajeros){
		Npasajeros=_Npasajeros;	
}
int  Concesionario::getNpasajeros(){
	return Npasajeros;
}
// -------------------------------------------- METODO AireA
void Concesionario::setAireA(string _AireA){
	AireA=_AireA;
}

string Concesionario::getAireA(){
	return AireA;
}

int main(int argc, char** argv) {
	
	int op1,modelo,matricula,Npuertas,Npasajeros;
	string color,AireA,respuesta;
	
	cout<<"Ingrese los siguientes datos del  carro."<<endl<<endl;
	cout<<"Modelo: "; 
	cin>>modelo;
	cout<<"Color: ";	
	cin>>color;
	cout<<"Matricula: ";
	cin>>matricula;
	cout<<"Numero de puertas: ";
	cin>>Npuertas;
	cout<<"Numero de pasajeros: ";
	cin>>Npasajeros;
	cout<<"Aire acondicionado (si o no): ";
	cin>>AireA;cout<<endl;
	
	Concesionario carro=Concesionario(modelo,color,matricula,Npuertas,Npasajeros,AireA);  
	
	cout<<"Desea modificar algun valor (si o no)"<<endl<<endl;
	cin>>respuesta;cout<<endl;
	
	if (respuesta == "si"){
		
		cout<<"Los datos ingresados son: "<<endl<<endl;
		
		cout<<"1. Modelo: "<<modelo<<endl;
		cout<<"2. Color: "<<color<<endl;
		cout<<"3. Matricula: "<<matricula<<endl;
		cout<<"4. Numero de puertas: "<<Npuertas<<endl;
		cout<<"5. Numero de pasajeros: "<<Npasajeros<<endl;
		cout<<"6. Aire acondicionado (si o no): "<<AireA<<endl<<endl;
		
		cout<<"Eliga la opcion a modificar: ";
		cin>>op1;cout<<endl;
		
		switch (op1){
			case 1:
			cout<<"Ingrese el nuevo modelo: ";
			cin>>modelo;cout<<endl;
			carro.setModelo(modelo);
			cout<<"el nuevo modelo es: "<<carro.getModelo()<<endl;
			break;
			case 2:
				cout<<"Ingrese el nuevo color: ";
				cin>>color;cout<<endl;
				carro.setcolor(color);
				cout<<"El nuevo color es: "<<carro.getcolor()<<endl;
			break;
			case 3:
				cout<<"Ingrese el nuevo numero de matricula: ";
				cin>>matricula;cout<<endl;
				carro.setmatricula(matricula);
				cout<<"El nuevo numero de matricula es: "<<carro.getmatricula()<<endl;
			break;
			case 4:
				cout<<"Ingrese el nuevo numero de  puertas: ";
				cin>>Npuertas;cout<<endl;
				carro.setNpuertas(Npuertas);
				cout<<"el nuevo numero de purtas es: "<<carro.getNpuertas()<<endl;
			break;
			case 5:
				cout<<"Ingrese el nuevo  numero de pasajeros: ";
				cin>>Npasajeros;cout<<endl;
				carro.setNpasajeros(Npasajeros);
				cout<<"El nuevo numero de pasajeros: "<<carro.getNpasajeros()<<endl;
			break;
			case 6:
				cout<<"Ingrese si su carro posee aire acondicionado: ";
				cin>>AireA;cout<<endl;
				carro.setAireA(AireA);
				cout<<"ha ingresado: "<<carro.getAireA()<<endl;
			break;
			default:
			cout<<"Numero no existente."<<endl;
			break;
			
			cout<<"Los datos a guardar son: "<<endl<<endl;
			cout<<"Modelo: "<<carro.getModelo()<<endl;
			cout<<"Color: "<<carro.getcolor()<<endl;
			cout<<"Matricula: "<<carro.getmatricula()<<endl;
			cout<<"Numero de puertas: "<<carro.getNpuertas()<<endl;	
			cout<<"Numero de pasajeros: "<<carro.getNpasajeros()<<endl; 
			cout<<"Aire acondicionado: "<<carro.getAireA()<<endl;	
		}
	}
	else
	{
		cout<<"Los datos a guardar son:"<<endl<<endl;
		cout<<"Modelo: "<<modelo<<endl;
		cout<<"Color: "<<color<<endl;
		cout<<"Matricula: "<<matricula<<endl;
		cout<<"Numero de puertas: "<<Npuertas<<endl;	
		cout<<"Numero de pasajeros: "<<Npasajeros<<endl; 
		cout<<"Aire acondicionado: "<<AireA<<endl;	
	
	}
	return 0;
}
