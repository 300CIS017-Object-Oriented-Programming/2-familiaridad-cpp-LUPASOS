// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

void probarMatematicas()
{
    std::cout << "Bienvenido al programa de matemáticas para matematizar" << std::endl;
    std::cout << "Ingresa el primer numero porfavor" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

int main()
{
    // Act1: Solicitar el numeritio y muestra el resultado del factorial
    int numero;
    std::cout << "Ingresa un numero para calcular su factorial: ";
    std::cin >> numero;

    // Se llama a la función factorial y se muestra el resultado
    std::cout << "El factorial de " << numero << " es: " << factorial(numero) << std::endl;


    // Act 2: Solicitar base y exponente y mostrar los resultados
    int base, exponente;
    std::cout << "--- Actividad 2: Potencia ---\n";
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;
    std::cout << "El resultado de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << std::endl;

    return 0;
}
