#include <iostream>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

int main() {
    double a = 10, b = 2;

    Operacion* operacion;

    operacion = new Suma();
    std::cout << "Suma: " << operacion->calcular(2, 5) << std::endl;
    delete operacion;

    operacion = new Resta();
    std::cout << "Resta: " << operacion->calcular(10, 2) << std::endl;
    delete operacion;

    operacion = new Multiplicacion();
    std::cout << "Multiplicacion: " << operacion->calcular(5, 5) << std::endl;
    delete operacion;

    operacion = new Division();
    std::cout << "Division: " << operacion->calcular(90, 9) << std::endl;
    delete operacion;

    return 0;
}
