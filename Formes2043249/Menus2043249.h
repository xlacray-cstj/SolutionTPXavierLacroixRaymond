#pragma once

// Liste des prototypes de fonctions
void afficherMenu1(); // Fonction qui affiche le menu 1
void afficherMenu2(); // Fonction qui affiche le menu 2
int validerMenu(int menu /* choix du menu des formes */, const int CHOIX_MAX /* Nombres d'options au menu */);  // Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les
// choix offerts dans le menu, informations pass�es en param�tre. Cette fonction
// retourne le choix valid�. L�utilisateur peut taper n�importe quoi au clavier, le
// programme ne part pas en boucle infinie.
