#ifndef AVENTURIER_H
#define AVENTURIER_H

#include <iostream>
#include <string>

class Aventurier
{
public:
    Aventurier();
    ~Aventurier();

    void setPrenom(std::string s_prenom);
    std::string getPrenom();

    void setExperience(int exp);
    int getExperience();

    void setPV(int pv);
    int getPV();

    void setNiveau(int niveau);
    int getNiveau();


private:
    std::string prenom;
    unsigned int experience;
    unsigned int PV;
    unsigned int niveau;
};

#endif // AVENTURIER_H
