#include <iostream>
#include "chanteurdesort.h"
#include "archers.h"
#include "necromancien.h"
#include "templier.h"


int main(int argc, char *argv[])
{

    Magie::ChanteurDeSort chanteur;

    chanteur.spec();

    Physique::Archers archer;
    archer.spec();

    Magie::Necromancien necro;
    necro.spec();

    Physique::Templier temp;
    temp.spec();


    return 0;
}
