#ifndef RESTA_H
#define RESTA_H

#include "Operacion.h"

class Resta : public Operacion {
public:
    double calcular(double a, double b) override {
        return a - b;
    }
};

#endif
