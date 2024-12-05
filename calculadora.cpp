#include <iostream>
#include <cmath> // Para pow() y operaciones matemáticas
using namespace std;

int main()
{
    int num1, num2, indiceRaiz;
    int totalsuma, totalresta;
    long long potencia; // Para manejar grandes números en potenciación
    double raizPersonalizada = -1; // Valor inicial para raíces no válidas

    // Entrada de números
    cout << "Ingrese el primer numero (entero) --> ";
    cin >> num1;
    cout << "Ingrese el segundo numero (entero) --> ";
    cin >> num2;

    // Entrada del índice de la raíz
    cout << "Ingrese el indice de la raiz (entero positivo mayor que 1) --> ";
    cin >> indiceRaiz;

    // Validación del índice de la raíz
    if (indiceRaiz <= 1) {
        cout << "Advertencia: El índice de la raíz debe ser mayor que 1.\n";
        raizPersonalizada = -1; // Indicador de error
    } else if (num1 >= 0) {
        raizPersonalizada = pow(num1, 1.0 / indiceRaiz); // Raíz personalizada de num1
    } else if (indiceRaiz % 2 == 1) {
        // Si el índice es impar, se permite calcular la raíz de un número negativo
        raizPersonalizada = pow(abs(num1), 1.0 / indiceRaiz) * -1;
    } else {
        // Si el índice es par, no se puede calcular la raíz de un número negativo
        cout << "Advertencia: No se puede calcular una raíz par de un número negativo.\n";
        raizPersonalizada = -1;
    }

    // Operaciones básicas
    totalsuma = num1 + num2;
    totalresta = num1 - num2;

    // Potenciación (solo con exponentes no negativos)
    if (num2 >= 0) {
        potencia = pow(num1, num2);
    } else {
        cout << "Advertencia: La potenciación solo se realiza con exponentes enteros no negativos.\n";
        potencia = -1; // Indicador de error
    }

    // Resultados
    cout << "RESULTADO ES:\n";
    cout << "Suma --> " << totalsuma << "\n";
    cout << "Resta --> " << totalresta << "\n";

    if (potencia != -1) {
        cout << "Potenciacion (" << num1 << "^" << num2 << ") --> " << potencia << "\n";
    }

    if (raizPersonalizada != -1) {
        cout << "Raiz de indice " << indiceRaiz << " de " << num1 << " --> " << raizPersonalizada << "\n";
    }

    return 0;
}
