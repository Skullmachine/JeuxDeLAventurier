#ifndef ARME_H
#define ARME_H

#include "aventurier.h"

class Arme
{
public:
    Arme();
    ~Arme();

    void setArme(std::string nomArme);
    int getdegats();

    void choixArme(std::string nomPerso);



private:
    unsigned int Degats;
    unsigned int niveau;
};

#endif // ARME_H
