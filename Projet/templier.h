#ifndef TEMPLIER_H
#define TEMPLIER_H

#include "physique.h"
#include "arme.h"

class Templier: public Physique, public Arme
{
public:
    Templier();
    ~Templier();

private:
    unsigned int vitesse;
    unsigned int resistanceMagie;
    unsigned int resistancePhysique;

};

#endif // TEMPLIER_H
