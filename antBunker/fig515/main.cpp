/**
 * sortBubbleRecursive routine with recursive reference display
 *
 * @author Rolando <rgarro@gmail.com>
 */
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

const int arraySize = 10;

void sortBubbleRecursive(int *,int *,const int);
void interchange(int * const,int * const);
void displayArrayValuesRecursiveReference(int *,const int,int *);//[arraySize]
void resetCurrentKey(int *); 

int main(){
	
	int currentKey = 0;
	int a[arraySize] = {2,4,5,7,8,12,45,34,23,56};
	
	cout << "Elements in original sort: " << endl;
	displayArrayValuesRecursiveReference(&currentKey,arraySize,a);

	//cout << "current key : " << currentKey << endl;
	
	sortBubbleRecursive(a,&currentKey,arraySize);

	cout << "Bubble sorted Elements : " << endl;
	displayArrayValuesRecursiveReference(&currentKey,arraySize,a);

	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

/**
 * las amazonas de Orosi se le pellizcan el puntero a carajos del TEC, 
 * oligarquia de Cartago dispara a los estudiantes .... 
 */
void displayArrayValuesRecursiveReference(int *key,const int size,int *values){
	if(*key <= size){
		cout << setw(4) << values[*key];
		*key += 1;
		displayArrayValuesRecursiveReference(key,size,values);
	} else {
		resetCurrentKey(key);
	}
}

void resetCurrentKey(int *key){
	*key = 0;
}

void sortBubbleRecursive(int *values,int *key,const int size){
	if(*key <= size){
		if(values[*key] > values[*key + 1]){
			interchange(&values[*key],&values[*key + 1]);
		}
		*key += 1;
		sortBubbleRecursive(values,key,size);
	} else {
		resetCurrentKey(key);
	}
}

void interchange(int * const ptrElement1,int * const ptrElement2){
	int keep = *ptrElement1;
	*ptrElement1 = *ptrElement2;
	*ptrElement2 = keep;
}