#include "Formes2043249.h"
#include <iostream>
#include <ctime>
using namespace std;

void traiterRectangle(int modeRemplissage)
{
	// Déclaration des variables

	int hauteur;
	int largeur;

	// Message à l'utilisateur permettant de définir les variables
	cout << endl;
	cout << "Veuillez indiquer la largeur : " << endl;
	cin >> largeur;
	cout << endl;

	cout << "Veuillez indiquer la hauteur : " << endl;
	cin >> hauteur;

	system("cls");


	// Phrase de présentation de la forme
	if (modeRemplissage == 1)
		cout << "Voici votre rectangle plein de " << largeur << "x" << hauteur;
	else
		cout << "Voici votre rectangle vide de " << largeur << "x" << hauteur;

	// Appel de la fonction qui dessine
	dessinerRectangle(hauteur, largeur, modeRemplissage);

	system("pause");
	system("cls");
}

void traiterCarre(int modeRemplissage)
{
	// Déclaration des variables
	int hauteur;
	int largeur;

	// Message à l'utilisateur permettant de définir les variables
	cout << "Veuillez indiquer la hauteur : " << endl;
	cin >> hauteur;

	largeur = hauteur;

	// Phrase de présentation de la forme
	if (modeRemplissage == 1)
		cout << "Voici votre carré plein de " << hauteur << "x" << hauteur;
	else
		cout << "Voici votre carré vide de " << hauteur << "x" << hauteur;

	// Appel de la fonction qui dessine

	dessinerRectangle(hauteur, largeur, modeRemplissage);

	system("pause");
	system("cls");
}

void traiterTriangle(int modeRemplissage)
{
	// Déclaration des variables
	int hauteur;
	int alea;

	// Message à l'utilisateur permettant de définir les variables
	cout << "Veuillez indiquer la hauteur : " << endl;
	cin >> hauteur;

	// Phrase de présentation de la forme
	if (modeRemplissage == 1)
		cout << "Voici votre triangle plein de hauteur " << hauteur;
	else
		cout << "Voici votre triangle vide de hauteur " << hauteur;


	// Appel de la fonction qui dessine
	alea = genererNombreAleatoire(1, 4);
	
	switch (alea)
	{
	case 1:
		dessinerTriangle1(hauteur,modeRemplissage);
		break;
	case 2:
		dessinerTriangle2(hauteur, modeRemplissage);
		break;
	case 3:
		dessinerTriangle3(hauteur, modeRemplissage);
		break;
	case 4:
		dessinerTriangle4(hauteur, modeRemplissage);
		break;
	}

	system("pause");
	system("cls");
}

void traiterLosange(int modeRemplissage)
{
	// Déclaration des variables
	int hauteur;

	// Message à l'utilisateur permettant de définir les variables
	cout << "Veuillez indiquer la hauteur : " << endl;
	cin >> hauteur;

	// Phrase de présentation de la forme
	if (modeRemplissage == 1)
		cout << "Voici votre losange plein de " << hauteur;
	else
		cout << "Voici votre losange vide de " << hauteur;

	// Appel de la fonction qui dessine
	//dessinerLosange();
}

void dessinerRectangle(int hauteur, int largeur, int modeRemplissage)
{
	// on passe une ligne pour s'assurer que les étoiles ne se collent pas à du texte
	cout << endl;

	// Boucle permettant de dessiner le rectangle en fonction du mode de remplissage choisi
	for (int h = 0; h < hauteur; h++)
	{
		for (int l = 0; l < largeur; l++)
		{
			if (l >= 1 && l <= largeur && h >= 1 && h <= hauteur - 2) // || à vérifier
			{
				if (modeRemplissage == 1)	// Condition pour dessiner la forme en fonction du mode de remplissage demandé par l'utilisateu

				{
					cout << "#";
				}
				else
				{
					cout << " ";
				}
			}
			else
				cout << "*";

		}

		cout << endl;
	}
}

void dessinerTriangle1(int hauteur, int modeRemplissage)
{
	// on passe une ligne pour s'assurer que les étoiles ne se collent pas à du texte
	cout << endl;

	// boucle permettant de dessiner le triangle 1, dont le coin se dirige vers le bas gauche
	for (int h = 1; h <= hauteur; h++)
	{
		for (int i = 1; i <= h; i++)
		{
			if (i > 1 && i <= hauteur - 1 && h > 2 && h < hauteur)
			{
				if (modeRemplissage == 1)
					cout << "#";
				else
					cout << " ";
			}
			else
				cout << "*";
		}

		cout << endl;
	}
}

void dessinerTriangle2(int hauteur, int modeRemplissage)
{
	// on passe une ligne pour s'assurer que les étoiles ne se collent pas à du texte
	cout << endl;

	// boucle permmetant de dessiner le triangle 2, dont le coin se dirige vers le haut gauche
	for (int h = hauteur; h >= 1; h--)
	{
		for (int i = 1; i <= h; i++)
		{
			if (i > 1 && i <= hauteur - 1 && h > 2 && h < hauteur)
			{
				if (modeRemplissage == 1)
					cout << "#";
				else
					cout << " ";
			}
			else
				cout << "*";
		}

		cout << endl;
	}
}

void dessinerTriangle3(int hauteur, int modeRemplissage)
{
	// on passe une ligne pour s'assurer que les étoiles ne se collent pas à du texte
	cout << endl;

	// boucle permmetant de dessiner le triangle , dont le coin se dirige vers le bas droite
	for (int h = 1; h <= hauteur; h++)
	{
		for (int espace = hauteur; espace > h; espace--)
		{

			cout << " ";

		}

		for (int etoile = 1; etoile <= h; etoile++)
		{
			if (etoile > 1 && etoile <= hauteur - 1 && h > 2 && h < hauteur)
			{
				if (modeRemplissage == 1)
					cout << "#";
				else
					cout << " ";
			}
			else
				cout << "*";

		}

		cout << endl;
	}
}

void dessinerTriangle4(int hauteur, int modeRemplissage)
{
	// on passe une ligne pour s'assurer que les étoiles ne se collent pas à du texte
	cout << endl;

	// boucle permmetant de dessiner le triangle , dont le coin se dirige vers le haut droite
	for (int h = hauteur; h >= 1; h--)
	{
		for (int k = hauteur; k > h; k--)
		{
			cout << " ";
		}

		for (int j = 1; j <= h; j++)
		{
			if (h > 1 && h <= hauteur - 1 && h > 2 && h < hauteur)
			{
				if (modeRemplissage == 1)
					cout << "#";
				else
					cout << " ";
			}
			else
				cout << "*";
		}

		cout << endl;
	}
}

void dessinerLosange(int hauteur, int modeRemplissage)
{

}

int genererNombreAleatoire(int min, int max) // fonction de l'aléatoire
{
	return rand() % (max - min + 1) + (max - min);
}
