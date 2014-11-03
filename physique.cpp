#include "physique.h"

Physique::Physique()
{
}

Physique::~Physique()
{

}

void Physique::setForce(int point)
{
    this->force = point;
}

int Physique::getForce()
{
    return this->force;
}
