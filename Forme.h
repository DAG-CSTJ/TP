#pragma once
#include "Main2075312.h"
void traiterRectangle( int choixDeRemplissage); // Voici la fonction qui va amener la fonction dans le main afin de pouvoir construire un rectanlge,
												// Ce dernier demandera les dimensions et apr�s cela il fera appel a une autre fonction appel� dessinerRectangle
void traiterTriangle(int choixDeRemplissage);   // Celle-ci est la fonction qui va amener la cr�ation du triangle dans le main. Celle-ci va comporter 4 choix qui sont inclus
												// dans un switch. Les 4 choix seront les 4 triangles. Plus de d�tails dans la fonction ...
void traiterCarre(int choixDeRemplissage);		// Je voulais que le programme soit presque pareil � la d�mo, j'ai donc ajouter une section pour le carr�. 
												// Alors cette fonction demande les dimensions du Carre et si il veut le remplir. � la fin de toutes les
												// les demandes il fera appel � dessiner Carre
void traiterLosange();							// Celle-ci fait comme les autres, demande les dimensions. La hauteur doit absoluement �tre impair sinon il
												// Sinon il n'accepte pas le nombre qu'on lui donne.
void dessinerRectangle(int H,int L,int choixRemplissage); // Cette fonction dessine le rectangle avec les dimensions qu'on lui a donner dans le traiterRectangle
void dessinerTriangle(int H, int choixDeRemplissage);	  // Cette fonction dessine le trangle 1 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle2(int H, int choixDeRemplissage);    // Cette fonction dessine le trangle 2 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle3();								  // Cette fonction dessine le triangle 3 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle4();								  // Cette fonction dessine le triangle 4 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerCarre(int H, int choixRemplissage);		  // Avec cette fonction, on peut voir le carr� se dessiner, on doit juste inscrire la hauteur dans la fonction
														  // traiterCarre et dessinerCarre se chargera de la former.
void dessinerLosange();									  // Cette fonction est celle qui dessine le losange avec la hauteur qu'on lui donne pr�cedemment dans la fonction
														  // traiterLosange.
int genererNombreAleatoire(int min, int max);			  // Cette fonction sera tr�s importante pour traiterTriangle, �tant donn� qu'on doit avoir un triangle al�atoire
														  // cette fonction va choissir al�atoirement entre le min et le max qu'on lui a donn�. Ensuite, on attribue dans un 
														  // switch la valeur min et max pour que finalement, genererNombreAleatoire prennent un triangle au hasard
