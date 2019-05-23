#include <iostream>

using std::cout;
using std::endl;

int main(){
	int sum = 0;
	int max_loops = 100;
	int increment = 2;
	int start_at = 2;

	for(int number = start_at;number <= max_loops;number += increment){
		sum += number;
	}
	cout << "the sum: " << sum << endl;

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....