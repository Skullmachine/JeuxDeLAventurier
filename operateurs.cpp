#include "operateurs.h"

std::ostream &operator<<(std::ostream &flux, Physique::Archers &archer)
{
    archer.spec(flux);
    return flux;
}

std::ostream &operator<<(std::ostream &flux, Physique::Templier &templier)
{
    templier.spec(flux);
    return flux;
}

std::ostream &operator<<(std::ostream &flux, Magie::ChanteurDeSort &chanteur)
{
    chanteur.spec(flux);
    return flux;
}

std::ostream &operator<<(std::ostream &flux, Magie::Necromancien &necro)
{
    necro.spec(flux);
    return flux;
}

