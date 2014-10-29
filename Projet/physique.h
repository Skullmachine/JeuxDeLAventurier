#ifndef PHYSIQUE_H
#define PHYSIQUE_H

#include "aventurier.h"


class Physique: public Aventurier
{
public:
    Physique();
    ~Physique();

    void setForce(int point);

    int getForce();

private:
    unsigned int force;
};

#endif // PHYSIQUE_H
