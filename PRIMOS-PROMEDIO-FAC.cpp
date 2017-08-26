#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int opc,salir=0;
     cout<<"ELIJA UNA OPCION: "<<endl;
     cout<<"OPCION 1: Numeros Primos"<<endl;
     cout<<"OPCION 2: Factorial"<<endl;
     cout<<"OPCION 3: Promedio"<<endl; 
     cin>>opc;
         
          switch(opc)
          {
          case 1: cout<<"SELECCIONASTE LA OPCION 1: Determinar si un numero es primo, o no."<<endl;
                  int x,i,indicador;
                  cout<<"INGRESA UN NUMERO: ";
                  cin>>x;
                  indicador=0; //inicializar en cero
                   for(i=2;i<x;i++) //i=2, porque es el primer primo
                  {
                	if(x%i==0)
               	   {
              		indicador=1;    //Comprobar que fue dividido con exactitud, pero en algun momento se dividira por algun numero entre 2
				   }
			      }
			       if(indicador==0)
			      {
			    	cout<<x<<" ES PRIMO";
			      }
    		      else 
			      {
    		    	cout<<x<<" NO ES PRIMO";
			      }
             break;
          
          case 2: cout<<"SELECCIONASTE LA OPCION 2"<<endl;
          	      int a,n;
          	      double fac;
          	      cout<<"INGRESA UN VALOR PARA OBTENER SU FACTORIAL: ";
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
			     }
					   }
			     cout<<fac;
                 break;
          
          case 3: cout<<"SELECCIONASTE LA OPCION 3"<<endl;
		   		  int calf,promedio,indicadorr,s,cont;  
		          cout<<"INGRESA CALIFICACIONES: ";
				  cin>>calf;
				  
				  s=0;
				  calf=0;
				  while(calf!=-1)
				  {
				    s+=calf;
					cont++;	
				  }   
				  s++;
				  if(calf<=0)
				  {
				  
				  cont--;
			      } 
			      cout<<s;
          break;
          
          default: 
          cout<<"¡OPCION NO VALIDA!";
         }    
         
         
	    
	return 0;
}
