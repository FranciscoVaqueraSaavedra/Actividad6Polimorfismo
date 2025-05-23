#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

#include "Operacion.h"

class Multiplicacion : public Operacion {
public:
    Multiplicacion(double op1, double op2) : Operacion(op1, op2) {}

    double calcular() const override {
        return operando1 * operando2;
    }
};

#endif
