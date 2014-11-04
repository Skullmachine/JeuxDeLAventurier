#ifndef ARCHERS_H
#define ARCHERS_H

#include "aventurier.h"
#include "arme.h"

namespace Physique {
class Archers: public Aventurier
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

    void choixArme();

    void spec(std::ostream &flux);

    void choixPrenom();


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


#endif // ARCHERS_H
