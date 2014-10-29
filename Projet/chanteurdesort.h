#ifndef CHANTEURDESORT_H
#define CHANTEURDESORT_H

#include "magie.h"
#include "arme.h"

class ChanteurDeSort: public Magie
{
public:
    ChanteurDeSort();
    ~ChanteurDeSort();


private:
    Arme A;
    unsigned int vitesse;
    unsigned int resistanceMagie;
    unsigned int resistancePhysique;

};

#endif // CHANTEURDESORT_H
