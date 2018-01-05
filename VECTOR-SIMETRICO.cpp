#include<iostream>
#include<stdlib.h>

int simetrico(int vec[],int ini, int fin);
using namespace std;
int main()
{
	int x,pos=1,sim=0,n=0,ini=0;
	cout<<"ingresa el tamano del vector: ";
	cin>>n;
	int vec[n];
	for(x=0;x<n;x++)
	{
		cout<<"ingresa numero en la posicion ["<<pos++<<"]: ";
		cin>>vec[x];
	}
//	simetrico(vec,0,0);
	if(simetrico(vec,0,0)==0)
	{
		cout<<"NO ES SIMETRICO";
	}
	else if(simetrico(vec,0,0)==1) 
		cout<<"ES SIMETRICO";
		
return 0;
}

int simetrico(int vec[],int ini,int fin)
{
	if (ini<fin)
	{
		if(vec[ini]==' ')
			return simetrico(vec,++ini,fin);
		if(vec[fin]==' ')
			return simetrico(vec,ini,--fin);
		if (vec[ini]!=vec[fin])
			return 0;
		else
		{
			ini++;
			fin--;
			return simetrico(vec,ini,fin);
		}
	}
	else
		return 1;
}

	
