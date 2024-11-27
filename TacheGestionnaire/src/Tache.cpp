#include "Tache.h"
#include <iostream>
using namespace std;

// Initialisation du constructeur
Tache::Tache(string t, string desc, string prio, string date)
    : titre(t), description(desc), priorite(prio), dateLimite(date), status(false) {}

// Affiche les informations de la t�che
void Tache::afficherTache() const {
    cout << "\t\t\tTitre        : " << titre << endl;
    cout << "\t\t\tDescription  : " << description << endl;
    cout << "\t\t\tPriorite     : " << priorite << endl;
    cout << "\t\t\tDate limite  : " << dateLimite << endl;
    cout << "\t\t\tStatut       : " << (status ? "Terminee" : "En cours") << endl;
}

// Modifie les informations d'une t�che
void Tache::modifierTache(string t, string desc, string prio, string date) {
    titre = t;
    description = desc;
    priorite = prio;
    dateLimite = date;
}

// Marque une t�che comme termin�e
void Tache::marquerCommeTerminee() {
    status = true;
}

// Retourne le titre de la t�che
string Tache::getTitre() const {
    return titre;
}

// Retourne si la t�che est termin�e
bool Tache::estTerminee() const {
    return status;
}
