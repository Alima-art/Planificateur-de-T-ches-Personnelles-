#include <iostream>
#include <vector>
#include "Tache.h"
using namespace std;

// AFFICHAGE DES TACHES ENREGISTRER
void afficherToutesLesTaches(const vector<Tache>& listeTaches) {
            if (listeTaches.empty()) {
                cout << "\n\t\t\t Liste des taches vide !!!!!.\n";
                return;
            }
            cout << "\n\t\t\t++++++++++++    Liste des taches!!!!!.    ++++++++++\n";
            for (size_t i = 0; i < listeTaches.size(); ++i) {
                cout << " \t\t\tTache numero " << i + 1 << " :\n";
                listeTaches[i].afficherTache();
                cout << "\n\t\t\t*************+++++++++++****************\n";
            }
}

// AJOUT D'UNE NOUVELLE TACHE
void ajouterTache(vector<Tache> & listeTaches) {
            string titre, description, priorite, date;
            cout << "\t\t\tEntrez le titre de la tache : ";
            cin.ignore();
            getline(cin, titre);
            cout << "\t\t\tEntrez la Description de la tache  : \t";
            getline(cin, description);
            cout << "\t\t\tEntrez la Priorite de la tache : \t";
            getline(cin, priorite);
            cout << "\t\t\tEntrez la Date limite de la tache : \t";
            getline(cin, date);

            listeTaches.emplace_back(titre, description, priorite, date);
            cout << "\n\t\t\tTache enregistree avec succes !!!\n";
}

// MODIFIER UNE TACHE DISPONIBLE SUER LA LISTE
void modifierTache(vector<Tache>& listeTaches) {
            if (listeTaches.empty()) {
                cout << "\t\t\tAucune tache a modifier. la liste est vide!!!!!\n";
                return;
            }
            int index;
            cout << "\t\t\tEntrez le numero de la tache que vs voulez modifier : ";
            cin >> index;

            if (index < 1 || index > static_cast<int>(listeTaches.size())) {
                cout << "\t\t\tNumero de tache invalide.\n";
                return;
    }

            string titre, description, priorite, date;
            cout << "\t\t\tNouveau titre : ";
            cin.ignore();
            getline(cin, titre);
            cout << "\t\t\tNouvelle description : ";
            getline(cin, description);
            cout << "\t\t\tNouvelle priorite : ";
            getline(cin, priorite);
            cout << "\t\t\tNouvelle date limite : ";
            getline(cin, date);

            listeTaches[index - 1].modifierTache(titre, description, priorite, date);
            cout << "\t\t\tTache modifiee avec succes !\n";
}

// SUPPRIMER TACHE
void supprimerTache(vector<Tache>& listeTaches) {
            if (listeTaches.empty()) {
                cout << "\t\t\tAucune tache disponible a supprimer.\n";
                return;
            }
            int index;
            cout << "\t\t\tEntrez le numero de la tache a supprimer : ";
            cin >> index;

            if (index < 1 || index > static_cast<int>(listeTaches.size())) {
                cout << "\t\t\tNumero de tache hors liste.\n";
                return;
            }

            listeTaches.erase(listeTaches.begin() + index - 1);
            cout << "\t\t\tTache supprimee avec succes !!!!\n";
}

// MARQUER UNE TACHE COMME TERMINER
void marquerCommeTerminee(vector<Tache>& listeTaches) {
            if (listeTaches.empty()) {
                cout << "\t\t\tAucune tache a marquer.\n";
                return;
            }
            int index;
            cout << "\t\t\tEntrez le numero de la tache a marquer comme terminee : ";
            cin >> index;

            if (index < 1 || index > static_cast<int>(listeTaches.size())) {
                cout << "Numero de tache invalide.\n";
                return;
            }

            listeTaches[index - 1].marquerCommeTerminee();
            cout << "\t\t\tTache marquee comme terminee !\n";
}

// RECHERCHER TACHE PAR CLE
void rechercherTache(const vector<Tache>& listeTaches) {
            if (listeTaches.empty()) {
                cout << "\n\t\t\tAucune tache a rechercher.\n";
                return;
            }
            string motCle;
            cout << "\n\t\t\tEntrez le mot-clE pour la recherche : ";
            cin.ignore();
            getline(cin, motCle);

            for (const auto& tache : listeTaches) {
                if (tache.getTitre().find(motCle) != string::npos) {
                    tache.afficherTache();
                }
            }
}

// Fonction principale
int main() {
            vector<Tache> listeTaches;
            int choix;

            do {
                cout << "\n\n\t\t\t**   A*L*I*M*A  ****************  C*H*E*I*C*K  ************** \n";
                cout << "\n\n\t\t\t*******************  PROJET C++ 2024  *********************** \n\n\n";
                cout << "\t\t\t++++++++++  Menu Planificateur de Taches Personnelles:  ++++++\n\n";
                cout << "\t\t\t********       1. Ajouter une tache                      ^^^\n";
                cout << "\t\t\t*******      2. Afficher toutes les taches              ^^^^\n";
                cout << "\t\t\t*****      3. Modifier une tache                       ^^^^^\n";
                cout << "\t\t\t****     4. Supprimer une tache                       ^^^^^^\n";
                cout << "\t\t\t***    5. Marquer une tache comme terminae           ^^^^^^^\n";
                cout << "\t\t\t**   6. Rechercher une tache                        ^^^^^^^^\n";
                cout << "\t\t\t*  0. Quitter                                      ^^^^^^^^^\n\n";
                cout << "\t\t\tChoisi un chiffre sur le menu en fonction de votre besion : \t";
                cin >> choix;

                switch (choix) {
                case 1:
                    ajouterTache(listeTaches);
                    break;
                case 2:
                    afficherToutesLesTaches(listeTaches);
                    break;
                case 3:
                    modifierTache(listeTaches);
                    break;
                case 4:
                    supprimerTache(listeTaches);
                    break;
                case 5:
                    marquerCommeTerminee(listeTaches);
                    break;
                case 6:
                    rechercherTache(listeTaches);
                    break;
                case 0:
                    cout << "\t\t\tAu revoir !\n";
                    break;
                default:
                    cout << "\t\t\tChoix invalide. Reessayez.\n";
                }
            } while (choix != 0);

            return 0;
}
