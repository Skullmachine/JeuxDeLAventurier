#ifndef OPERATEURS_H
#define OPERATEURS_H

#include <iostream>
#include <string>
#include "chanteurdesort.h"
#include "archers.h"
#include "necromancien.h"
#include "templier.h"

/* Portotypes d'perateur de surcharge, c'est un operateur de flux "operator<<"
 *chaque fonctions font appelle a la methode d'affichage de l'objet en
 *  deuxieme parametre.
 * 4 fonctions 4 classes filles differentes
 *
 * Parametre 1 : objet de flux (cout dans notre cas)
 * Parametre 2: objet templier ou archer ou nercomencien ou templier
  */
std::ostream &operator<<(std::ostream &flux, Physique::Archers &archer);
std::ostream &operator<<(std::ostream &flux, Physique::Templier &templier);
std::ostream &operator<<(std::ostream &flux, Magie::ChanteurDeSort &chanteur);
std::ostream &operator<<(std::ostream &flux, Magie::Necromancien &necro);


#endif // OPERATEURS_H
