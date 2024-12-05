#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, totalsuma, totalresta;
    double potencia, raiz_num1, raiz_num2;

    cout << "Ingrese el primer numero --> ";
    cin >> num1;
    cout << "Ingrese el segundo numero --> ";
    cin >> num2;

    totalsuma = num1 + num2;
    totalresta = num1 - num2;

	// Operaciones adicionales: Potenciación y raíz cuadrada
    potencia = pow(num1, num2); // num1 elevado a la potencia de num2
    raiz_num1 = sqrt(num1);    // Raíz cuadrada de num1
    raiz_num2 = sqrt(num2);    // Raíz cuadrada de num2

	// Resultados
    cout << "RESULTADO ES: \n";
    cout << "Suma --> " << totalsuma << "\n";
    cout << "Resta --> " << totalresta << "\n";
    cout << "Potenciacion (" << num1 << "^" << num2 << ") --> " << potencia << "\n";
    cout << "Raiz cuadrada de " << num1 << " --> " << raiz_num1 << "\n";
    cout << "Raiz cuadrada de " << num2 << " --> " << raiz_num2 << "\n";

    return 0; 
	
	//ANDREA >> MULTIPLICACION, DIVISION
	//EFRAIN >> POTENCIACION - RAIZ
}
