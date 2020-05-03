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


    //valider input string et retour valeur int
    int validInput(std::string userInput){
        if ((userInput == "o") || (userInput == "O")){
            return 1;
        } else if ((userInput == "N")||(userInput == "n")){
           return 0;
        } else{
            throw "\t\t Erreur : Saisir un 'o' pour 'oui' ou un 'n' pour 'non'...";
        }
    }
};


#endif //HAMSTERRANCH_FACTURABLEFRAISFIXE_H
