//
//  punto.cpp
//  fig904
//
//  Created by Rolando Garro on 6/27/19.
//  Copyright © 2019 Rolando Garro. All rights reserved.
//

#include <iostream>
#include "punto.h"

using std::cout;

Punto::Punto(int valorX,int valorY){
    x = valorX;
    y = valorY;
}

void Punto::estableceX(int valorX){
    x = valorX;
}

void Punto::estableceY(int valorY){
    y = valorY;
}

int Punto::obtieneY(){
    return y;
}

int Punto::obtieneX(){
    return x;
}

void Punto::imprime(){
    cout << x << " - " << y;
}
