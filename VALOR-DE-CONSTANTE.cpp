#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	double  e;
	int opc,Salir=0;
	do{
	
    
     cout<<"OPCION 1: valor de e^x"<<endl;
     cout<<"OPCION 2: valor de la constante"<<endl;
     cout<<"3) SALIR"<<endl;
     cout<<"ELIJA UNA OPCION: ";  
     cin>>opc;
         
        switch(opc)
          {
          case 1: cout<<"SELECCIONASTE LA OPCION 1: Determinar valor de e^x"<<endl;
                  int x,i;
                  cout<<"INGRESA UN NUMERO: ";
                  cin>>x;
                  cout<<"e^"<<x<<" = "<<exp(x)<<endl;
              
             break;
          
          case 2: cout<<"SELECCIONASTE LA OPCION 2: valor de la constante"<<endl;
          	      int a,n;
          	      double fac,aprox;
          	      cout<<"INGRESA UN VALOR PARA OBTENER OBTENER SU APROXIMACION: ";
          	      cin>>a;
          	      fac=1;
          	      if(a<0) 
					fac =0;
                  else 
				     if(a==0) 
				     fac=1;
  					 else
					   {
          	      for(n=1;n<=a;n++)
			     {
			  		fac*=n;
			  		aprox+=a/fac;
			     }
					   }
			    cout<<aprox<<endl;
                break;
                case 3:
 				Salir = 1; 
                break;
                default: 
                cout<<"***Esta opcion no existe***"<<endl; 
 				break;
 				
        }
   }
           while (Salir == 0); 

	
	
	
	
	

	//return 0;
}
