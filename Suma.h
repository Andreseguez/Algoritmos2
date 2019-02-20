#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N=20;
const int M=25;


void Lectura(double polinomio[N],int &tamano,string texto)
{
	int i;
	i=0;
	cout<<"Tamano polinomio X:";
	cin>>tamano;
	while(i<tamano)
	{
		cout<<"Polinomio"<<texto<<"["<<i<<"]:";
		cin>>polinomio[i];
		i++;
	}
	
}
void Mostrar(double polinomio[N],int tamano,string texto)
{
	int i;
	i=0;
	while(i<tamano)
	{
		cout<<"Polinomio"<<texto<<"["<<i<<"]"<<polinomio[i]<<endl;
		i++;
	}
	cout<<endl;
}

void Sumar ( double X_polinomio [N], int X_tamano,double Y_polinomio[M],int Y_tamano,double Z_polinomio[N+M],int &Z_tamano)
{
	int i;
	int j;
	int k;
	i=0;
	j=0;
	k=0;
	while ((i<X_tamano)&&(j<Y_tamano))
	{ 
		Z_polinomio [k]= X_polinomio [i]+Y_polinomio [j];
		i++;
		j++;
		k++;
	}
	while (i<X_tamano)
	{
		Z_polinomio [k]=X_polinomio [i];
		i++;
		k++;
	}
	while(j<Y_tamano)
	{
		Z_polinomio[k]=Y_polinomio [j];
		j++;
		k++;
	}
	Z_tamano=k;
}
void Multiplicar ( double X_polinomio [N], int X_tamano,double Y_polinomio [M],int Y_tamano,double Z_polinomio [N+M],int &Z_tamano)
{
	int i,j;
	for ( i=0;i<(X_tamano+Y_tamano);i++)
		Z_polinomio[i]=0;
	i=0;
	while (i<X_tamano)
	{
		j=0;
		while(j<Y_tamano)
		{
			Z_polinomio[i+j]=X_polinomio[i]*Y_polinomio[j]+Z_polinomio [i+j];
			j++;
		}
		i++;
	}
	Z_tamano=i+j-1;
}

void Restar ( double X_polinomio [N], int X_tamano,double Y_polinomio[M],int Y_tamano,double Z_polinomio[N+M],int &Z_tamano)
{
	int i;
	int j;
	int k;
	i=0;
	j=0;
	k=0;
	while ((i<X_tamano)&&(j<Y_tamano))
	{ 
		Z_polinomio [k]= X_polinomio [i]-Y_polinomio [j];
		i++;
		j++;
		k++;
	}
	while (i<X_tamano)
	{
		Z_polinomio [k]=X_polinomio [i];
		i++;
		k++;
	}
	while(j<Y_tamano)
	{
		Z_polinomio[k]=-Y_polinomio [j];
		j++;
		k++;
	}
	Z_tamano=k;
}

int menu()
{
	int opcion;
	cout<<"De una opcion"<<endl;
	cout<<"0: Salir"<<endl;
	cout<<"1: Sumar"<<endl;
	cout<<"2: Multiplicar"<<endl;
	cout<<"3: Restar"<<endl;
	cout<<"4: Dividir"<<endl;
	cout<<"5: Derivar"<<endl;
	cout<<"6: Integrar"<<endl;
	cout<<"7: Multiplicar por un escalar"<<endl;
	cin>>opcion;
	return opcion;
	
}
