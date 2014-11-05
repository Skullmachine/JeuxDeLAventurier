#include <iostream>

#include "operateurs.h"


int main()
{
    int sortir = 1;

    do
    {
        std::cout<<"Choix Présentation :"<<std::endl;
        std::cout<<"********************************"<<std::endl;
        std::cout<<"*                              *"<<std::endl;
        std::cout<<"* 1.Specifications personnages *"<<std::endl;
        std::cout<<"* 2.Sortie                     *"<<std::endl;
        std::cout<<"*                              *"<<std::endl;
        std::cout<<"********************************"<<std::endl;

        int choix =0;
        std::cin>>choix;

        if (choix==1)
        {
            Magie::ChanteurDeSort chanteur;
           std::cout<<chanteur;

            Physique::Archers archer;
            std::cout<<archer;

            Magie::Necromancien necro;
            std::cout<<necro;

            Physique::Templier temp;
            std::cout<<temp;
        }

        else
            sortir=0;
    }while(sortir);






    return 0;
}
