#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double mayorOfThree(double,double,double);

int main(){
	double num1;
	double num2;
	double num3;

	cout << "Type three float numbers: ";
	cin >> num1 >> num2 >> num3;

	cout << "The mayor is: " << mayorOfThree(num1,num2,num3);


	return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

double mayorOfThree(double x,double y,double z){
	double may = x;
	if(y > may){
		may = y;
	}
	if(z > may){
		may = z;
	}
	//may = (z > may ? z);
	return may;
}