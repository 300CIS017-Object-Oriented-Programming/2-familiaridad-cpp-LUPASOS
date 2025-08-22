// matematicas.cpp
#include "matematicas.h" // Se incluye a sí mismo

// --- Definiciones (El "cómo") ---
int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    // TODO agregar validacion para que num1 >= num2, sino cambiar el orden para restar num2 - num1
    return num1 - num2;
}

// Ejemplos con arreglos
int llenarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        arreglo[i] = i + 1; // Llena el arreglo con números del 1 al 10
    }
    return 0; // Retorna 0 para indicar éxito
}

int sumarPares(int arreglo[], int tamano)
{
    int suma = 0;
    for (int i = 0; i < tamano; i += 2)
    {
        // Posiciones pares
        suma += arreglo[i];
    }
    return suma;
}

void mostrarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        std::cout << arreglo[i] << " "; // Muestra el elemento en la posición i})
    }
}

// Act 1: Implementación de la función factorial
int factorial(int numero) {
    if (numero < 0) {
        return 0; // El factorial no está definido para números negativos
    }
    int resultado = 1;
    for (int i = 2; i <= numero; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Act 2: Implementación de la función potencia
int potencia(int base, int exponente) {
    if (exponente < 0) {
        // La potencia no está definida para exponentes negativos en esta implementación
        return -1;
    }
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}
// la verdad casi "all" me toco con ia profe no le voy a mentir
//TODO
