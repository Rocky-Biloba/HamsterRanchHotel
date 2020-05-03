//
// Created by RLO on 2020-05-02.
//

#ifndef HAMSTERRANCH_ELEMENTFACTURABLE_H
#define HAMSTERRANCH_ELEMENTFACTURABLE_H

#include <iostream>
#include <string>


class ElementFacturable {
public:
    // constructeur par défaut
    ElementFacturable(){};
    //destructeur
    virtual ~ElementFacturable(){};

    //methode taxe vente de base @ 8%
    double getTaxeBase(){
            return 0.08;
    }

    //methode taxe additionnelle @ 7%
    double getTaxeAdd(){
        return 0.07;
    }
    //methode virtuelle taxe hébergement @ 5% sur nuits + repas (ParUnité)
    virtual double getTaxeHebrg(){
        return 0;
    }


};


#endif //HAMSTERRANCH_ELEMENTFACTURABLE_H
