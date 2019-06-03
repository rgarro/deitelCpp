#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cout;
using std::endl;
using std::setw;

int main(){
	int start_at = 1;
	int count;
	int top = 20;
	int increment = 1;
	
	for(count = start_at;count <= top;count += increment){
		cout << setw(10) << (1+rand()%6);
	}
	if(count % 5 == 0){
		cout << endl;
	}

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....