#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

#include "Operacion.h"

class Multiplicacion : public Operacion {
public:
    double calcular(double a, double b) override {
        return a * b;
    }
};

#endif
