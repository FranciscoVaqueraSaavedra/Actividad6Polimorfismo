#ifndef SUMA_H
#define SUMA_H

#include "Operacion.h"

class Suma : public Operacion {
public:
    double calcular(double a, double b) override {
        return a + b;
    }
};

#endif
