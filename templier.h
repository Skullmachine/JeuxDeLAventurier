#ifndef TEMPLIER_H
#define TEMPLIER_H

#include "aventurier.h"
#include "arme.h"

namespace Physique {
class Templier: public Aventurier
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

    void choixArme();

    void spec(std::ostream &flux);
    virtual void choixPrenom();

private:
    Arme m_arme;
    unsigned int m_vitesse;
    unsigned int m_resistanceMagie;
    unsigned int m_resistancePhysique;
    unsigned int force;

    std::string arme1;
    std::string arme2;
    std::string armeChoisie;

};
};


#endif // TEMPLIER_H
