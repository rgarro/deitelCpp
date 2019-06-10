#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main(){
	const int answerSize = 40;
	const int frecuencySize = 11;

	int answers[answerSize] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
	int frecuency[frecuencySize] = {0};

	for(int answer = 1; answer < frecuencySize; answer+=1){
		++frecuency[answers[answer]];
	}

	cout << "Calificacion: " << setw(17) << "Frecuency: " << endl;

	for(int calificacion = 1; calificacion < frecuencySize;calificacion+=1){
		cout << setw(6) << calificacion << setw(17) << frecuency[calificacion] << endl;
	}

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....