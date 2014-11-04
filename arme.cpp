#include "arme.h"

Arme::Arme()
{    
}

Arme::~Arme()
{

}

void Arme::setArme(std::string nomArme)
{

    if(nomArme== "arc")
    {
        Degats = 60;
        niveau = 1;
    }

    else if (nomArme== "cadavres")
    {
            Degats = 40;
            niveau = 1;
    }
    else if (nomArme== "bouclier")
    {

                Degats = 7;
                niveau = 1;
    }
    else if (nomArme== "batonMagique")
   {
                Degats = 78;
                niveau = 1;

    }
    else if (nomArme== "arbalete")
   {
        Degats = 87;
        niveau =1;

    }
    else if (nomArme== "gourdin")
   {

                Degats = 35;
                niveau =1;

    }
    else if (nomArme== "livreDeSort")
   {

               Degats = 56;
                niveau =1;

    }
    else if (nomArme==  "epee")
   {
                Degats = 75;
                niveau =1;

    }
    else
    {
        Degats=1;
        niveau=1;
    }


}

int Arme::getdegats()
{
    return this->Degats;
}

int Arme::getNiveau()
{
    return this->niveau;
}

