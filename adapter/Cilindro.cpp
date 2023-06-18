#pragma once

class Cilindro {
private:
    double radio;

public:
    Cilindro(double radio) : radio(radio) {}

    double obtenerRadio() {
        return radio;
    }
};