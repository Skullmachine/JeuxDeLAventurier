#ifndef NECROMANCIEN_H
#define NECROMANCIEN_H

#include "magie.h"
#include "arme.h"

class Necromancien: public Magie
{
public:
    Necromancien();
    ~Necromancien();

    void setVitesse(int vitesse);
    int getVitesse();

    void setResistanceMagie(int RM);
    int getResistanceMagie();

    void setResistancePhysique(int RP);
    int getResistancePhysique();

private:
    //Arme m_arme;
   unsigned int m_vitesse;
   unsigned int m_resistanceMagie;
   unsigned int m_resistancePhysique;

};

#endif // NECROMANCIEN_H
