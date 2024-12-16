#pragma once
#define CARRE_H

class Carre
{
private:
    int taille;
    int sx;
    int sy;
    int cote;

public:
    Carre();

    /**
     * Affecte la valeur de taille
     * 
     * @param t La nouvelle taille du carré.
     */
    void setTaille(int t);

    /**
     *  Retourne la taille du carré
     * 
     * @return La taille actuelle du carré.
     */
    int getTaille();

    /**
     * Affecte la valeur de sx
     * 
     * @param sx1 La nouvelle valeur pour sx.
     */
    void Setsx(int sx1);

    /**
     *  Affecte la valeur de sy
     * 
     * @param sy1 La nouvelle valeur pour sy.
     */
    void Setsy(int sy1);

    /**
     * Affecte la valeur de cote
     * 
     * @param cote1 La nouvelle valeur pour cote.
     */
    void Setcote(int cote1);

    void Afficher();

    int Getsx();

    /**
     * Affecte la valeur de sy.
     * La nouvelle valeur pour sy.
     */
    void Setsy(int sy1);

    /**
     * Retourne la valeur de sy.
     * La valeur actuelle de sy.
     */
    int Getsy();

    /**
     *Affecte la valeur de cote.
     *  La nouvelle valeur pour cote.
     */
    void Setcote(int cote1);

    /**
     * Retourne la valeur de cote.
     *  La valeur actuelle de cote.
     */
    int GetCote();

    
    void Afficher();

 };


