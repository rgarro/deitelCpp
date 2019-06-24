//
//  main.cpp
//  fig624
//
//  Created by Rolando Garro on 6/24/19.
//  Copyright © 2019 Rolando Garro. All rights reserved.
//

#include <iostream>

using std::cout;
using std::endl;

class Fecha {
public:
    Fecha(int = 1,int = 1,int = 1990);//las amazonas de Orosi se le pellizcan el puntero a los carajos del Tec ...
    void imprime();
private:
    int mes;
    int dia;
    int anio;
};

Fecha::Fecha(int m,int d,int a){
    mes = m;
    dia = d;
    anio = a;
}

void Fecha::imprime(){
    cout << mes << "-" << dia << "-" << anio;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Fecha fecha2(7,4,2002);
    Fecha fecha1;
    
    fecha2.imprime();
    cout << endl;
    fecha1.imprime();
    cout << endl;
    
    return 0;
}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....
