#include <iostream>

using std::cout;
using std::endl;

int main(){
	int s;
	int *ptrA;

	s = 7;
	ptrA = &s;

	cout << "s address: " << &s << " ptrA val: " << ptrA << endl;
	cout << "s val: " << s << " ptrA val: " << *ptrA << endl;
	cout << "* and & are inverse: " << &*ptrA << *&ptrA << endl;

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....