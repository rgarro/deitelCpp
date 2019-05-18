
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int total = 0;
	int next = 1;
	int calificacion = 1;
	int promedio;
	int times_to_ask = 10;//preguntame wey,preguntame, major Backto the future ...
	
	while(next <= times_to_ask){
		cout << "Calificacion: ";
		cin >> calificacion;
		total += calificacion;
		next += 1;

	}
	promedio = total / times_to_ask;
	cout << "\n \n Promedio: " << promedio << endl;

	return 0;
}