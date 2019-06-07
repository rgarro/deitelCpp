#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;

const double PI = 3.14159265358979;

int main(){
	const float PI = static_cast< float > (::PI);
	
	cout << setprecision(20) << "PI float value: " << PI << " PI double global " << ::PI;


	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....