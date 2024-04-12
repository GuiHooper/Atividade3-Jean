#include <iostream>
#include <cmath>

void calcular_area_volume_esfera(double raio, double *area, double *volume) {
    const double pi = 3.14159265358979323846;
    *area = 4 * pi * pow(raio, 2);
    *volume = (4.0 / 3.0) * pi * pow(raio, 3);
}

int main() {
    double raio;
    std::cout << "Digite o raio da esfera: ";
    std::cin >> raio;

    double area, volume;
    calcular_area_volume_esfera(raio, &area, &volume);

    std::cout << "Área da superfície: " << area << std::endl;
    std::cout << "Volume da esfera: " << volume << std::endl;

    return 0;
}
