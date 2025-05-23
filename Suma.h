#ifndef SUMA_H
#define SUMA_H

#include "Operacion.h"

class Suma : public Operacion {
public:
    Suma(double op1, double op2) : Operacion(op1, op2) {}

    double calcular() const override {
        return operando1 + operando2;
    }
};

#endif
