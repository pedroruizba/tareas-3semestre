#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  float sueldo;
cout<<"Ingresa tu sueldo actual: $ ";
cin>>sueldo;

if(sueldo>=0&&sueldo<=1000)
      {
           sueldo=sueldo+(sueldo*.18);
        }
else
        {
           if(sueldo>=1001&&sueldo<=1100)
           {
              sueldo=sueldo+(sueldo*.15);
           }
           else
              {
                    if(sueldo>=1201&&sueldo<=1300)
                      {
                       sueldo=sueldo+(sueldo*.10);
                      }
                     else
                    {
                         if(sueldo>1300)
                         {
                            sueldo=sueldo+(sueldo*.8);
                         }
                    }
                }
        }
                   

cout<<"\nTu nuevo sueldo es : "<<sueldo<<endl;
  system("PAUSE");	
  return 0;
}
