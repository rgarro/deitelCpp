#include <iostream>

using std::cout;
using std::endl;



int main(){
	int count = 1;
	int top_count = 10;
	int increment = 1;

	do{
		cout << count << endl;	
	}while((count += increment) <= top_count);


	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....