#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

unsigned long factorial(unsigned long);

int factorial_bottom_base = 1;

int main(){
	int start_at = 0;
	int top = 10;
	int increment= 1;

	for(int i = start_at;i <= top;i+=increment){
		cout << setw(2) << i << " != " << factorial(i) << endl;
		cout << "Looping Here - " << endl;
	}

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

unsigned long factorial(unsigned long number){
	return (number <= factorial_bottom_base ? factorial_bottom_base : number * factorial(number-1));
}