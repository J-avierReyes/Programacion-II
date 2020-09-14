#include <iostream>
#include <stdlib.h>

using namespace std;

/*	Un Empresario desea guardar la información de sus electrodomésticos de una manera fácil
	y rápida. Le pide a usted que diseñe un programa que le permita almacenar determinada
	información de sus productos como tienda, vendedor, precio, color, peso, altura, ancho y
	consumo energético. En cuanto al almacenamiento, éste se podrá realizar de diferentes
	maneras:
	• Solo tienda, vendedor, precio, color, altura y ancho.
	• Solo tienda, vendedor, precio, consumo energético. /////////////////////////////////////////////////////SE ESCOGIO ESTE
	• Todos los datos completos.
	• Solo tienda, vendedor y precio.
	Por otro lado, él también desea modificar y obtener dicha información de manera individual.*/

class Producto{
	
	private:
		
		float precio, consumo;
		string producto, tienda, vendedor, nombreProducto;
		
	public:
		
		Producto(string _tienda, string vendedor,string nombreProducto, float _precio, float _consumo); 
		void mostrarPro();
	
		//nombre producto
		string getnombreProducto();
		//tienda
		void settienda(string _tienda);
		string gettienda();
		//vendedor
		void setvendedor(string _vendedor);
		string getvendedor();	
		//precio
		void setprecio(float _tienda);
		float getprecio();
		//consumo
		void setconsumo(float _tienda);
		float getconsumo();		
};

Producto::Producto(string _tienda,string _vendedor,string _nombreProducto, float _precio, float _consumo){ //constructor
	tienda= _tienda;
	vendedor=_vendedor;
	precio=_precio;
	consumo=_consumo;
	nombreProducto=_nombreProducto;
}

void Producto::mostrarPro(){
	cout<<endl<<nombreProducto<<endl<<"Precio: $"<<precio<<endl<<"Consumo: "<<consumo<<"Wh"<<endl<<"Disponible en "<<tienda<<"(Vendedor: "<<vendedor<<")"<<endl;
}
	//nombre producto
	string Producto::getnombreProducto(){
	return nombreProducto;
}
	//tienda
	void Producto::settienda(string _tienda){
	tienda= _tienda;
}
	string Producto::gettienda(){
	return tienda;
}
	//vendedor
	void Producto::setvendedor(string _vendedor){
	vendedor=_vendedor;
}
	string Producto::getvendedor(){
	return vendedor;
}
	//precio
	void Producto::setprecio(float _precio){
	precio=_precio;
}
	float Producto::getprecio(){
	return precio;
}
//consumo
	void Producto::setconsumo(float _consumo){
	consumo=_consumo;
}
	float Producto::getconsumo(){
	return consumo;
}


int main(int argc, char** argv) {
	
	int op1,op2,op3;
	string decisionl;
	float decisionn;
	
	//Se supone que ya hay algunos productos registrados
	Producto p1=Producto("Constructores av-12","Jenny Melo","Sierra Mecanica GLP240",278999.9,200);
	Producto p2=Producto("La Quebradita","Pablito Romito","Licuadora Hacev",120000.9,5000);
	cout<<"Productos:"<<endl;
	p1.mostrarPro();
	p2.mostrarPro();
	
	cout<<"Desea modificar algun Producto?"<<endl<<"1. Si"<<endl<<"2. No"<<endl;
	cin>>op1;
	switch(op1)
	{
		case 1:
			cout<<"Que objeto desea modificar?"<<endl<<"	1. "<<p1.getnombreProducto()<<endl<<"	   2. "<<p2.getnombreProducto()<<endl; 
			cin>>op2;
			switch(op2)
			{
				case 1:
					cout<<p1.getnombreProducto()<<endl<<"1. Vendedor"<<endl<<"2. Tienda"<<endl<<"3. Precio "<<endl<<"4. Consumo"<<endl;
					cin>>op3;
					switch(op3)
					{
						case 1:
							cin>>decisionl;
							p1.setvendedor(decisionl);
						break;
						case 2:
							cin>>decisionl;
							p1.settienda(decisionl);
						break;
						case 3:
							cin>>decisionn;
							p1.setprecio(decisionn);
						break ;
						case 4:
							cin>>decisionn;
							p1.setconsumo(decisionn);
						break;

					
						break;
						default:
							cout<<"Numero incorrecto"<<endl;	
						break;	
					}
				
				break;
				case 2:
					cout<<p2.getnombreProducto()<<endl<<"1. Vendedor"<<endl<<"2. Tienda"<<endl<<"3. Precio "<<endl<<"4. Consumo"<<endl;
					cin>>op3;
					switch(op3)
					{
						case 1:
							cin>>decisionl;
							p2.setvendedor(decisionl);
						break;
						case 2:
							cin>>decisionl;
							p2.settienda(decisionl);
						break;
						case 3:
							cin>>decisionn;
							p2.setprecio(decisionn);
						break ;
						case 4:
							cin>>decisionn;
							p2.setconsumo(decisionn);
						break ;
						default:
						cout<<"Numero incorrecto"<<endl;	
						break;	
					}	
				break;
				default:
				cout<<"Numero incorrecto"<<endl;
				break;
			}
		system("cls");
		p1.mostrarPro();
		p2.mostrarPro();	
	}
}
