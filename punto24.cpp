/* Combine los dos ejercicios prácticos anteriores en un programa con un menú que permita resolver el área de
una circunferencia, el promedio, o salir mediante un bucle (do while) y switch para la selección */

#include <iostream>
using namespace std;

int main(){
	int opc, area, radio, n, prom, suma, cont;
	const float PI = 3.141592;
	
	do{
	cout << "Seleccione que accion desea realizar: 1- AREA DE UNA CIRCUNFERENCIA 2- PROMEDIO DE 5 NUMEROS 3-SALIR" << endl;
	cin >> opc;
	
		switch(opc){
			
	case 1:
		//AREA DE UNA CIRCUNFERENCIA 
		cout << "Ingrese el radio: " << endl;
		cin >> radio;
	
		area = (double) PI * (radio * radio);
	
		cout << "El area de la circunferencia es: " << area << endl;		
	break;
		
	case 2:
	//PROMEDIO
			do{
			cout << "Ingrese un numero" << endl;
			cin >> n;
			suma = suma + n;
			cont++;
			}while(cont <= 5);
	
			prom = suma / 5;
	
			cout << "El promedio total es: " << prom << endl;
	break;
	
	case 3: break;
	
	default: cout << "error" << endl;
		}
		
		if(opc != 3){
		cout << "Ingrese 3 para finalizar el programa, de lo contrario ingrese 1 para volver" << endl;
		cin >> opc;
		}
		
	}while(opc != 3);
	
	return 0;
}
