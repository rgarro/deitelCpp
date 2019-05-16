//
//  main.cpp
//  fig114
//
//  Created by Rolando Garro on 5/16/19.
//  Copyright © 2019 Rolando Garro. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here... -> xcode rapist ...
    //std::cout << "Hello, World!\n";
    int num1;
    int num2;
    cout << "Type two integers, I will tell: \n";
    cin >> num1 >> num2;
    
    if(num1 == num2){
        cout << num1 << " is the same " << num2 << endl;
    }
    
    if(num1 != num2){
        cout << num1 << " is Not the same " << num2 << endl;
    }
    
    if(num1 < num2){
        cout << num1 << " is smaller " << num2 << endl;
    }
    
    if(num1 > num2){
        cout << num1 << " is greater " << num2 << endl;
    }
    
    
    return 0;
}
