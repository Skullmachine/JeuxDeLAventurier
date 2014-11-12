#include <iostream>

#include "operateurs.h"

/* Dans ce template on recupere deux types differents de classe (dans notre cas) et on soustrait
* les PV d'un perso avec les points de degats d'un deuxieme
* */
template<typename Type1, typename Type2> void Attaquer(Type1 &attaquant, Type2 &attaque)
{ // l'attaquant attaque l'attaqué
    int tmp = attaque.getPV() - attaquant.getDegats();
    attaque.setPV(tmp);
}




int main()
{
    int sortir = 1;
    int choix =0;




    do
    {
        std::cout<<"Choix Presentation :"<<std::endl;
        std::cout<<"********************************"<<std::endl;
        std::cout<<"*                              *"<<std::endl;
        std::cout<<"* 1.Specifications personnages *"<<std::endl;
        std::cout<<"* 2.Sortie                     *"<<std::endl;
        std::cout<<"*                              *"<<std::endl;
        std::cout<<"********************************"<<std::endl;

        choix=0;
        std::cin>>choix;

        if (choix==1)
        {


            // on cree un objet chanteur de sort
            Magie::ChanteurDeSort chanteur;
            std::cout<<chanteur;

            // ... un archer
            Physique::Archers archer;
            std::cout<<archer;

            std::cout<< "le chanteur attaque l'archer"<<std::endl;
            Attaquer(chanteur, archer);
            std::cout<<"PV archer: "<<archer.getPV()<<std::endl<< std::endl;// on affiche les nouveau PV

            // on cree un necro
            Magie::Necromancien necro;
            std::cout<<necro;

            // ... un templier
            Physique::Templier temp;
            std::cout<<temp;

        }

        else
            sortir=0;
    }while(sortir);






    return 0;
}
