//Programa que nombre un archivo con tu nombre.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
	//Variables globales
ofstream archivo;
string nombre;
	//Programa
int main(){
	cout<<"Digita tu nombre: ";
	cin>>nombre;
	archivo.open(nombre.c_str());
		archivo<<"--"<<nombre<<"--";
	archivo.close();
}
