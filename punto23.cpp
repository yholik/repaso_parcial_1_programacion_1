#include <iostream>
using namespace std;

/* Escriba un programa en C++ que solicite al usuario 5 números enteros y calcule el promedio de ellos. */

int main(){
	int n, prom, suma, cont;
	
	do{
	cout << "Ingrese un numero" << endl;
	cin >> n;
	suma = suma + n;
	cont++;
	}while(cont <= 5);
	
	prom = suma / 5;
	
	cout << "El promedio total es: " << prom << endl;	
	
	return 0;
}
