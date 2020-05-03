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
                std::cout <<"\t\t\t" << nbr << " nuitées ajoutées!!\n";
                sousTotal = nbr * 100;
                return sousTotal;
    }// end ajoutNuitee

    //methode ajoutRepas();
    int ajoutRepas(int nbr) {
    //try...catch erreur nbrRepas <= nbrNuits
        int sousTotal;
            std::cout <<"\t\t\t" << nbr << " repas ajoutées!!\n";
            sousTotal = nbr * 20;
            return sousTotal;
    }// end ajoutRepas

    //methode getTaxeAdd()
    double getTaxeHebrg(){
        return 0.05;
    }

    // validate input : erreur valeur non-numérique
    int validInput(std::string userInput){
        int resultat =0;
        try {
            resultat = std::stoi(userInput);
        } catch (...){
            throw "Erreur: Entrer un valeur numérique.\n";
        }
        return resultat;
    }
};


#endif //HAMSTERRANCH_FACTURABLEPARUNITE_H
