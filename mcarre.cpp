#include <iostream>
#include "carre.h"

int main()
{
    Carre monCarre;
    monCarre.setTaille(10);
    monCarre.Setsx(5);
    monCarre.Setsy(15);
    monCarre.Setcote(20);

    monCarre.Afficher();

    std::cout << "Valeur de sx : " << monCarre.Getsx() << std::endl;
    std::cout << "Valeur de sy : " << monCarre.Getsy() << std::endl;
    std::cout << "Valeur de cote : " << monCarre.GetCote() << std::endl;

    return 0;
}




