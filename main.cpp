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
// création d'un conteneur pour les elements d'un facture
std::map<std::string, int> facture;
//FacturableFraisFixe* services = new FacturableFraisFixe();
FacturableFraisFixe FraisFixe;
FacturableParUnite ParUnite;

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
                int userInput = 0;
                int totalNuits = 0;
                int nuitee;
                cout << BOLDMAGENTA << "\t\t Ajouter les nuitées          " << endl;
                cout << MAGENTA << "Entrez le nombre de nuitées à ajouter : ";
                cin >> userInput;
                if (userInput < 0) {
                    cout << YELLOW << "\t\t Erreur : Saisir un valeur plus grande que zéro." <<endl;
                } else {
                   totalNuits = ParUnite.ajoutNuit(userInput);
                    std::string msgNuits = "Nuitées";
                    std::pair<std::string, int> nuit_paire(msgNuits, totalNuits);
                    facture.insert(nuit_paire);
                }

                // add verification ErrValeur < 0
                // add verification doesn't allow overwrite

            }
                break;
            case 2: {
                int userInput = 0;
                int totalRepas = 0;
                int repas;
                cout << BOLDMAGENTA << "\t\t Ajouter les repas          " << endl;
                cout << MAGENTA << "Entrez le nombre de repas à ajouter : ";
                cin >> userInput;
                if (userInput < 0) {
                    cout << YELLOW << "\t\t Erreur : Saisir un valeur plus grande que zéro." <<endl;
                } else {
                    totalRepas = ParUnite.ajoutRepas(userInput);
                    std::string msgRepas = "Repas";
                    std::pair<std::string, int> repas_paire(msgRepas, totalRepas);
                    facture.insert(repas_paire);
                }
                // add verification ErrValeur < 0

            }
                break;
            case 3: {
                std::string userInput = "";
                cout << BOLDMAGENTA << "\t\t Ajouter un accès au GYM, oui ou non?\n\t\t\t O/N ?" << endl;
                cin >> userInput;
                if ((userInput == "o") || (userInput == "O")){
                    //try?
                    int entreeGym = 0;
                    entreeGym = FraisFixe.ajoutGym(1);
                    std::string msgEntreeGym = "Gym";
                    std::pair<std::string, int> gym_paire(msgEntreeGym, entreeGym);
                    facture.insert(gym_paire);
                } else if ((userInput == "N")||(userInput == "n")){
                    FraisFixe.ajoutGym(0);
                } else{
                    cout << YELLOW << "\t\t Erreur : Saisir un 'o' pour 'oui' ou un 'n' pour 'non'..." <<endl;
                }
                // add verification que les nuitees existe
            }
                break;
        case 4: {
            std::string userInput = "";
            cout << BOLDMAGENTA << "\t\t Ajouter un accès au SPA, oui ou non?\n\t\t\t O/N ?" << endl;
            cin >> userInput;
            if ((userInput == "o") || (userInput == "O")){
                //try?
                int entreeSpa = 0;
                entreeSpa = FraisFixe.ajoutSpa(1);
                std::string msgEntreeSpa = "Spa";
                std::pair<std::string, int> spa_paire(msgEntreeSpa, entreeSpa);
                facture.insert(spa_paire);
            } else if ((userInput == "N")||(userInput == "n")){
                FraisFixe.ajoutGym(0);
            } else{
                cout << YELLOW << "\t\t Erreur : Saisir un 'o' pour 'oui' ou un 'n' pour 'non'..." <<endl;
            }
            // add verification que les nuitees existe
        }
        break;
            case 5: {
                cout << BOLDMAGENTA << "\t\t Afficher la facture..." << endl;
                // add method print 'un_facture' map

            }
                break;
    }
}while (choix != 6);
std::cout << "Bye bye !" << std::endl;
        }

