#include<iostream>
using namespace std;

int numero=10;
int numero2=12;
int *punteros;
float f=1.35;
char a='b';
int main(int argc, char** argv)
{
	punteros=&numero;
	cout<<"BIENVENIDO"<<endl;
	cout<<"APUNTADORES"<<endl<<endl;
	cout<<"Numero: "<<punteros<<endl;
	cout<<"Memoria char: "<<&a<<endl;
	cout<<"Memoria entero: "<<&numero<<endl;
	cout<<"Memoria float: "<<&f<<endl<<endl;
	cout<<"ALEXANDER GONZALEZ ORTEGA"<<endl;
	cout<<"ESTRUCUTURAS DE DATOS"<<endl;
	cout<<"Adios"<<endl;
	return 0;
}

