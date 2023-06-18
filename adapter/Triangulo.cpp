#pragma once

class Triangulo
{
private:
    double lado;

public:
    Triangulo(double lado) : lado(lado) {}

    double obtenerLado() {
        return lado;
    }
};