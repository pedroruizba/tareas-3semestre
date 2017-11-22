#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int j1(int tablero[],int jugador1);
int j2(int tablero[],int jug2);
int dado();

int main()
{
	int tablero[100]={0};
	int jugador1=0;
	int jugador2=0;

	srand(time(NULL));
//S
	tablero[16]=-8;
	tablero[21]=-11;
	tablero[51]=-16;
	tablero[81]=-21;
	tablero[87]=-21;
	tablero[96]=-20;
	tablero[99]=-70;
//ESC
	tablero[56]=+12;
	tablero[26]=+12;
	tablero[31]=+17;
	tablero[61]=+9;
	tablero[76]=+3;
	tablero[79]=+5;
	tablero[85]=+15;
	
	while(jugador1<100&&jugador2<100)
	{
		jugador1=j1(tablero,jugador1);
		jugador2=j2(tablero,jugador2);
		cout<<"JUGADOR 1: "<<jugador1<<endl<<"JUGADOR 2: "<<jugador2<<endl;
		cout<<endl;
	}
	
	if(jugador1>=90 && jugador2>=90)
	{
		cout<<"JUEGO EMPATADO!";
	}
	else
	if(jugador1>jugador2)
	{
		cout<<"GANA JUGADOR 1";
	}
	else
	cout<<"GANA JUGADOR 2";
	return 0;
}

int j1(int tablero[],int jugador1)
{
	jugador1+=dado();
	jugador1+=tablero[jugador1];
	return jugador1;
}

int j2(int tablero[],int jugador2)
{
	jugador2+=dado();
	jugador2+=tablero[jugador2];
	return jugador2;
}

int dado()
{
	int n;
	return n=1+rand()%6;	
}
