#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
    float origencm,origenmt,destinomt,destinocm,restamt,restacm;
  
      cout<<"INGRESA PUNTO ORIGEN (mt): ";
      cin>>origenmt; 
      cout<<"INGRESA PUNTO ORIGEN (cm): ";
      cin>>origencm;
	  
	  cout<<"INGRESA PUNTO DESTINO (mt): ";
      cin>>destinomt; 
      cout<<"INGRESA PUNTO DESTINO (cm): ";
      cin>>destinocm;
      restamt=origenmt-destinomt;
	  restacm=origencm-destinocm;
	  
	  	if(restacm<0)
	{
		 restamt-=1;
		 restacm=origencm-destinocm;
	   	 restacm=abs(restacm);
		 restacm-=100;	
	}
		 if(restamt<0)
	{
		 restamt=0;	
	}
    	 if(origenmt==0)
	{
		 restamt=origenmt+destinomt;
	}
		
	     if(origencm==0){
		 restacm=origencm+destinocm;	
	}
	restacm=abs(restacm);
	cout<<"METROS RECORRIDOS: "<<restamt<<"Mt"<<endl<<"CENTIMETROS RECORRIDOS: "<<restacm<<"Cm"<<endl;

    system("pause");
	return 0;
}
