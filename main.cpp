#include <iostream>
#include <map>
#include <cstdlib>
#include <iomanip>
#include "ElementFacturable.h"
#include "FacturableFraisFixe.h"
#include "FacturableParUnite.h"

using std::cin;
using std::cout;
using std::endl;

#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define MAGENTA "\033[35m"      /* Magenta */
#define YELLOW  "\033[33m"      /* Yellow */
#define WHITE   "\033[37m"      /* White */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main() {
    int nbrNuits;
    int nbrRepas;
    bool nuitsAjoutes = false;
// création d'un conteneur pour les elements d'un facture
std::map<std::string, int> facture;
facture["Nuitées"] = 0;
facture["Repas"] = 0;
facture["Gym"] = 0;
facture["Spa"] = 0;


FacturableFraisFixe FraisFixe;
FacturableParUnite ParUnite;
ElementFacturable  ElemFact;

    int choix = 0;
    do {
        // header Bienvenue
        cout << YELLOW << "\n\n\t\t  *" << WHITE << "*" << BOLDMAGENTA << "*         Bienvenue au Hamster Ranch!          *"
             << WHITE << "*" << YELLOW << "*\t\t  " << endl;
        cout << MAGENTA << "\t \t ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ H O T E L ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
        cout << YELLOW << "\t\t *" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*"
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA << "*"
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA << "*"
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA << "*"
             << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
             << BOLDMAGENTA
             << "*" << endl; // end header Bienvenue

        cout << BOLDMAGENTA << "\t\t\t         Menu          " << endl;
        cout << MAGENTA << "\t        1) Ajouter les nuitées" << endl;
        cout << "\t        2) Ajouter les repas" << endl;
        cout << "\t        3) Ajouter accès au gym" << endl;
        cout << "\t        4) Ajouter accès au spa" << endl;
        cout << "\t        5) Afficher la facture" << endl;
        cout << "\t        6) Quitter" << endl;
        cin >> choix;

        switch (choix) {
            case 1: {
                std::string userInput;
                int totalNuits;

                cout << BOLDMAGENTA << "\t\t Ajouter les nuitées          " << endl;
                cout << MAGENTA << "Entrez le nombre de nuitées à ajouter : ";
                cin >> userInput;
                try{
                    // verifie que userInput est numérique
                    nbrNuits = ParUnite.validInput(userInput);
                    // verifie que userInput < 0
                    if (nbrNuits <= 0) {
                        cout << YELLOW << "\t\t Erreur : Saisir un valeur plus grande que zéro." <<endl;
                        // verifie qu'il n'y as pas des nuits déjà existantes
                    } else if(nuitsAjoutes) {
                        cout << YELLOW << "\t\t Erreur : cette facture contient des nuitées déjà." <<endl;
                    } else{
                        // calculation 100$ par nuit
                        totalNuits = ParUnite.ajoutNuit(nbrNuits);
                        facture["Nuitées"] = totalNuits;
                        nuitsAjoutes = true;
                    }
                }
                catch (const char* msg){
                    std::cout << YELLOW << msg << endl;
                }

            }
                break;
            case 2: {
                std::string userInput;
                int totalRepas = 0;
                cout << BOLDMAGENTA << "\t\t Ajouter les repas          " << endl;
                cout << MAGENTA << "Entrez le nombre de repas à ajouter : ";
                cin >> userInput;
                // verification que les nuitees existe
                if (!nuitsAjoutes) {
                    cout << YELLOW << "\t\t Erreur : Ajouter les NUITÉES avant de ajouter les repas." << endl;
                    break;
                }
                try{
                    // validate input : erreur valeur non-numérique
                    nbrRepas = ParUnite.validInput(userInput);
                    // validate input : erreur valeur < 0
                    if (nbrRepas < 0) {
                        //validate nbrRepas <= nbrNuits
                        cout << YELLOW << "\t\t Erreur : Saisir un valeur plus grande que zéro." <<endl;
                    } else {
                        totalRepas = ParUnite.ajoutRepas(nbrRepas);
                        facture["Repas"] = totalRepas;
                    }
                }
                catch(const char* msg){
                        std::cout << YELLOW << msg << endl;
                }
                // add verification totalRepas <= totalNuits;
            }
                break;
            case 3: {
                int entreeGym = 0;
                int choixGym = 0;
                std::string userInput = "";
                cout << BOLDMAGENTA << "\t\t Ajouter un accès au GYM, oui ou non?\n\t\t\t O/N ?" << endl;
                cin >> userInput;
                // verification que les nuitees existe
                if (!nuitsAjoutes) {
                    cout << YELLOW << "\t\t Erreur : Ajouter les NUITÉES avant de ajouter l'accès au gym." << endl;
                    break;
                }
                try {
                    // valider Input
                    choixGym = FraisFixe.validInput(userInput);
                    if (choixGym == 1) {
                        // add verification que les nuitees existe
                        entreeGym = 50;
                        facture["Gym"] = entreeGym;
                        std::cout << "\t\t\tAccès au GYM ajouté!!\n";

                    } else {

                        entreeGym = 0;
                        facture["Gym"] = entreeGym;
                        std::cout << "\t\t\tAccès au GYM non-ajouté!!\n";
                    }
                }
                catch(const char* msg) {
                    std::cout << YELLOW << msg << endl;
                }
            }
                break;
        case 4: {
            int entreeSpa = 0;
            int choixSpa = 0;
            std::string userInput = "";
            cout << BOLDMAGENTA << "\t\t Ajouter un accès au SPA, oui ou non?\n\t\t\t O/N ?" << endl;
            cin >> userInput;
            // verification que les nuitees existe
            if (!nuitsAjoutes) {
                cout << YELLOW << "\t\t Erreur : Ajouter les NUITÉES avant de ajouter l'accès au spa." << endl;
                break;
            }
            try{
                // valider input
                choixSpa = FraisFixe.validInput(userInput);
                if (choixSpa == 1){
                    entreeSpa = 75;
                    facture["Spa"] = entreeSpa;
                    std::cout << "\t\t\tAccès au SPA ajouté!!\n";

                }else{
                    entreeSpa = 0;
                    facture["Spa"] = entreeSpa;
                    std::cout << "\t\t\tAccès au SPA non-ajouté!!\n";
                }
            }
            catch(const char* msg) {
                std::cout << YELLOW << msg << endl;
            }
        }
        break;
            case 5: {
                double achats = 0;
                double hebergement = 0;
                cout << BOLDMAGENTA << "\t\t Afficher la facture..." << endl;
                int sousTotalNuits = facture.at("Nuitées");
                int sousTotalRepas = facture.at("Repas");
                int sousTotalGym = facture.at("Gym");
                int sousTotalSpa = facture.at("Spa");

                // totale de tous les achats, avant taxe
                achats = (double)sousTotalNuits + (double)sousTotalRepas + (double)sousTotalGym + (double)sousTotalSpa;
                // totale des nuitées, avant taxe
                hebergement = (double)sousTotalNuits;
                // afficher taxe de vente de base @ 8%
                double sousTotalTaxesDeBase = achats * ElemFact.getTaxeBase();
                // afficher taxe additionelle @ 7%
                double sousTotalTaxesAdd = achats * ElemFact.getTaxeAdd();
                // afficher taxe de hébergement de base @ 5%
                double sousTotalTaxeHebrg = hebergement * ParUnite.getTaxeHebrg();

                // calculer le totale, taxes incluses
                double totale = achats + sousTotalTaxesDeBase + sousTotalTaxesAdd + sousTotalTaxeHebrg;

                // afficher en format FACTURE
                cout << YELLOW << "\t\t *" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << endl;
                cout << YELLOW << "\n\n\t\t  *" << WHITE << "*" << BOLDMAGENTA << "*             Hamster Ranch Hotel!          *"
                     << WHITE << "*" << YELLOW << "*\t\t  " << endl;
                cout << MAGENTA << "\t \t ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ F A C T U R E ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
                cout << YELLOW << "\t\t *" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << endl;
                cout << MAGENTA << "\n\t Nuitées , " << nbrNuits<< " @ 100$\t:\t" << sousTotalNuits << "$"<< endl;
                cout << "\t Repas , " << nbrRepas<< " @ 20$\t:\t" << sousTotalRepas << "$"<< endl;
                cout << "\t Accès au GYM\t\t:\t" << sousTotalGym << "$"<< endl;
                cout << "\t Accès au SPA\t\t:\t" << sousTotalSpa << "$"<< endl;
                cout << "\t\tSous-totale\t\t:\t"<< achats << "$"<< endl;
                cout << "\n\t+ Taxe de vente de base @ 8%\t:\t"<< sousTotalTaxesDeBase << "$"<< endl;
                cout << "\t+ Taxe additionelle @ 7%\t\t:\t"<< sousTotalTaxesAdd << "$"<< endl;
                cout << "\t+ Taxe de hébergement @ 5%\t\t:\t"<< sousTotalTaxeHebrg << "$"<< endl;
                cout << "\t  (nuitées seulement)" << endl;
                cout << "\t\t\t\t\t\t\t Totale : "<< totale << "$"<< endl;
                cout << YELLOW << "\n\n\t\t\t  *" << WHITE << "*" << BOLDMAGENTA << "*               M E R C I              *" << WHITE << "*" << YELLOW << "*\t\t  " << endl;
                cout << YELLOW << "\t\t *" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA << "*"
                     << "*" << YELLOW << "*" << WHITE << "*" << BOLDMAGENTA << "*" << YELLOW << "*" << WHITE << "*"
                     << BOLDMAGENTA
                     << "*" << endl;
            }
                break;
    }
}while (choix != 6);
std::cout << "Bye bye !" << std::endl;
        }

