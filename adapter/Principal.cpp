#include <iostream>
#include "Triangulo.cpp"
#include "Cilindro.cpp"
#include "CilindroTrianguloAdapter.cpp"
using namespace std;
// Implementaci�n de la verificaci�n de encaje en Agujero
bool Agujero::puedeEncajar(Cilindro& cilindro) {
    return cilindro.obtenerRadio() <= radio;
}

// Ejemplo de uso
int main() {
    // Crea un agujero con un radio de 5
    Agujero agujero(5);

    // Crea un cilindro con un radio de 4
    Cilindro cilindro(4);

    // Verifica si el cilindro puede encajar en el agujero
    cout << "�Puede el cilindro encajar en el agujero? " << boolalpha << agujero.puedeEncajar(cilindro) << endl;

    // Convierte el cilindro en un tri�ngulo usando el Adaptador
    CilindroTrianguloAdapter adapter(cilindro);
    Triangulo& triangulo = adapter;

    // Verifica si el tri�ngulo puede encajar en el agujero
    cout << "�Puede el tri�ngulo encajar en el agujero? " << boolalpha << ((sqrt(3) * triangulo.obtenerLado()) / 2 <= agujero.obtenerRadio()) << endl;


    return 0;
}