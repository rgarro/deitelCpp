#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long int fibonacci(unsigned long);

int main(){
	unsigned long result, number;

	cout << "Type an Integer: ";
	cin >> number;

	result = fibonacci(number);

	cout << result <<" = Fibonacci(" << number<<")" << endl;
	

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

unsigned long int fibonacci(unsigned long n){
	return (n == 0 || n == 1 ? n : fibonacci(n-1)+fibonacci(n-2));
}