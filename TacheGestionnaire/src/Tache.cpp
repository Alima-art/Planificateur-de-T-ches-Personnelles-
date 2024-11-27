#include "Tache.h"
#include <iostream>
using namespace std;

// Initialisation du constructeur
Tache::Tache(string t, string desc, string prio, string date)
    : titre(t), description(desc), priorite(prio), dateLimite(date), status(false) {}

// Affiche les informations de la tâche
void Tache::afficherTache() const {
    cout << "\t\t\tTitre        : " << titre << endl;
    cout << "\t\t\tDescription  : " << description << endl;
    cout << "\t\t\tPriorite     : " << priorite << endl;
    cout << "\t\t\tDate limite  : " << dateLimite << endl;
    cout << "\t\t\tStatut       : " << (status ? "Terminee" : "En cours") << endl;
}

// Modifie les informations d'une tâche
void Tache::modifierTache(string t, string desc, string prio, string date) {
    titre = t;
    description = desc;
    priorite = prio;
    dateLimite = date;
}

// Marque une tâche comme terminée
void Tache::marquerCommeTerminee() {
    status = true;
}

// Retourne le titre de la tâche
string Tache::getTitre() const {
    return titre;
}

// Retourne si la tâche est terminée
bool Tache::estTerminee() const {
    return status;
}
