#include "aventurier.h"

Aventurier::Aventurier()
{
}

Aventurier::~Aventurier()
{

}

void Aventurier::setPrenom(std::string s_prenom)
{
    this->prenom = s_prenom;
}

std::string Aventurier::getPrenom()
{
    return this->prenom;
}

void Aventurier::setExperience(int exp)
{
    this->experience = exp;
}

int Aventurier::getExperience()
{
    return this->experience;
}

void Aventurier::setPV(int pv)
{
    this->PV = pv;
}

int Aventurier::getPV()
{
    return this->PV;
}

void Aventurier::setNiveau(int niveau)
{
    this->niveau = niveau;
}

int Aventurier::getNiveau()
{
    return this->niveau;
}
