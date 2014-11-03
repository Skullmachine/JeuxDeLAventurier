#ifndef CHANTEURDESORT_H
#define CHANTEURDESORT_H

#include "magie.h"
#include "arme.h"

class ChanteurDeSort: public Magie
{
public:
    ChanteurDeSort();
    ~ChanteurDeSort();

    void setVitesse(int vitesse);
    int getVitesse();

    void setResistanceMagie(int RM);
    int getResistanceMagie();

    void setResistancePhysique(int RP);
    int getResistancePhysique();

    void choixArme();

    void spec();

private:
     Arme m_arme;
    unsigned int m_vitesse;
    unsigned int m_resistanceMagie;
    unsigned int m_resistancePhysique;

    std::string arme1;
    std::string arme2;
    std::string armeChoisie;

};

#endif // CHANTEURDESORT_H
