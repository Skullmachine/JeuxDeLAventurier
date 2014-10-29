#ifndef AVENTURIER_H
#define AVENTURIER_H

#include <iostream>
#include <string>

virtual class Aventurier
{
public:
    Aventurier();
    ~Aventurier();

private:
    std::string prenom;
    unsigned int experience;
    unsigned int PV;
    unsigned int niveau;
};

#endif // AVENTURIER_H
