#ifndef DIVISION_H
#define DIVISION_H

#include "Operacion.h"

class Division : public Operacion {
public:
    Division(double op1, double op2) : Operacion(op1, op2) {}

    double calcular() override {
        if (operando2 != 0)
            return operando1 / operando2;
        else
            return 0; // o lanzar excepción
    }
};

#endif
