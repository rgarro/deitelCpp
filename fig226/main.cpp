//solid noise absence,mantra engine roaring waves,darkness in a blink
#include <iostream>
using std::cout;
using std::endl;


int main(){
	int x;
	int from = 1;
	int to = 10;
	int increment = 1;
	int break_val = 5;

	for(x=from;x<=to;x+=increment){
		cout << x << " ";
		if(x == 5){
			break;
		}
	}

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....