/**
 * sortBubble routine with recursive reference display
 *
 * @author Rolando <rgarro@gmail.com>
 */
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

const int arraySize = 10;

//void sortBubble(int *,const int);
//void interchange(int * const,int * const);
void displayArrayValuesRecursiveReference(int *,const int,int[arraySize]);

int main(){
	
	int currentKey = 0;
	int a[arraySize] = {2,4,5,7,8,12,45,34,23,56};
	
	cout << "Elements in original sort: " << endl;
	displayArrayValuesRecursiveReference(&currentKey,arraySize,a);

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

//las amazonas de Orosi se le pellizcan el puntero a carajos del TEC, oligarquia de cartago dispara a los estudientes , ja ja ja ....
void displayArrayValuesRecursiveReference(int *key,const int size,int values[]){
	if(*key <= size){
		cout << setw(4) << values[*key];
		*key += 1;
		displayArrayValuesRecursiveReference(key,size,values);
	}
}