#include <iostream>

// PUNTO 2 DEL TALLER 

 /*	Crear una clase llamada Serie que tenga los atributos título, numero de temporadas, estado
	(entregado o no), genero, fecha y año. La información debe mostrarse completa en forma
	de tabla y debe tener sobrecarga de constructores.                                           */
 
 using namespace std; 

 class Serie{ 
 	
 	private:     
 		
 		string titulo;
 		int numeroDtemporadas;
 		string estado;                   
 		string genero;
 		int fecha;
 		int anio; 
 		
 	public:
		
		Serie(string _titulo, int _numeroDtemporadas);          //     (A)
		Serie(string _estado, string _genero);                  //     (B)
		Serie(int _fecha, int _anio);                           //     (C)
 		void mostrarSerieA();
 		void mostrarSerieB();
 		void mostrarSerieC();		
 };
	Serie::Serie(string _titulo, int _numeroDtemporadas){                
		
		titulo=_titulo;                                       
		numeroDtemporadas=_numeroDtemporadas;
	}
	Serie::Serie(string _estado, string _genero){
		
		estado=_estado;                                    
		genero=_genero;
	}
	Serie::Serie(int _fecha, int _anio){
		
		fecha=_fecha;                                  
		anio=_anio;
	}
	void Serie::mostrarSerieA(){
		cout<<"Nombre de la serie: "<<titulo<<endl;
		cout<<"Numero temporadas: "<<numeroDtemporadas<<endl;
	}
	void Serie::mostrarSerieB(){	
		cout<<"Estado:"<<estado<<endl;
		cout<<"Genero:"<<genero<<endl;
	}
	void Serie::mostrarSerieC(){
		cout<<"fecha: "<<fecha<<endl;
		cout<<"Anio: "<<anio<<endl;		
	}

int main(int argc, char** argv) {
	
	string a,i;
	int e,d,k,q;
	
	cout<<"Ingresa el nombre de la serie: "<<endl<<endl;
	cin>>a; cout<<endl;
	cout<<"Ingrese el numero de  temporadas: ";
	cin>>q; cout<<endl;
	
	Serie A= Serie(a,q);
	
	cout<<"Desea adquirir la serie o regresarla"<<endl<<endl; 
	cout<<" 1. Adquirir 2. regresarla: ";
	cin>>e; cout<<endl;
	cout<<"Ingrese el genero de la serie: ";
	cin>>i;
	cout<<"Ingrese el numero del dia de hoy: ";
	cin>>d;
	cout<<"Ingrese el anio: ";
	cin>>k;cout<<endl<<endl;;
	
	Serie C=Serie(d,k);
	A.mostrarSerieA();       
	
	if(e==1)
	{
		Serie B= Serie("Disponible",i);
		B.mostrarSerieB();
	}
	
	if(e==2)
	{
		Serie B= Serie("entregado",i);
		B.mostrarSerieB();
	}
	
	C.mostrarSerieC();
	
	return 0;
}
