#ifndef ARCHERS_H
#define ARCHERS_H

#include "physique.h"
#include "arme.h"

class Archers: public Physique
{
public:
    Archers();
    ~Archers();

    void setVitesse(int vitesse);
    int getVitesse();

    void setResistanceMagie(int RM);
    int getResistanceMagie();

    void setResistancePhysique(int RP);
    int getResistancePhysique();

private:
    Arme m_arme;
   unsigned int m_vitesse;
   unsigned int m_resistanceMagie;
   unsigned int m_resistancePhysique;

};

#endif // ARCHERS_H
