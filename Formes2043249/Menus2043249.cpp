#include "Menus2043249.h"
#include <iostream>
using namespace std;

void afficherMenu1()
{
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Carr�" << endl;
	cout << "4. Losange" << endl;
	cout << "5. Quitter" << endl;
	cout << "Votre choix --> ";
}

void afficherMenu2()
{
	cout << "1. Forme pleine" << endl;
	cout << "2. Forme vide" << endl;
	cout << "3. Retour au menu pr�c�dent" << endl;
	cout << "Votre choix --> ";
}

int validerMenu(int menu, const int CHOIX_MAX)
{
	// D�claration des variables
	int choix;

	// Affichage du menu en fonction de o� l'utilisateur est rendu
	menu == 1 ? afficherMenu1() : afficherMenu2();

		afficherMenu2();

	// D�finition de la variable
	cin >> choix;
	
	while (!(choix >= 1 && choix <= CHOIX_MAX))
	{
		// Message d'erreur si l'utilisateur entre une option invalide
		cout << "ERREUR: Vous devez choisir une option parmis celles qui vous ont �t� propos�es";

		system("pause");
		system("cls");

		// Affichage du menu en fonction de o� l'utilisateur est rendu
		menu == 1 ? afficherMenu1() : afficherMenu2();


		// D�finition de la variable
		cin >> choix;

	}


	return 0;
}
