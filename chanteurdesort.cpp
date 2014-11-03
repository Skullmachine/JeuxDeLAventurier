#include "chanteurdesort.h"

ChanteurDeSort::ChanteurDeSort()
{
    this->arme1 = "livreDeSort";
    this->arme2 = "batonMagique";
    this->setExperience(0);
    this->setIntelligence(0);
    this->m_resistanceMagie = 40;
    this->m_resistancePhysique = 10;
    this->m_vitesse = 3;
    this->setNiveau(0);
    this->setPrenom("Prenom");
    this->setPV(50);

    choixArme();
}
ChanteurDeSort::~ChanteurDeSort()
{

}

void ChanteurDeSort::setVitesse(int vitesse)
{
    this->m_vitesse = vitesse;

}

int ChanteurDeSort::getVitesse()
{
    return this->m_vitesse;
}

void ChanteurDeSort::setResistanceMagie(int RM)
{
    this->m_resistanceMagie=RM;
}
int ChanteurDeSort::getResistanceMagie()
{
    return this->m_resistanceMagie;
}

void ChanteurDeSort::setResistancePhysique(int RP)
{
    this->m_resistancePhysique = RP;
}

int ChanteurDeSort::getResistancePhysique()
{
    return this->m_resistancePhysique;
}

void ChanteurDeSort::choixArme()
{
    int choix=0;

    std::cout<< "Choix de l'arme : "<<std::endl<<"1."<<this->arme1<<std::endl<<"2."<<this->arme2<<std::endl;
    std::cout<<"choix: ";
    std::cin>>choix;

    if(choix ==1)
    {
        this->m_arme.setArme(this->arme1);

        this->armeChoisie = "Livre de sort";
    }

    else
    {
        this->m_arme.setArme(this->arme2);

        this->armeChoisie="Baton magique";
    }

}

void ChanteurDeSort::spec()
{
    std::cout<< "specification du chanteur de sort :"<<std::endl;
    std::cout<<"prenom : "<<this->getPrenom()<<std::endl;
    std::cout<<"EXP : "<<this->getExperience()<<std::endl;
    std::cout<<"PV : "<<this->getPV()<<std::endl;
    std::cout<<"Niveau : "<<this->getNiveau()<<std::endl;
    std::cout<<"Point d intelligence : "<<this->getIntelligence()<<std::endl;
    std::cout<<"Arme : "<<this->armeChoisie<<std::endl;
    std::cout<<"Vitesse : "<<this->m_vitesse<<std::endl;
    std::cout<<"Resistance Magie : "<<this->m_resistanceMagie<<std::endl;
    std::cout<<"Resistance Physique : "<<this->m_resistancePhysique<<std::endl;


}
