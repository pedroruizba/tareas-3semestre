#include<iostream>
using namespace std;
void menu();
void derecha(int &hori);
void izquierda(int &hori);
void caminar(int mat[][20],int esp,int &r, int &c,int pluma,int hori);
void mostrar(int mat[][20],int r,int c);

int main()
{
	int mat[20][20]={{0}};
	int opc;
	int pluma;
	int horz=1;
	int r=0;
	int c=0;
	int esp=0;
	
	do
	{ 
		system("cls");
		menu();
		cin>>opc;
		switch(opc)
		{
			case 1:
				pluma=0;
				mat[r][c]=pluma;			
			break;
			case 2:
				pluma=1;
				mat[r][c]=pluma;		
			break;
			case 3:
				derecha(horz);
			break;
			case 4:
				izquierda(horz);
			break;
			case 5: 
				cout<<"ESPACIOS A AVANZAR: ";
				cin>>esp;
				caminar(mat,esp,r,c,pluma,horz);
			break;
			case 6:
				mostrar(mat,r,c);
				system("pause");
			break;
				
		}
	}while(opc !=7);
	return 0;
			
}

void menu()
{
		cout<<"1---> PLUMA ARRIBA"<<endl;
		cout<<"2---> PLUMA ABAJO"<<endl;
		cout<<"3---> GIRAR DERECHA"<<endl;
		cout<<"4---> GIRAR IZQUIERDA"<<endl;
		cout<<"5---> CAMINAR ESPACIOS"<<endl;
		cout<<"6---> IMPRIMIR ARREGLO 20 por 20"<<endl;
		cout<<"7---> FIN DE DATOS (Centinela)"<<endl;
		cout<<"COLOCA UNA OPCION: ";
		
}

void derecha(int &horz)
{
	horz++;
	if(horz>4)
	   horz=1;
}

void izquierda(int &horz)
{
	horz--;
	if(horz<1)
	   horz=4;
}

void caminar(int mat[][20],int esp,int &r,int &c,int pluma,int horz)
{
	if(horz==1)
	{
		esp+=c;
			for(;c<esp;c++)
			{
				if(c<20)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
		if(c>20)
		{
			c=19;
		}
	}
	else
	if(horz==2)
	{
		esp+=r;
		for(;r<esp;r++)
		{
			if (r<20)
				if(pluma==1)
				{
					mat[r][c]=pluma;
				}
		}
		if(r>20)
		{
			r=19;
		}
	}
	else
		if(horz==3)
		{
			cout <<""<<horz<<" "<<c<<" "<<esp<<endl;
			cin.get();
			cin.get();
			esp=c-esp;
			for(;c>esp;c--)
			{	
				if (c>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
			if(c<0)
			{
				c=0;
			}	
		}
	else
		{
			esp=r-esp;
			for(;r>esp;r--)
			{	
				if (r>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
				if(r<0)
			{
				c=0;
			}		
		}
}


void mostrar(int mat[][20],int r,int c)
{
	for(int r=0;r<20;r++)
	{
		for(int c=0;c<20;c++)
		{
			cout<<mat[r][c]<<" ";
		}
		cout<<endl;
	}
}
