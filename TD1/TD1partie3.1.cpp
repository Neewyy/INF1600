#include <iostream>
#include <cmath>

int matricule() {
    int m1 = 2222954;
    int m2 = 2207305;
    int value = 3 - (abs(m1 + m2) % 13);
    return value;

}
int informationUtilisateur()
{
    int entier = 0;
    std::cout << "Entrer un entier: ";
    std::cin >> entier;
    return entier;
}

bool primeNumberCalculator(int entier)
{
    for (int i = 2; i < (entier); i++)
    {
        if (entier % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool estPair(int entier)
{
    return ((entier % 2) == 0);
}

int caracteristiqueDeVotreNombre()
{
    int valeur = informationUtilisateur();
    return (estPair(valeur) && (primeNumberCalculator(valeur)));

}

int main()
{
    int k = caracteristiqueDeVotreNombre();
    std::cout << k << "\n" << std::endl;
    return 0;
}
