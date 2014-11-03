#include "necromancien.h"

Magie::Necromancien::Necromancien()
{
    this->arme1 = "cadavres";
    this->arme2 = "batonMagique";
    this->setExperience(0);
    this->intelligence = 10;
    this->m_resistanceMagie = 40;
    this->m_resistancePhysique = 10;
    this->m_vitesse = 3;
    this->setNiveau(0);
    this->setPrenom("Prenom");
    this->setPV(50);

    choixArme();
}

Magie::Necromancien::~Necromancien()
{

}

void Magie::Necromancien::setVitesse(int vitesse)
{
    this->m_vitesse = vitesse;

}

int Magie::Necromancien::getVitesse()
{
    return this->m_vitesse;
}

void Magie::Necromancien::setResistanceMagie(int RM)
{
    this->m_resistanceMagie=RM;
}
int Magie::Necromancien::getResistanceMagie()
{
    return this->m_resistanceMagie;
}

void Magie::Necromancien::setResistancePhysique(int RP)
{
    this->m_resistancePhysique = RP;
}

int Magie::Necromancien::getResistancePhysique()
{
    return this->m_resistancePhysique;
}

void Magie::Necromancien::choixArme()
{
    int choix=0;
    std::cout<<"NECROMANCIEN"<<std::endl;
    std::cout<< "Choix de l'arme : "<<std::endl<<"1."<<this->arme1<<std::endl<<"2."<<this->arme2<<std::endl;
    std::cout<<"choix: ";
    std::cin>>choix;

    if(choix ==1)
    {
        this->m_arme.setArme(this->arme1);

        this->armeChoisie = "Cadavres";
    }

    else
    {
        this->m_arme.setArme(this->arme2);

        this->armeChoisie="Baton magique";
    }
    std::cout<<std::endl<<std::endl;
}

void Magie::Necromancien::spec()
{
    std::cout<<"***************************************************************"<<std::endl;
    std::cout<< "specification du chanteur de sort :"<<std::endl;
    std::cout<<"prenom : "<<this->getPrenom()<<std::endl;
    std::cout<<"EXP : "<<this->getExperience()<<std::endl;
    std::cout<<"PV : "<<this->getPV()<<std::endl;
    std::cout<<"Niveau : "<<this->getNiveau()<<std::endl;
    std::cout<<"Point d intelligence : "<<this->intelligence<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Arme : "<<this->armeChoisie<<std::endl;
    std::cout<<"Vitesse : "<<this->m_vitesse<<std::endl;
    std::cout<<"Resistance Magie : "<<this->m_resistanceMagie<<std::endl;
    std::cout<<"Resistance Physique : "<<this->m_resistancePhysique<<std::endl;

    std::cout<<"***************************************************************"<<std::endl;
     std::cout<<std::endl<<std::endl;
}
