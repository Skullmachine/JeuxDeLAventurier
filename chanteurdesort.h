#ifndef CHANTEURDESORT_H
#define CHANTEURDESORT_H

#include "aventurier.h" // classe mere
#include "arme.h" // objet instancié dans cette classe

/* Classe Chanteur de sort : elle herite de la classe Aventurier.
 * Cette appartient au namespace "Magie"
*/

namespace Magie {// on ajoute une classe dans le namespace Magie
class ChanteurDeSort: public Aventurier//le chanteurDeSort hérite de la classe Aventurier
{
public:
    ChanteurDeSort();
    virtual ~ChanteurDeSort();

    //**1**
    void setVitesse(int vitesse);// accesseur à l'attribut vitesse
    int getVitesse();

    void setResistanceMagie(int RM);// accesseur à l'attribut resistanceMagie
    int getResistanceMagie();

    void setResistancePhysique(int RP);// accesseur à l'attribut resistancePhysique
    int getResistancePhysique();

    void choixArme();// methode pour choisir l'arme du chanteur de sort parmis les deux choix

    void spec(std::ostream &flux);// methode d'affichage des different attribut et objet
    virtual void choixPrenom();//methode virtuelle

    int getDegats();// acceseur à l'attribut degats de l'objet Arme

private:
    Arme m_arme;// objet arme
    unsigned int m_vitesse;//Attributs caracteristiques au chanteur de sort
    unsigned int m_resistanceMagie;
    unsigned int m_resistancePhysique;
    unsigned int intelligence;

    std::string arme1;// choix d'arme n°1
    std::string arme2;// choix d'arme n°2
    std::string armeChoisie;// arme choisi dans la methode choixArme

};
};


#endif // CHANTEURDESORT_H
