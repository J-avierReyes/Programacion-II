#include <iostream>

/* 1. Diseñar un programa que permita el ingreso de 4 números de hasta 3 cifras máximo, que muestre 
      el promedio de los datos e indique el número de digitos que tiene cada uno de ellos. En este 
	  caso el número que no cumpla con la condición deberá mostrarse una alerta de error y pedirse 
	  de nuevo por pantalla,(Paso por referencia). 
	
	[Tres_Numeros_Otimizado] 
	
 */
 using namespace std;
 
  void Programa (int Num,int &N_De_Digitos); // Lo puedo poner de forma generar y luego ser cambiado por mi parametro de entrada.
  void Promedio (float Suma,float &promediar);
  void cifras   (int Num,int &NuevoNum);
 
int main(int argc, char** argv) {
	
	int Num1,Num2,Num3,Num4,N_De_Digitos,NuevoNum;
	float promediar,Suma;
	
	cout<<"Ingresa el primer numero:  ";
	cin>>Num1;
	cifras (Num1,NuevoNum);
	Num1=NuevoNum;    
	 
	cout<<"Ingresa el segundo numero: ";
	cin>>Num2;
	cifras (Num2,NuevoNum);
	Num2=NuevoNum;    
	
	cout<<"Ingresa el tercer numero:  ";
	cin>>Num3;
	cifras (Num3,NuevoNum);
	Num3=NuevoNum;    
	
	cout<<"Ingresa el cuarto numero:  ";
	cin>>Num4;
	cifras (Num4,NuevoNum);
	Num4=NuevoNum; 
	cout<<endl;   
	
	Suma=Num1+Num2+Num3+Num4;
	Promedio (Suma,promediar);
	cout<<"Promedio: "<<promediar<<endl<<endl;
	
	Programa (Num1,N_De_Digitos);
	cout<<"N digitos para el primer numero:  "<<N_De_Digitos<<endl;
	Programa (Num2,N_De_Digitos);
	cout<<"N digitos para el segundo numero: "<<N_De_Digitos<<endl;
	Programa (Num3,N_De_Digitos);
	cout<<"N digitos para el tercer numero:  "<<N_De_Digitos<<endl;
	Programa (Num4,N_De_Digitos);
	cout<<"N digitos para el cuarto numero:  "<<N_De_Digitos<<endl;
	return 0;
}
  
  void Programa (int Num,int & N_De_Digitos)
	{
  		int Aux=1;
		while (Num>=10 )
			{
				Num=Num/10;
				Aux++;	        // La variableAux va a ir contando la divisiones entre 10 o sea el numero incial va a ir corriendo una coma hacia la izquierda hasta llegar a una cifra.
			}	
		N_De_Digitos=Aux;	
	}
  
  void Promedio (float Suma,float &promediar)
	{
  		promediar=Suma/4;
	}
  
  void cifras(int Num,int &NuevoNum)
	{
		int contador=1,x;
		x=Num;
		
		while (x>=10 )
			{
				x=x/10;
				contador++;	    
			} 
		
			if (contador>3 )
			
				{
					cout<<endl;
					cout<<"----------ERROR-----------"<<endl<<endl;
					cout<<"Por favor ingrese nuevamente el numero, Max 3 cifras."<<endl<<endl;
					cin>>NuevoNum;
					cout<<endl;	
				}	
			else
				{
					NuevoNum=Num;
				}	
	}
