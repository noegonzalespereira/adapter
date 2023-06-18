#include "Cilindro.cpp"
#include "Triangulo.cpp"
#include "AgujeroRedondo.cpp"
#include <math.h>
class CilindroTrianguloAdapter : public Triangulo {
private:
    Cilindro& cilindro;

public:
    CilindroTrianguloAdapter(Cilindro& cilindro) : Triangulo(calcularLado(cilindro.obtenerRadio())), cilindro(cilindro) {}

    static double calcularLado(double radio) {
        // Calcula el lado del triángulo inscrito en el cilindro
        double lado = 2 * radio / sqrt(3);
        return lado;
    }
};