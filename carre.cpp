#include "carre.h"
#include <iostream>

Carre::Carre()
{
    taille = 0;
    sx = 0;
    sy = 0;
    cote = 0;
}

void Carre::setTaille(int t)
{
    taille = t;
}

int Carre::getTaille()
{
    return taille;
}

void Carre::Setsx(int sx1)
{
    sx = sx1;
}

int Carre::Getsx()
{
    return sx;
}

void Carre::Setsy(int sy1)
{
    sy = sy1;
}

int Carre::Getsy()
{
    return sy;
}

void Carre::Setcote(int cote1)
{
    cote = cote1;
}

int Carre::GetCote()
{
    return cote;
}

void Carre::Afficher()
{
    std::cout << "Caractéristiques du carré :" << std::endl;
    std::cout << "Taille : " << taille << std::endl;
    std::cout << "sx : " << sx << std::endl;
    std::cout << "sy : " << sy << std::endl;
    std::cout << "Cote : " << cote << std::endl;
}



