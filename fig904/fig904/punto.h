//
//  punto.h
//  fig904
//
//  Created by Rolando Garro on 6/26/19.
//  Copyright © 2019 Rolando Garro. All rights reserved.
//

#ifndef punto_h
#define punto_h

class Punto {
public:
    Punto(int=0,int=0);
    void estableceX(int);
    int obtieneX() const;
    
    void estableceY(int);
    int obtieneY() const;
    
    void imprime() const;
    
private:
    int x;
    int y;
};

#endif /* punto_h */
