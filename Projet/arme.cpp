#include "arme.h"

Arme::Arme()
{
    setArme();
}

Arme::~Arme()
{

}

void Arme::setArme(string nomArme);
{
switch (nomArme) {
    case "arc":
        Degats = 60;
        niveau = 1;
        break;

    case "cadavres":
        Degats = 40;
        niveau = 1;
        break;

    case "bouclier":
        Degats = 7;
        niveau = 1;
        break;

    case "batonMagique":
        Degats = 78;
        niveau = 1;
        break;

    case "arbalete":
        Degats = 87;
        niveau =1;
        break;

    case "gourdin":
        Degats = 35;
        niveau =1;
        break;

    case "livreDeSort":
        Degats = 56;
        niveau =1;
        break;

    case "epee":
        Degats = 75;
        niveau =1;
        break;

    default:
        Degats =0;
        niveau = 1;
        break;
}

}

int getdegats()


void choixArme(std::string nomPerso)
{
    switch (nomPerso) {
    case "archets":

        break;
    case "archets":

        break;
    case "archets":

        break;
    case "archets":

        break;
    case "archets":

        break;
    default:
        break;
    }
}
