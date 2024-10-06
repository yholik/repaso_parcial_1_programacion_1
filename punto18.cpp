#include <iostream>
using namespace std;

int main(){
	
	/* calculadora fahrenheit a celsius */
	
	int c, f;
	
	cout << "Ingrese los grados Fahrenheit que quiere convertir a Celsius" << endl;
	cin >> f;
	
	c = (double )5 / 9  * (f - 32);
	
	cout << "Grados celsius: " << c << endl;
	
	
	
	return 0;
}
