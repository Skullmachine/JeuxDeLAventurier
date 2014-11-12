#ifndef AVENTURIER_H
#define AVENTURIER_H

//bibliotheques standarts
#include <iostream>
#include <string>


// cette classe est la classe mere.
class Aventurier
{
public:
    Aventurier();// constructeur
    virtual ~Aventurier();// destructeur

    void setPrenom(std::string s_prenom);// accesseurs attribut prenom
    std::string getPrenom();

    void setExperience(int exp);//accesseurs attribut experience
    int getExperience();

    void setPV(int pv);// accesseur attribut PV
    int getPV();

    void setNiveau(int niveau);// accesseur attribut niveau
    int getNiveau();

    virtual void choixPrenom() =0; //methode virtuelle pure, notre classe est donc abstraite

private:
    // Attributs généraux pour chaque classe fille
    std::string prenom;
    unsigned int experience;
    unsigned int PV;
    unsigned int niveau;
};

#endif // AVENTURIER_H
