#include <iostream>

using std::cout;
using std::endl;

void cubeByReference(int *);

int main(){
	int number = 9;

	cout << "Original Value: " << number;

	cubeByReference(&number);

	cout << "cubed value: " << number << endl;

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

void cubeByReference(int *p){
	*p = *p * *p * *p;
}