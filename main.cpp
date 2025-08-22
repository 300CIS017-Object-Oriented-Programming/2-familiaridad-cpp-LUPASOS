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
    int opcion;
    int num1, num2;
    int arreglo[] = {1, 5, 8, 3, 9, 2, 7, 4, 6, 10}; // Arreglo de ejemplo
    int tamanoArreglo = sizeof(arreglo) / sizeof(arreglo[0]);

    do {
        std::cout << "\n--- Menu de Operaciones ---" << std::endl;
        std::cout << "1. Probar Suma y Resta" << std::endl;
        std::cout << "2. Probar Operaciones con Arreglos" << std::endl;
        std::cout << "3. Factorial de un numero" << std::endl;
        std::cout << "4. Potencia de un numero" << std::endl;
        std::cout << "5. Maximo de un arreglo y suma con tu edad" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;
        std::cin.clear();
        std::cin.ignore(10000, '\n');

        switch (opcion) {
            case 1:
                probarMatematicas();
                break;
            case 2:
                probarArreglos();
                break;
            case 3: {
                std::cout << "Ingresa un numero para calcular su factorial: ";
                std::cin >> num1;
                std::cout << "El factorial de " << num1 << " es: " << factorial(num1) << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                break;
            }
            case 4: {
                std::cout << "Ingresa la base: ";
                std::cin >> num1;
                std::cout << "Ingresa el exponente: ";
                std::cin >> num2;
                std::cout << "El resultado de " << num1 << " elevado a " << num2 << " es: " << potencia(num1, num2) << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                break;
            }
            case 5: {
                int edad;
                std::cout << "El arreglo de ejemplo es: ";
                mostrarArreglo(arreglo, tamanoArreglo);
                std::cout << "\nEl numero maximo en el arreglo es: " << encontrarMaximo(arreglo, tamanoArreglo) << std::endl;
                std::cout << "Ingresa tu edad para sumarla al numero maximo: ";
                std::cin >> edad;
                std::cout << "La suma del numero maximo y tu edad es: " << encontrarMaximo(arreglo, tamanoArreglo) + edad << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                break;
            }
            case 6:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}
