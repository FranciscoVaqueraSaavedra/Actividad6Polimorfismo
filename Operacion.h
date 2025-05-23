#ifndef OPERACION_H
#define OPERACION_H

class Operacion {
protected:
    double operando1;
    double operando2;

public:
    Operacion(double op1, double op2) : operando1(op1), operando2(op2) {}


    virtual double calcular() const = 0;

    virtual ~Operacion() {}
};

#endif
