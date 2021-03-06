#ifndef TEMPLIER_H
#define TEMPLIER_H

#include "aventurier.h" // classe mere
#include "arme.h"       // objet instancié dans cette classe

/* Classe Templier : elle herite de la classe Aventurier.
 * Cette appartient au namespace "Physique"
*/

namespace Physique { // on ajoute une classe dans le namespace physique
class Templier: public Aventurier //le necromencien hérite de la classe Aventurier
{
public:
    Templier();         //constructeur
    virtual ~Templier();//destructeur
    void setVitesse(int vitesse);// accesseur à l'attribut vitesse
    int getVitesse();

    void setResistanceMagie(int RM);// accesseur à l'attribut resistanceMagie
    int getResistanceMagie();

    void setResistancePhysique(int RP);// accesseur à l'attribut resistancePhysique
    int getResistancePhysique();

    void choixArme(); // methode pour choisir l'arme du necromencien parmis les deux choix

    void spec(std::ostream &flux); // methode d'affichage des different attribut et objet
    virtual void choixPrenom(); //methode virtuelle

    int getDegats(); // acceseur à l'attribut degats de l'objet Arme


private:
    Arme m_arme;// objet arme
    //Attributs caracteristiques au templier
    unsigned int m_vitesse;
    unsigned int m_resistanceMagie;
    unsigned int m_resistancePhysique;
    unsigned int force;

    std::string arme1; // choix d'arme n°1
    std::string arme2;// choix d'arme n°2
    std::string armeChoisie;// arme choisi dans la methode choixArme

};
};


#endif // TEMPLIER_H
