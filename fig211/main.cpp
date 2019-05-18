
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int aprobados = 0;
	int reprobados = 0;
	int next = 1;
	int resultado = 0;
	int totalDeEstudiantes = 10;

	while(next <= totalDeEstudiantes){
		cout << "Input Result 1 succes 2 fail: ";
		cin >> resultado;
		if(resultado == 1){
			aprobados += 1;

		} else {
			reprobados += 1;
		}
		next += 1;
	}

	cout << "Aprobados:" << aprobados << endl;
	cout << "Reprobados:" << reprobados << endl;
	if(aprobados > 8){
		cout << "success \n";
	}

	return 0;
}