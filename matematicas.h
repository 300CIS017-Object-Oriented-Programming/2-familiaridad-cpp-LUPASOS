//
// Created by Lupassos on 21/08/2025.
//

// matematicas.h
#ifndef MI_PROYECTO_MATEMATICAS_H  // Header Guard (Si no está definido...)
#define MI_PROYECTO_MATEMATICAS_H  // (... defínelo)
#include <iostream>

// --- Declaraciones (El "qué") ---
int sumar(int num1, int num2);
int restar(int num1, int num2);

using std::cout;
using std::cin; //Esto la vdd no entendí bien para que meterlo

// Ejemplos con arreglos
int llenarArreglo(int arreglo[], int tamano);
int sumarPares(int arreglo[], int tamano);
void mostrarArreglo(int arreglo[], int tamano);

//Act 1. Primera modificación para factos.
int factorial(int numero);

// Act 2. Función potencia de un núm.
int potencia(int base, int exponente);

// TODO

#endif //MI_PROYECTO_MATEMATICAS_H