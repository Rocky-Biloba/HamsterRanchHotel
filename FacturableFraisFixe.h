//
// Created by RLO on 2020-05-02.
//
#ifndef HAMSTERRANCH_FACTURABLEFRAISFIXE_H
#define HAMSTERRANCH_FACTURABLEFRAISFIXE_H

#include "ElementFacturable.h"

class FacturableFraisFixe : public ElementFacturable {
public:

    static int choix;

    // constructeur par défaut
    FacturableFraisFixe(){};
    //destructeur
    ~FacturableFraisFixe(){};

    //methode ajoutEntreeSpa();
    int ajoutSpa(int choix) {
        if (choix == 1) {
            std::cout << "\t\t\tAccès au spa ajouté!!\n";
            return 50;
        } else {
            std::cout << "\t\t\t Accès au spa non-ajouté!!\n";
            return 0;
        }
    }

    //methode ajoutEntreeGym();
    int ajoutGym(int choix){
        if (choix == 1) {
            std::cout << "\t\t\tAccès au gym ajouté!!\n";
            return  50;
        } else {
            std::cout << "\t\t\t Accès au gym non-ajouté!!\n";
            return 0;
        }
    }// end ajoutEntreeGym

    //methode calcTax2();
    double calcTax2(int a, int b){
        return 0;
    };
};


#endif //HAMSTERRANCH_FACTURABLEFRAISFIXE_H
