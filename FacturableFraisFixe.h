//
// Created by RLO on 2020-05-02.
//

#ifndef HAMSTERRANCH_FACTURABLEFRAISFIXE_H
#define HAMSTERRANCH_FACTURABLEFRAISFIXE_H

#include "ElementFacturable.h"

class FacturableFraisFixe : public ElementFacturable {
public:

    static int entreeSpa;
    static int entreeGym;
    static int choix;


    // constructeur par défaut
    FacturableFraisFixe();
    //destructeur
    ~FacturableFraisFixe();

    //methode ajoutEntreeSpa();

    //methode ajoutEntreeGym();
    void ajoutGym(int choix){
        if (choix == 1) {
            entreeGym = 50;
            std::cout << "\t\t\tAccès au gym ajouté!!";
        } else {
            entreeGym = 0;
            std::cout << "\t\t\t Accès au gym non-ajouté!!";
        }
    }
    //methode calcTax2();
    double calcTax2(int a, int b){

    };

};


#endif //HAMSTERRANCH_FACTURABLEFRAISFIXE_H
