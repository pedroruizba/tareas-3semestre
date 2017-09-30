#include <iostream>
#include <stdlib.h>

using namespace std;

int llenarPrimos(bool primos[],int x);
int eliminarmult(bool priomos[],int x);
int mostar(bool primos[],int x);
int main(int argc, char** argv)
{
	int x,i;
  	bool primos[1000];
  	
  	mostar(primos,1000);
  	return 0;  	 
}
int llenarPrimos(bool p[],int x)
{ 
	int i;
	for(i=0;i<x;i++)
	{
		p[i]=true;
	}
}
int eliminarmult(bool p[],int x)
{
	for(int i=2;i<x;i++)
	{
		if(p[i])
		{
			for(int j=2;i*j<x;j++)
			{
				p[i*j]=false;
			}
		}
	}
}
int mostrar(bool primos [],int x)
{
	for(int i=1;i<x;i++)
	{
		if(primos[i]==1)
		{
			cout<<i<<endl;
		}
	}
}
