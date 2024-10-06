#include <iostream>
using namespace std;

int main(){

	int month;
	
	cout << "Please in value in the range 1.....5: " << endl;
	
	cin >> month;

	if(month == 1){
	cout << "You entered a" << endl;
	cout << "one" << endl;
	cout << '\n' << endl;
		}else if (month == 2){
		cout << "You entered a" << endl;
		cout << "two" << endl;
		cout << '\n' << endl;
			}else if (month == 3){
			cout << "You entered a" << endl;
			cout << "three" << endl;
			cout << '\n' << endl;
				}else if (month == 4){
				cout << "You entered a" << endl;
				cout << "four" << endl;
				cout << '\n' << endl;
					} else if (month == 5){
					cout << "You entered a" << endl;
					cout << "five" << endl;
					cout << '\n' << endl;
						}else{
						cout << "You entered a" << endl;
						cout << "value out of range" << endl;
						cout << '\n' << endl;
}

return 0;
}
