#ifndef ARCHERS_H
#define ARCHERS_H

#include "physique.h"
#include "arme.h"

class Archers: public Physique
{
public:
    Archers();
    ~Archers();

private:
    unsigned int vitesse;
    unsigned int resistanceMagie;
    unsigned int resistancePhysique;

};

#endif // ARCHERS_H
