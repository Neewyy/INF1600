#include <iostream>
#include <cmath>

int getUserInput()
{
    int integer = 0;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    return integer;
}

bool primeNumberCalculator(int integer)
{
    for (int i = 2; i < (integer); i++)
    {
        if (integer % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool estPair(int integer)
{
    return ((integer % 2) == 0);
}

int caracteristiqueDeVotreNombre()
{
    int valeur = getUserInput();
    return (estPair(valeur) && (primeNumberCalculator(valeur)));

}

int main()
{
    int k = caracteristiqueDeVotreNombre();
    std::cout << k << "\n" << std::endl;
    return 0;
}