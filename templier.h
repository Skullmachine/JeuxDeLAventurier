#ifndef TEMPLIER_H
#define TEMPLIER_H

#include "physique.h"
#include "arme.h"

class Templier: public Physique, public Arme
{
public:
    Templier();
    ~Templier();

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

#endif // TEMPLIER_H
