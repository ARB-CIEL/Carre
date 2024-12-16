#include <iostream>
#include "carre.h"

int main()
{
    Carre monCarre;
    monCarre.setTaille(10);
    std::cout << "Taille du carre : " << monCarre.getTaille() << std::endl;
    return 0;
}

Carre::Carre()
{
    taille = 0;
}

void Carre::setTaille(int t)
{
    taille = t;
}

int Carre::getTaille()
{
    return taille;
}
