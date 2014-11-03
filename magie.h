#ifndef MAGIE_H
#define MAGIE_H

#include "aventurier.h"

class Magie: public Aventurier
{
public:
    Magie();
    ~Magie();

    void setIntelligence(int point);

    int getIntelligence();

private:
    unsigned int intelligence;
};

#endif // MAGIE_H
