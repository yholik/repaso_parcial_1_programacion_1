#include <iostream>
using namespace std;

int main(){
	
	int area, radio;
	const float PI = 3.141592;
	
	cout << "Ingrese el radio: " << endl;
	cin >> radio;
	
	area = (double) PI * (radio * radio);
	
	cout << "El area de la circunferencia es: " << area << endl;
	
	
	return 0;
}
