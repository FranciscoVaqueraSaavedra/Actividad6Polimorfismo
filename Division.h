#ifndef DIVISION_H
#define DIVISION_H

#include "Operacion.h"
#include <stdexcept>

class Division : public Operacion {
public:
    double calcular(double a, double b) override {
        if (b == 0) {
            throw std::runtime_error("División por cero");
        }
        return a / b;
    }
};

#endif
