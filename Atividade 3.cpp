#include <iostream>

void partes_numero(float numero, int* parte_inteira, float* parte_fracionaria) {
    *parte_inteira = static_cast<int>(numero);
    *parte_fracionaria = numero - *parte_inteira;
}

int main() {
    float numero;
    std::cout << "Digite um número real: ";
    std::cin >> numero;

    int parte_inteira;
    float parte_fracionaria;

    partes_numero(numero, &parte_inteira, &parte_fracionaria);

    std::cout << "Parte inteira: " << parte_inteira << std::endl;
    std::cout << "Parte fracionária: " << parte_fracionaria << std::endl;

    return 0;
}
