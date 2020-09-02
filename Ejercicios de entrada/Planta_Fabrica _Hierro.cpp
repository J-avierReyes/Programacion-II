#include <iostream>

/* 2. Una planta que fabrica piezas de hierro posee un gran lote de las mismas. Diseñar un programa 
   que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de 
   cada una; Tenga en cuenta que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 
   son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote. (Paso por punteros).

*/

 using namespace std;
 
 void Cantidad_piezas (float *pA,int Npiezas,int &piezas_Aptas);
 void evaluar (float *pA,int Npiezas);
 	
int main(int argc, char** argv) {
	
	int Npiezas,piezas_Aptas;
	
	cout<<"Ingresa el N de piezas a procesar: ";
	cin>>Npiezas;
	cout<<endl;
	
	float A[Npiezas];
	float *pA=&A[0];
	
	Cantidad_piezas (&A[0],Npiezas,piezas_Aptas);
	cout<<"Numero de piezas aptas: "<<piezas_Aptas<<endl<<endl;
	
	evaluar (&A[0],Npiezas);
	 
	 
	return 0;
}
  void Cantidad_piezas (float *pA,int Npiezas,int &piezas_Aptas)
  	{
  	
  		int contador=0;
  	
		for (int i=0;i<Npiezas;i++)
		{
			cout<<"Ingresa la longitud en metros de la pieza "<<i+1<<": ";
			cin>>pA[i];               
		}  
	
		for (int i=0;i<Npiezas;i++)
		{
			if (pA[i]>1.20 && pA[i]<1.30)
			{
			contador++;	
			}
			piezas_Aptas=contador;
		} 
		cout<<endl;	
	} 

  void evaluar (float *pA,int Npiezas)
	{
  		for (int i=0;i<Npiezas;i++)
		{
			if (pA[i]>1.20 && pA[i]<1.30)
			{
			cout<<"Pieza "<<i+1<<" apta. "<<endl;
			}
			else
			{
			cout<<"Pieza "<<i+1<<" no apta. "<<endl;		
			}
		}
	}
