#include <iostream>
#include <cmath> // Necesario para pow() y sqrt()
using namespace std;

int main()
{
    int num1, num2, totalsuma, totalresta;
    long long potencia; // Usamos long long para manejar números grandes en la potenciación
    double raiz_num1 = -1, raiz_num2 = -1; // Valores por defecto para raíces inválidas

    // Entrada de números
    cout << "Ingrese el primer numero (entero) --> ";
    cin >> num1;
    cout << "Ingrese el segundo numero (entero) --> ";
    cin >> num2;

    // Operaciones básicas
    totalsuma = num1 + num2;
    totalresta = num1 - num2;

    // Potenciación (si num2 >= 0)
    if (num2 >= 0) {
        potencia = pow(num1, num2);
    } else {
        cout << "Advertencia: La potenciación solo se realiza con exponentes enteros no negativos.\n";
        potencia = -1; // Valor inválido para indicar un error
    }

    // Raíz cuadrada (solo números no negativos)
    if (num1 >= 0) {
        raiz_num1 = sqrt(num1);
    } else {
        cout << "Advertencia: No se puede calcular la raíz cuadrada de un número negativo (" << num1 << ").\n";
    }

    if (num2 >= 0) {
        raiz_num2 = sqrt(num2);
    } else {
        cout << "Advertencia: No se puede calcular la raíz cuadrada de un número negativo (" << num2 << ").\n";
    }

    // Resultados
    cout << "RESULTADO ES:\n";
    cout << "Suma --> " << totalsuma << "\n";
    cout << "Resta --> " << totalresta << "\n";

    if (potencia != -1) {
        cout << "Potenciacion (" << num1 << "^" << num2 << ") --> " << potencia << "\n";
    }

    if (raiz_num1 != -1) {
        cout << "Raiz cuadrada de " << num1 << " --> " << raiz_num1 << "\n";
    }

    if (raiz_num2 != -1) {
        cout << "Raiz cuadrada de " << num2 << " --> " << raiz_num2 << "\n";
    }

    return 0;
}