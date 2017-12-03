#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<cstring>
using namespace std;
int aTitulo(char c1[]);
int CuentaPalabras(char c1[]);
int palindromo(char palabra[],int i,int f);
//int concatena(char c1[]);
int main()
{ 
	
	char c1[200];
	char c3[200];
	cout<<"INTRODUCE UNA FRASE: ";
	cin.getline(c1,200,'\n');
	 cout<<"CONVERSION A TITULO: ";
    aTitulo(c1);
    cout<<endl;
    cout<<"  TOTAL DE PALABRAS: ";
    cout<<CuentaPalabras(c1);
    cout<<endl;
    	
	return 0;
}

int aTitulo(char cad[])
{
	int desp=32;
	for(int i=0;cad[i];i++)
	{
		if(cad[i]>='a' && cad[i]<='z')
		{
			if(i==0)
				cad[i]-=desp;
	    }
		else
		{
			if(cad[i]==desp && cad[i+1]!=32)
				cad[i+1]-=desp;
		}
	}
	cout<<cad;
}
int CuentaPalabras(char cad[])
{
	int palabras=1;
	int desp=32;
	for(int i=0;cad[i];i++)
	{
		if(cad[i]==desp && cad[i+1]!=32)
			palabras++;
	}
	return palabras;
}
