#ifndef NECROMANCIEN_H
#define NECROMANCIEN_H

#include "magie.h"
#include "arme.h"

class Necromancien: public Magie
{
public:
    Necromancien();
    ~Necromancien();

private:
    unsigned int vitesse;
    unsigned int resistanceMagie;
    unsigned int resistancePhysique;

};

#endif // NECROMANCIEN_H
