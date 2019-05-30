#include <iostream>

using std::cout;
using std::endl;

int powerTwo(int);//prototype

int main(){
	int start_at = 1;
	int ends_at = 10;
	int increments = 1;
	int x;

	for(x = start_at;x <= ends_at;x += increments){
		cout << powerTwo(x) << " - ";
	}
	cout << endl;
	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

int powerTwo(int y){
	return y * y;
}