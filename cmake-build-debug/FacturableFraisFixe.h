//
// Created by RLO on 2020-05-02.
//

#ifndef HAMSTERRANCH_FACTURABLEFRAISFIXE_H
#define HAMSTERRANCH_FACTURABLEFRAISFIXE_H

#include "../ElementFacturable.h"

class FacturableFraisFixe : public ElementFacturable {
public:
    static int entreeSpa;
    static int entreeGym;

    // constructeur par défaut
    FacturableFraisFixe();
    //destructeur
    ~FacturableFraisFixe();

    //methode ajoutEntreeSpa();

    //methode ajoutEntreeGym();

    //methode calcTax2();
    double calcTax2(){

    };

};


#endif //HAMSTERRANCH_FACTURABLEFRAISFIXE_H
