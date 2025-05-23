//
// Created by Franc on 22/05/2025.
//

#ifndef OPERACION_H
#define OPERACION_H



class Operacion {
public:
    virtual double calcular(double a, double b) = 0;
    virtual ~Operacion() = default;
};



#endif //OPERACION_H
