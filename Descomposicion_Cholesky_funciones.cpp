#include <iostream>
#include <math.h>

/* Descomposicion_Cholesky_funciones */

using namespace std; 
 
void pedir_Numeros (float *pA, int nf, int nc);
void revisar_si_es_simetrica (float *pA, int nf, int nc,int &respuesta);
void descomposicion (float *pA,float *pL, int nf,int nc);                  
void transpuesta (float *pL,float *pT, int nf,int nc);
void multiplicacion (float *pL,float *pT,float *pM, int nf,int nc);
void imprimir (float *pA, int nf, int nc); 
 
int main(int argc, char** argv) 
{
	int nf,nc,respuesta;
	cout<<"Ingresa el numero de filas de la matriz A "<<endl;
	cin>>nf;
	cout<<"Ingresa el numero de columnas de la matriz A "<<endl;
	cin>>nc;
	cout<<endl;
		
	float A[nf][nc]; 
	float L[nf][nc];
	float T[nf][nc];
	float M[nf][nc];
	
	float *pA=&A[0][0];
	float *pL=&L[0][0];
	float *pT=&T[0][0];
	float *pM=&T[0][0];
    
	pedir_Numeros (&A[0][0],nf,nc);
	cout<<endl;  
	imprimir (&A[0][0],nf,nc);       
	cout<<endl;
	revisar_si_es_simetrica (&A[0][0],nf,nc,respuesta); 
 	if(respuesta==1)
	{
 		cout<<"La matriz ingresada es simetrica."<<endl<<endl;
 		descomposicion (&A[0][0],&L[0][0],nf,nc);	 
 		cout<<"Matriz L"<<endl<<endl;
		imprimir (&L[0][0],nf,nc);
		cout<<endl;
 		transpuesta (&L[0][0],&T[0][0],nf,nc);
 		cout<<"Matriz L* "<<endl<<endl;
 		imprimir (&T[0][0],nf,nc);   
		cout<<endl;
		multiplicacion (&L[0][0],&T[0][0],&M[0][0],nf,nc);
		cout<<"Multiplicacion A=LxL* "<<endl<<endl;
		imprimir (&M[0][0],nf,nc);
	}
	else
	{
		cout<<"No se puede factorizar la matriz"<<endl;
	}
	return 0;
}
void pedir_Numeros (float *pA, int nf, int nc)
{
 	for(int i=0; i<nf;i++)
	{
		for (int j=0;j<nc;j++)	
		{
		    cout<<"Por favor ingresa el cofactor ["<<i+1<<"] ["<<j+1<<"]: ";	 
			cin>>pA[i*nc+j];	
		}
	}	
}
void imprimir (float *pA, int nf, int nc)
{
 	for(int i=0; i<nf;i++)
	{
		for (int j=0;j<nc;j++)
		{
			cout<<pA[i*nc+j]<<" ";	
		}
		cout<<endl;
	}	
}
void revisar_si_es_simetrica (float *pA, int nf, int nc,int &respuesta)
 {
   int z,contador;
   float B[0][0];
   float *pB=&B[0][0];  
   
	if (nf==nc)
	{
		z=(nf*nc)-nf;
		contador=0;
			
		for(int i=0; i<nf;i++)
		{
			for (int j=0;j<nc;j++)
			{
				if(i!=j)
				{
				    if(pA[i*nc+j]==pA[j*nc+i])
					{
				    	contador++;	
					}	
				}
			}	
		}
 		if (z==contador)
 		{
 			respuesta=1;
		}
		else
		{
			respuesta=0;
		}
	}	
}
void descomposicion (float *pA,float *pL, int nf,int nc)
{
	double sum1=0,sum2=0;
	for(int i=0; i<nf;i++)
	{
		for (int j=0;j<nc;j++)
		{
			if (i>=j)
			{
				if(i==j)
				{
					int z=j-1;
					if (z<0)
					{
					    pL[i*nc+j] =sqrt(pA[i*nc+i]);	
					}
					else  
					{
						for(int k=0;k<=z;k++) 
						{
							sum1+=pow(pL[i*nc+k],2);
						}	
						pL[i*nc+j] =sqrt(pA[i*nc+i] -sum1);
						sum1=0;
					}	
				}
				else
				{
					int z=j-1;
					if(z<0)
					{
						pL[i*nc+j] = pA[i*nc+j] /pL[j*nc+j];   
					} 
					else
					{
						for(int k=0;k<=z;k++) 
						{
							sum2+=pL[i*nc+k] *pL[j*nc+k] ;	
						}
						pL[i*nc+j]=( pA[i*nc+j] -sum2)/pL[j*nc+j];
						sum2=0;	
					}
				}	
			}
			else
	    	{
	    		pL[i*nc+j]=0;		
	    	}
		}
	}	
}
void transpuesta (float *pL,float *pT, int nf,int nc)
{
	for(int i=0; i<nf;i++)
	{
		for (int j=0;j<nc;j++)
		{
			pT[j*nc+i]=pL[i*nc+j];    	                                               
		}	 
	}	
}
void multiplicacion (float *pL,float *pT,float *pM, int nf,int nc)
{
	for(int i=0; i<nf;i++)
	{
		for (int j=0;j<nc;j++)
		{
			for (int k=0;k<nc;k++)
			{	
				pM[i*nc+j]= pM[i*nc+j]+pL[i*nc+k]*pT[k*nc+j]; // C[i][j] =C[i][j]+ A[i][z] * B[z][j]; 
			}
		}
	}
}
