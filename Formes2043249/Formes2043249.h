#pragma once

void traiterRectangle(int modeRemplissage);
void traiterCarre(int modeRemplissage); 
void traiterTriangle(int modeRemplissage);
void traiterLosange(int modeRemplissage);
void dessinerRectangle(int hauteur, int largeur, int modeRemplissage); // Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle1(int hauteur , int modeRemplissage); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle2(int hauteur, int modeRemplissage); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle3(int hauteur, int modeRemplissager); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle4(int hauteur, int modeRemplissage); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerLosange(int hauteur, int modeRemplissage); // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int genererNombreAleatoire(int min, int max);