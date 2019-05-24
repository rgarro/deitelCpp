#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

using std::setw;
using std::setprecision;

int main(){
	double monto;
	double principal = 1000.0;
	double tasa = .05;
	int years_start_at = 1;
	int years_count = 10;

	cout << "Year: " << setw(21) << " deposit amount " << endl;
	cout << fixed << setprecision(2);

	for(int years = years_start_at;years <= years_count;years++){
		monto = principal * pow(1.0+tasa,years);
		cout << setw(4) << years<< setw(21) << monto << endl;
	}


	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....