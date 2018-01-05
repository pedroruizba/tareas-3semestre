#include <iostream>
#include <stdlib.h>
using namespace std;

void llenarPar(int v[],int t);
void mostrar(int v[],int t);
void llenarInv(int v[],int t);
void girarAriba(int v[],int t);
void girarAbajo(int v[],int t);
void invertir(int v[],int t);
void correr();
int main(int argc, char** argv)
{
   int vec[10];
   llenarPar(vec,10);
   
   mostrar(vec,10);
   cout<<" ahora invertido "<<endl;
   llenarInv(vec,10);
   
   cout<<" GIRAR ARRIBA "<<endl;
   girarAriba(vec,10);
   mostrar(vec,10);
   
   cout<<" INVERTIDO "<<endl;
   invertir(vec,10);
   mostrar(vec,10);
   cout<<" ABAJO "<<endl;
   girarAbajo(vec,10);
   mostrar(vec,10);
   return 0;  
}
void llenarPar(int v[],int t)
{ 
	int valor=2;
    for(int i=0;i<t;i++)
    {
      	v[i]=valor;
      	valor+=2;
	}
      
}
void mostrar(int v[],int t)
{
	
	for(int i=0;i<t;i++)
		cout<<v[i]<<"  ";
} 
void llenarInv(int v[],int t)
{
	for(int i=t-1;i>=0;i--)
		cout<<v[i]<<"  ";
} 
void girarAriba(int v[],int t)
{
	int ax;
	ax=v[0];
	for(int i=0;i<t-1;i++)
	{
		v[i]=v[i+1];
	}
	v[t-1]=ax; 
}
void invertir(int v[],int t)
{
	int k,i,ax;
	for(i=0,k=t-1;i<t/2;i++,k--)
	{
		ax=v[i];
		v[i]=v[k];
		v[k]=ax;
	}
	
}
void girarAbajo(int v[],int t)
{
	int ax;
	ax=v[9];
	for(int i=t-1;i<t-1;i++)
	{
		v[i]=v[i-1];
	}
	v[t-1]=ax; 
}
void correr()
{
	 gen=rand()%3+1;
	 cout<<gen;
	 
}
