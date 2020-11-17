#pragma once
#include "Main2075312.h"
void traiterRectangle( int choixDeRemplissage); // Voici la fonction qui va amener la fonction dans le main afin de pouvoir construire un rectanlge,
												// Ce dernier demandera les dimensions et après cela il fera appel a une autre fonction appelé dessinerRectangle
void traiterTriangle(int choixDeRemplissage);   // Celle-ci est la fonction qui va amener la création du triangle dans le main. Celle-ci va comporter 4 choix qui sont inclus
												// dans un switch. Les 4 choix seront les 4 triangles. Plus de détails dans la fonction ...
void traiterCarre(int choixDeRemplissage);		// Je voulais que le programme soit presque pareil à la démo, j'ai donc ajouter une section pour le carré. 
												// Alors cette fonction demande les dimensions du Carre et si il veut le remplir. À la fin de toutes les
												// les demandes il fera appel à dessiner Carre
void traiterLosange();							// Celle-ci fait comme les autres, demande les dimensions. La hauteur doit absoluement être impair sinon il
												// Sinon il n'accepte pas le nombre qu'on lui donne.
void dessinerRectangle(int H,int L,int choixRemplissage); // Cette fonction dessine le rectangle avec les dimensions qu'on lui a donner dans le traiterRectangle
void dessinerTriangle(int H, int choixDeRemplissage);	  // Cette fonction dessine le trangle 1 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle2(int H, int choixDeRemplissage);    // Cette fonction dessine le trangle 2 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle3();								  // Cette fonction dessine le triangle 3 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerTriangle4();								  // Cette fonction dessine le triangle 4 avec la hauteur qu'on lui donne dans la fonction traiterTriangle.
void dessinerCarre(int H, int choixRemplissage);		  // Avec cette fonction, on peut voir le carré se dessiner, on doit juste inscrire la hauteur dans la fonction
														  // traiterCarre et dessinerCarre se chargera de la former.
void dessinerLosange();									  // Cette fonction est celle qui dessine le losange avec la hauteur qu'on lui donne précedemment dans la fonction
														  // traiterLosange.
int genererNombreAleatoire(int min, int max);			  // Cette fonction sera très importante pour traiterTriangle, étant donné qu'on doit avoir un triangle aléatoire
														  // cette fonction va choissir aléatoirement entre le min et le max qu'on lui a donné. Ensuite, on attribue dans un 
														  // switch la valeur min et max pour que finalement, genererNombreAleatoire prennent un triangle au hasard
