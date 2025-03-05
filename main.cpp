#include <iostream>

int main() {
    bool tf;
    char name[1];
    int num;
    float numFloat;
    double secondNum;

    std::cout<<('Los booleanos solo almacenan 0 y 1');
    std::cout<<('La capacidad de un char en bits es de: 8 y su capacidad ronda de los 0 a 255');
    std::cout<<('La capacidad de un entero en bits es de: 32 y su capacidad ronde de los -2 millones a los 2 millones');
    std::cout<<('La capacidad de un flotante en bits es de: 32 y su capacidad ronda de los 6-7 decimales');
    std::cout<<('La capacidad de un doble en bits es deÑ 64 y su capacidad ronda en los 15-16 decimales');
#pragma region Operadores_aritmeticos
    std::cout<<(9 + 9);
    std::cout<<(9 - 9);
    std::cout<<(9 * 9);
    std::cout<<(9 / 9);
    std::cout<<(2 % 9);
#endregion
#pragma region Operadores_asignacion
    num = 0;
#endregion
#pragma region Operadores_logicos
    if (num == 0 && num < 10 || num == 11) {
        return;
    }
#pragma endregion
#pragma region Operadores_relacionales
    std::cout<<"==, <, >, <=, >=, !=";
#pragma region Operadores_referencia
    int *ptr = &num;
    std::cout<<(*ptr);
#pragma endregion
#pragma region Operadores_movimiento
    num >> 1;
    num << 1;
#pragma endregion
#pragma region Operadores_ternario
    (num < 15) ? std::cout<<"El numero es menor a 15" : std::cout<<"El numero es mayor a 15";
#endpragma
}