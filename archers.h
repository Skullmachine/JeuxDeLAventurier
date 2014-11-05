#ifndef ARCHERS_H
#define ARCHERS_H

#include "aventurier.h"
#include "arme.h"

namespace Physique { // on ajoute une classe dans le namespace Physique
class Archers: public Aventurier //l'Archers hérite de la classe Aventurier
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

    virtual void choixPrenom(); //methode virtuelle

    int getDegats();


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
