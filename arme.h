#ifndef ARME_H
#define ARME_H

#include "aventurier.h"

// Cette classe est implémenté dans chaque classe fille
class Arme
{
public:
    Arme();// constructeur
    ~Arme();//Destructeur

    /* Dans cette methode, On implémente les
     * attributs en fonction du nom de l'arme
     * envoyé en parametre */
    void setArme(std::string nomArme);

    int getdegats();// accesseur attribut degats

    int getNiveau();// accesseur attribut niveau


private:
    // attributs
    unsigned int Degats;
    unsigned int niveau;
};

#endif // ARME_H
