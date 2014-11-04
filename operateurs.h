#ifndef OPERATEURS_H
#define OPERATEURS_H

#include <iostream>
#include <string>
#include "chanteurdesort.h"
#include "archers.h"
#include "necromancien.h"
#include "templier.h"

std::ostream &operator<<(std::ostream &flux, Physique::Archers &archer);
std::ostream &operator<<(std::ostream &flux, Physique::Templier &templier);
std::ostream &operator<<(std::ostream &flux, Magie::ChanteurDeSort &chanteur);
std::ostream &operator<<(std::ostream &flux, Magie::Necromancien &necro);


#endif // OPERATEURS_H
