class Agujero {
private:
    double radio;

public:
    Agujero(double radio) : radio(radio) {}

    double obtenerRadio() {
        return radio;
    }

    bool puedeEncajar(class Cilindro& cilindro);
};