//
// Created by RLO on 2020-05-02.
//

#ifndef HAMSTERRANCH_FACTURABLEFRAISFIXE_H
#define HAMSTERRANCH_FACTURABLEFRAISFIXE_H

#include "ElementFacturable.h"

class FacturableFraisFixe : public ElementFacturable {
public:

    static int entreeSpa;
    int entreeGym;
    static int choix;

    // constructeur par défaut
    FacturableFraisFixe();
    //destructeur
    ~FacturableFraisFixe();

    //methode ajoutEntreeSpa();

    //methode ajoutEntreeGym();
    int ajoutGym(int choix){
        if (choix == 1) {
            return entreeGym = 50;
            std::cout << "\t\t\tAccès au gym ajouté!!";
        } else {
            return entreeGym = 0;
            std::cout << "\t\t\t Accès au gym non-ajouté!!";
        }
    }

    //methode calcTax2();
    double calcTax2(int a, int b){
        return 0;
    };
};


#endif //HAMSTERRANCH_FACTURABLEFRAISFIXE_H
