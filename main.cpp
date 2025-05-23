#include <iostream>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

int main() {
    Operacion* op;

    op = new Suma(10, 5);
    std::cout << "Suma: " << op->calcular() << std::endl;
    delete op;

    op = new Resta(23, 5);
    std::cout << "Resta: " << op->calcular() << std::endl;
    delete op;

    op = new Multiplicacion(7, 3);
    std::cout << "Multiplicacion: " << op->calcular() << std::endl;
    delete op;

    op = new Division(90, 10);
    std::cout << "Division: " << op->calcular() << std::endl;
    delete op;

    return 0;
}
