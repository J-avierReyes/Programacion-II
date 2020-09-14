#include <iostream>

 using namespace std;

/* PUNTO 1 TALLER, Realizar una clase que permita obtener el perímetro y área de un rectángulo.*/

 class Operacion{
 	
 	private:   // atributos
 		
 		int altura;
 		int base;
 		
 	public:    // metodos
 		
 		Operacion(int _altura, int _base);  // creo el contructor
 		void Mostrar_Perimetro();         
 		void Mostrar_Area();     	
 };

Operacion::Operacion(int _altura,int _base){

	altura=_altura;
	base=_base;	
}
	
	void Operacion::Mostrar_Perimetro(){
		cout<<"El perimetro del rectangulo es: "<<2*(altura+base)<<endl;
	}
		
	void Operacion::Mostrar_Area(){
		cout<<"El area del rectangulo es: "<<base*altura<<endl;
	}
 	
int main(int argc, char** argv) {
	
	float  h,b;
	
	cout<<"Ingresa la altura del rectangulo: "<<endl;
	cin>>h; cout<<endl;
	cout<<"Ingresa la base del rectangulo: "<<endl;
	cin>>b; cout<<endl;
	
	Operacion perimetro= Operacion(h,b);
	perimetro.Mostrar_Perimetro();
	Operacion area=Operacion(h,b);
	area.Mostrar_Area();
	
	return 0;
}
