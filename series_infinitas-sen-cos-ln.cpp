#include<iostream>
#include<math.h>
using namespace std;
void menu();
double cos(double a);
double ser(double b);
double sen(double c);
double fac(double d); 
int main()
{
	double val;
	int opc;	
	do
	{
		menu();
		cin>>opc;
		
		switch(opc)
		{
			case 1:
				cout<<"coloca un valor: ";
                cin>>val;
				cout<<cos(val);
				
			break;

		}
	
	}while(opc !=0);
	return 0;
}	

void menu()
{

cout<<"1---> Coseno \n";
		cout<<"2---> Serie Infinita \n";
		cout<<"3---> Ceno \n";
		cout<<"0---> Salir \n";
cout<<"Coloca un el numero de la opcion: ";
		
}

double cos(double a)
{
	double res=1;
	int sign=-1;
	double g=2;

	for(int lim=1;lim<=a;lim++)
{
	res+=(pow(a,g)/fac(g))*sign;
	g+=2;
	sign*=-1;
	}
	return res;
}

double fac(double d)
{
	double fact=1;
	for(int n=1;n<=d;n++)
	{
		fact*=n;
}
	return fact;
}
