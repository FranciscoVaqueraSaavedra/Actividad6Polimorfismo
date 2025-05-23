#include <iostream>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

void realizarOperacion(Operacion* op, const std::string& nombre) {
    try {
        std::cout << nombre << ": " << op->calcular() << std::endl;
    } catch (const std::exception& e) {
        std::cout << nombre << ": " << e.what() << std::endl;
    }
    delete op;
}

int main() {
    realizarOperacion(new Suma(12, 5), "Suma");
    realizarOperacion(new Resta(20, 13), "Resta");
    realizarOperacion(new Multiplicacion(11, 4), "Multiplicacion");
    realizarOperacion(new Division(27, 3), "Division");

    return 0;
}
