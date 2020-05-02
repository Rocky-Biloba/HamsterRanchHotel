//
// Created by RLO on 2020-05-02.
//

#ifndef HAMSTERRANCH_FACTURABLEPARUNITE_H
#define HAMSTERRANCH_FACTURABLEPARUNITE_H


#include "ElementFacturable.h"

class FacturableParUnite : public ElementFacturable {
public:

    static int choix;

    // constructeur par défaut
    FacturableParUnite(){};
    //destructeur
    ~FacturableParUnite(){};

    //methode ajoutNuit();
    int ajoutNuit(int nbr) {
        int sousTotal;
        if(sousTotal == 0){
                std::cout <<"\t\t\t" << nbr << " nuitées ajoutées!!\n";
                sousTotal = nbr * 100;
                return sousTotal;

        }else{
            std::cout <<"\t\t\t Il y as déjà les nuitées sur cette facture!!\n";
        };
    }// end ajoutNuitee

    //methode ajoutRepas();
    int ajoutRepas(int nbr) {
        int sousTotal;
            std::cout <<"\t\t\t Erreur: Il n'y as pas de nuitées sur cette facture.\n";
            sousTotal = nbr * 20;
            return sousTotal;
            //std::cout <<"\t\t\t Erreur: Il n'y as pas de nuitées sur cette facture.\n";

    }// end ajoutRepas

    //methode calcTax2();
    double calcTax2(int a, int b){
        return 0;
    };//end calcTax2
};


#endif //HAMSTERRANCH_FACTURABLEPARUNITE_H
