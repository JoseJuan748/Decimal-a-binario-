// Decimal a binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>
#include <cmath>


/*long long convert*/

long long convert(int);

int main() 
{
    int num;
    int bin;
    std::cout << "Por favor ingrese un numero entero positivo: ";
    std::cin >> num;
    bin = convert(num);
    std::cout << "El numero en binario es:\n";
    std::cout << bin;
    return 0;
}

long long convert(int n) 
{
    long long bin = 0;
    int num, num2 = 1;

    while (n != 0) 
    {
        num = n % 2;
        n /= 2;
        bin += num * num2;
        num2 *= 10;
    }

    system("pause");
    system("cls");
    return bin;
}