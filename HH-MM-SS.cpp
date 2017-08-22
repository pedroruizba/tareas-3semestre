#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
    
   int hre,mine,Sege,hrs,mins,Segs,rHRS,rMIN,rseg;
   
       cout<<"----ESCRIBIR EN FORMATO DE 24HRS---- "<<endl;
	  cout<<"HORA DE ENTRADA: ";
      cin>>hre; 
      cout<<"MINUTOS DE ENTRADA: ";
      cin>>mine;
      cout<<"SEGUNDOS DE ENTRADA: ";
      cin>>Sege;
	  
	  cout<<"HORA DE SALIDA: ";
      cin>>hrs; 
      cout<<"MINUTOS DE SALIDA: ";
      cin>>mins;
      cout<<"SEGUNDOS DE SALIDA: ";
      cin>>Segs;
	
	rHRS=hre-hrs;
	rMIN=mine-mins;
	rseg=Sege-Segs;
	
	if(rMIN>=60)
	{
	rHRS=abs(rHRS);
	rHRS+=1;
	rMIN=abs(rMIN);
	rMIN-=60;	
	}
	if(rseg>=60)
	{
	rMIN=abs(rMIN);
	rMIN+=1;
	rseg=abs(rseg);
	rseg-=60;	
	}
	
	rHRS=abs(rHRS);
	rHRS=abs(rMIN);
	rseg=abs(rseg);
	
      
    
	
	cout<<endl<<"USTED TRABAJO: "<<rHRS<<" HRS"<<" CON: "<<rHRS<<" MINUTOS"<<" Y: "<<rseg<<" SEGUNDOS"<<endl;

    system("pause");
	return 0;
}
