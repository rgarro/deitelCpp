#include <iostream>

using std::cout;
using std::endl;

// definición de la clase Cuenta
class Cuenta {

public:
   int x;

   void imprime() 
   { 
      cout << x << endl; 
   }

};//fin de la clase Cuenta

int main()
{
   Cuenta contador;                
   Cuenta *ptrContador = &contador;
   Cuenta &refContador = contador;

   cout << "Asigna 1 a x e imprime utilizando el nombre del objeto: ";
   contador.x = 1;       
   contador.imprime(); 

   cout << "Asigna 2 a x e imprime utilizando una referencia: ";
   refContador.x = 2;    
   refContador.imprime(); 

   cout << "Asigna 3 a x e imprime utilizando un apuntador: ";
   ptrContador->x = 3;   
   ptrContador->imprime(); 

   return 0;  

}//D3Db3 E3C4 E3C4 C4D4Db4E4 C4D4E4 B3D4C4 ....

