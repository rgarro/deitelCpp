#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int n[10];
int times = 10;
int fill_from = 5001;
int key = 0;
int current_display_key = 0;

void fillArray(){
	if(key <= times){
		n[key] = fill_from;
		fill_from -= 1;
		key += 1;
		fillArray(); 
	}
}

void displayContents(){
	if(current_display_key <= times){
		cout << n[current_display_key] << " ";
		current_display_key += 1;
		displayContents();
	}
}

int main(){
	fillArray();
	displayContents();

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....