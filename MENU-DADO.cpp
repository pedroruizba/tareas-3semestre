#include<iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;

int menu();
int dado();
int histograma(int tam);
int main()
{
	srand(time(NULL));
	double val;
	int opc;
	int suma=0;
	int cara[6]={0};
    int lado;	
	do
	{
	opc=menu();
		
		
		switch(opc)
		{
		 case 1:
  		 	for(int i=1;i<=100;i++)
   			{
   				 lado=dado();
		 		cara[lado-1]++;
  			}
			for(int a=1;a<=6;a++)
			{	
				cout<<"CARA "<<a;
				cout<<histograma(cara[a-1])<<endl;
			}
		break;	
		case 2:
    		for(int i=1;i<=100;i++)
   			{
   	 			lado=dado()+dado();
	 			cara[lado-1]++;
   			}
			for(int a=1;a<=6;a++)
			{
				suma+=cara[a-1];
			}
		    cout<<histograma(suma)<<endl;
		break;
		}
	
	}
	while(opc !=0);
	return 0;
}	

int menu()
{
		int opc;
		cout<<endl;
        cout<<"1---> 1 VEZ \n";
		cout<<"2---> 2 VECES \n";
		cout<<"0---> Salir \n";
        cout<<"Coloca un el numero de la opcion: ";
        cin>>opc;
		return opc;
}

int dado()
{
	 
     int lado;
	 lado=rand()%6+1;
	 return lado;
    
}

int histograma(int tam)
{
	for(int j=1;j<=tam;j++)
	cout<<"*";
}
