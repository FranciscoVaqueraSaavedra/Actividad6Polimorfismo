#ifndef RESTA_H
#define RESTA_H

#include "Operacion.h"

class Resta : public Operacion {
public:
    Resta(double op1, double op2) : Operacion(op1, op2) {}

    double calcular() const override {
        return operando1 - operando2;
    }
};

#endif
