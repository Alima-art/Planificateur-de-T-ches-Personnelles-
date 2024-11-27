#ifndef TACHE_H
#define TACHE_H

#include <string>
using namespace std;

// COMMENCONT PAR DEFINIR UNE CLAASS NOMMER TACHE
class Tache {

      //TOUT LES PROPRIETER DECLARER DANS CETTE PARTIE NE SONT ACCESSIBLE QUE DANS CETTE CLASS
       private:
            string titre;
            string description;
            string priorite;
            string dateLimite;
            bool status;

        //TOUT LES PROPRIETER DECLARER DANS CETTE PARTIE SONT ACCESSIBLE HORS CETTE CLASS
        public:
            // CONSTRUCTEUR DE LA CLASS TACHE
            Tache(string t, string desc, string prio, string date);

            // LES DIFFERENTES METHODES
            //METHODE POUR AFFICHER LES PROPRITES D'UNE TACHE
            void afficherTache() const;

            //CETTE METHODE PERMET DE MODIFIER UNE TACHE ENREGISTER
            void modifierTache(string t, string desc, string prio, string date);

            //CETTE METHODE NOUS PERMET DE MARQUER UNE TACHE COMME TERMINEE
            void marquerCommeTerminee();

            //CETTE METHODE SE CHARGERAI DE NOUR RETOURNER LE TITRE
            string getTitre() const;

            //CET BOOLEEN NOUS RETOURNERA VRAI SI LA TACHE EST TERMINER ET FAUX SINON
            bool estTerminee() const;
};

#endif
