#include <iostream>
#include <map>
#include <cstdlib>
#include <iomanip>
#include "FacturableFraisFixe.h"

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
FacturableFraisFixe* services = new FacturableFraisFixe();
//FacturableFraisFixe FraisFixe;

    int choix = 0;
    do {
        // header Bienvenue
        cout << YELLOW << "\t\t  *" << WHITE << "*" << BOLDMAGENTA << "*         Bienvenue au Hamster Ranch!          *"
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
        cout << MAGENTA << "\t        1) Ajouter les nuitées :" << endl;
        cout << "\t        2) Ajouter les repas :" << endl;
        cout << "\t        3) Ajouter accès au gym" << endl;
        cout << "\t        4) Ajouter accès au spa" << endl;
        cout << "\t        5) Afficher la facture" << endl;
        cout << "\t        6) Quitter" << endl;
        cin >> choix;

        switch (choix) {
            case 1: {
                cout << BOLDMAGENTA << "\t\t Ajouter les nuitées          " << endl;
                int nuitee;
                cout << MAGENTA << "Entrez le nombre de nuitées à ajouter : ";
                // add verification ErrValeur < 0
                // add verification doesn't allow overwrite
                std::cin >> nuitee;
            }
                break;
            case 2: {
                cout << BOLDMAGENTA << "\t\t Ajouter des repas          " << endl;
                int repas;
                cout << MAGENTA << "Entrez le nombre de repas à ajouter : ";
                // add verification ErrValeur < 0
                cin >> repas;
            }
                break;
            case 3: {
                std::string userInput = "";
                cout << BOLDMAGENTA << "\t\t Ajouter un accès au gym, oui ou non?\n\t\t\t O/N ?" << endl;
                cin >> userInput;
                if ((userInput == "o") || (userInput == "O")){
                    //try?
                    int entreeGym = 0;
                    entreeGym = services.ajoutGym(1);
                    std::string msgEntreeGym = "Gym";
                    std::pair<std::string, int> gym_paire(msgEntreeGym, entreeGym);
                    facture.insert(gym_paire);
                } else if ((userInput == "N")||(userInput == "n")){
                    services.ajoutGym(0);
                } else{
                    cout << YELLOW << "\t\t Erreur : Saisir un 'o' pour 'oui' ou un 'n' pour 'non'..." <<endl;
                }
                // add verification que les nuitees existe
            }
                break;
        case 4: {
            cout << BOLDMAGENTA << "\t\t Accès au spa ajouté!!          " << endl;
            // add verification que les nuitees existe
            int spa = 1;
        }
        break;
            case 5: {
                cout << BOLDMAGENTA << "\t\t Accès au spa ajouté!!          " << endl;
                // add method print 'un_facture' map
                int spa = 1;
            }
                break;
    }
}while (choix != 6);
std::cout << "Bye bye !" << std::endl;
        }

