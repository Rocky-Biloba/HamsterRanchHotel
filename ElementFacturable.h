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
    double calcTax1(int nuitees, int repas, int spa, int gym  ){
        double addition = 1.08 * (nuitees + repas + spa + gym);
        return addition;
    }// end calcTax1

    //methode virtuelle taxe hébergement @ 5% OU taxe frais fixe @ 7%
    virtual double calcTax2(){
        return 0;
    }
};


#endif //HAMSTERRANCH_ELEMENTFACTURABLE_H
