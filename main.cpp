#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;

#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define MAGENTA "\033[35m"      /* Magenta */
#define YELLOW  "\033[33m"      /* Yellow */
#define WHITE   "\033[37m"      /* White */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main() {
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
        cout << "\t        5) Quitter" << endl;
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
                cout << BOLDMAGENTA << "\t\t Accès au gym ajouté!!          " << endl;
                // add verification que les nuitees existe
                int gym = 1;
            }
                break;
        case 4: {
            cout << BOLDMAGENTA << "\t\t Accès au spa ajouté!!          " << endl;
            // add verification que les nuitees existe
            int spa = 1;
        }
        break;
    }
}while (choix != 5);
std::cout << "Bye bye !" << std::endl;
        }
