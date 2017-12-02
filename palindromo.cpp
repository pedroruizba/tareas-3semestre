#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int func(int num);
int fibonacci(int num2);
int palindromo(char palabra[],int i,int f);
int main()
{
	int num,num2;
	char palabra[100];
	
	cout<<"DAME UN NUMERO: ";
	cin>>num;
	cout<<"RESULTADO: "<<func(num)<<endl;
	
	cout<<"DAME OTRO NUMERO: ";
	cin>>num2;
	cout<<"RESULTADO FIBONACCI: "<<fibonacci(num2)<<endl;
	
	cout<<"INGRESA  FRASE: ";
	cin.getline(palabra,100,'\n');
	if(palindromo(palabra,0,strlen(palabra)-1)==1)
	{
		cout<<"SI ES PALINDROMO";
	}
	else
	{
		cout<<"NO ES PALINDROMO";
	}
	return 0;
}

int palindromo(char palabra[],int i,int f)
{
	if(i<f)
	{
		if(palabra[i==' '])
		{
			return palindromo(palabra,++i,f);
		}
			
		
	else
	{
			return palindromo(palabra,i,--f);
	}  
		if(palabra[i]!=palabra[f])
		{
			return 0;
		}
		else 
		{
			return palindromo(palabra,++i,--f);
		}
		
	}
	else 
	return 1;
}


int func(int num)
{
	 if(num>1)
	{
		return num*num*(num-1);
	}
	else
	if(num==1)
	{
		return 1;
    }
		

}
int fibonacci(int num)
{
	if(num>2)
	{
		return (num-1)+(num-2);
	}
	else
	if(num==2)
	{
		return 1;	
	}
	else
	return 0;
}

