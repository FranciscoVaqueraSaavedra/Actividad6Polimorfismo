#ifndef DIVISION_H
#define DIVISION_H

#include "Operacion.h"
#include <stdexcept>

class Division : public Operacion {
public:
    Division(double op1, double op2) : Operacion(op1, op2) {}

    double calcular() const override {
        if (operando2 == 0) {
            throw std::runtime_error("Error: División entre cero");
        }
        return operando1 / operando2;
    }
};

#endif
