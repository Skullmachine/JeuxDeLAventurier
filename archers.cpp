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
    std::cout<<"ARCHERS"<<std::endl;
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

void Physique::Archers::spec()
{
    std::cout<<"***************************************************************"<<std::endl;
    std::cout<< "specification de l'archer :"<<std::endl;
    std::cout<<"prenom : "<<this->getPrenom()<<std::endl;
    std::cout<<"EXP : "<<this->getExperience()<<std::endl;
    std::cout<<"PV : "<<this->getPV()<<std::endl;
    std::cout<<"Niveau : "<<this->getNiveau()<<std::endl;
    std::cout<<"Point de force : "<<this->force<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Arme : "<<this->armeChoisie<<std::endl;
    std::cout<<"Vitesse : "<<this->m_vitesse<<std::endl;
    std::cout<<"Resistance Magie : "<<this->m_resistanceMagie<<std::endl;
    std::cout<<"Resistance Physique : "<<this->m_resistancePhysique<<std::endl;
    std::cout<<"***************************************************************"<<std::endl;
     std::cout<<std::endl<<std::endl;
}
