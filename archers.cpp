#include "archers.h"

Physique::Archers::Archers()
{
    this->arme1 = "arc";
    this->arme2 = "arbalete";
    this->setExperience(0);
    this->force = 10;
    this->m_resistanceMagie = 10;
    this->m_resistancePhysique = 20;
    this->m_vitesse = 6;
    this->setNiveau(0);
    this->setPrenom("Prenom");
    this->setPV(50);

    choixPrenom();
    choixArme();
}
Physique::Archers::~Archers()
{

}

void Physique::Archers::setVitesse(int vitesse)
{
    this->m_vitesse = vitesse;

}

int Physique::Archers::getVitesse()
{
    return this->m_vitesse;
}

void Physique::Archers::setResistanceMagie(int RM)
{
    this->m_resistanceMagie=RM;
}
int Physique::Archers::getResistanceMagie()
{
    return this->m_resistanceMagie;
}

void Physique::Archers::setResistancePhysique(int RP)
{
    this->m_resistancePhysique = RP;
}

int Physique::Archers::getResistancePhysique()
{
    return this->m_resistancePhysique;
}

void Physique::Archers::choixArme()
{
    int choix=0;

    std::cout<< "Choix de l'arme : "<<std::endl<<"1."<<this->arme1<<std::endl<<"2."<<this->arme2<<std::endl;
    std::cout<<"choix: ";
    std::cin>>choix;

    if(choix ==1)
    {
        this->m_arme.setArme(this->arme1);

        this->armeChoisie = "Arc";
    }

    else
    {
        this->m_arme.setArme(this->arme2);

        this->armeChoisie="Arbalete";
    }
    std::cout<<std::endl<<std::endl;
}

void Physique::Archers::spec(std::ostream &flux)
{
    flux<<"***************************************************************"<<std::endl;
    flux<< "specification de l'archer :"<<std::endl;
    flux<<"prenom : "<<this->getPrenom()<<std::endl;
    flux<<"EXP : "<<this->getExperience()<<std::endl;
    flux<<"PV : "<<this->getPV()<<std::endl;
    flux<<"Niveau : "<<this->getNiveau()<<std::endl;
    flux<<"Point de force : "<<this->force<<std::endl;
    flux<<"Vitesse : "<<this->m_vitesse<<std::endl;
    flux<<"Resistance Magie : "<<this->m_resistanceMagie<<std::endl;
    flux<<"Resistance Physique : "<<this->m_resistancePhysique<<std::endl;
    flux<<std::endl;
    flux<<"ARME : "<<this->armeChoisie<<std::endl;
    flux<<"Degats : "<<this->m_arme.getdegats()<<std::endl;
    flux<<"Niveau arme : "<<this->m_arme.getNiveau()<<std::endl;
    flux<<"***************************************************************"<<std::endl;
    flux<<std::endl<<std::endl;
}

void Physique::Archers::choixPrenom()
{
    std::string prenom;

    std::cout<<"ARCHERS"<<std::endl;
    std::cout<<"Choix d'un prenom : ";
    std::cin>>prenom;

    this->setPrenom(prenom);
    std::cout<<std::endl;

}

int Physique::Archers::getDegats()
{
    return this->m_arme.getdegats();
}
