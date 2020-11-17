#include "Menus.h"		// On inclut le header
#include <iostream>		// On inclut la blibliothèque iostream
#include <string>		// On inclut la blibliothèque string
using namespace std;	// Permet d'éviter les std


int validerMenu(int typeMenu, int max) // Ceci donne la validation du premier menu
{
	
	int choixMenu;						// L'utilisateur va entrer la valeur comprise dans les choix

	switch (typeMenu)					// Début du switch
	{
	case 1 :							// En premier, il va afficher la fonction afficher menu 1. Pour comprendre, il va en fait afficher	
		afficherMenu1();				// ce que la fonction afficherMenu1 contient et rien de plus.

		break;							// fin du case 1

	case 2 :							// Début du case 2. Encore une fois, le case va afficher en deuxième lieu la fonction afficherMenu2
		afficherMenu2();				// dans cette fonction comme afficherMenu1, propose à l'utilisateur certains choix

		break;							// fin du case 
	}
	cout << " Votre choix --> : ";		// Ici, l'utilisateur va entrer les choix qu'on lui a donner
	cin >> choixMenu;					// Elle va retenir la demande de l'utilisateur
	while (!(choixMenu > 0 && choixMenu <= max ))		// Cette boucle va se rénitialiser tant et aussi longtemps que l'utilisateur n'aura pas
	{													// entrer une valeur compris entre 0 et le max. Ensuite, si la valeur entrer
														// n'est pas entre 0 et max, c'est là qu'on entrera dans la boucle et affichera un message
														// d'erreur
		cin.clear();									// Cette fonction va permettre de mettre apte la boucle dans un état apte a retenir une nouvelle valeur et l'extraire
		cin.ignore();									// Cette fonction esquive les valeurs que nous n'avons pas besoin
		cout << " Mauvais choix, choisissez un autre choix  "; // Affiche un message d'erreur si les nombres entrer ne sont pas les bons
		cin >> choixMenu;									   // Retient la valeur de choixMenu

	}
	
	return choixMenu;										   // Retourne au choixMenu
}

void afficherMenu1()										  // Cette fonction va permettre seulement de montrer les choix disponibles
															  // Elle ne retient aucune valeur, c'est la fonction d'avant qui s'en	
															  // chargera
{
	system("cls");											  // Ceci nettoie la console avant de montrer c'est choix
	cout << "1. Rectangle" << endl;							  // Choix du rectangle
	cout << "2. Triangle" << endl;							  // Choix du triangle
	cout << "3. Carre" << endl;								  // choix du Carre
	cout << "4. Losange" << endl;							  // choix du Losange
	cout << "5. Quitter" << endl;							  // choix de quitter
	
}

void afficherMenu2()										  // Cette fonction va montrer le choix à prendre entsuite de la fonction afficherMenu1
															  // La fonction ne retiendra aucune valeur, encore une fois validerMenu se chargera 
															  // de cela
{
	system("cls");											  // Nettoie tout avant le début de la présentation de la fonction
	cout << "1. Forme pleine" << endl;						  // Choix d'une forme pleine
	cout << "2. Forme vide" << endl;						  // Choix d'une forme vide
	cout << "3. Retour au menu précédent" << endl;			  // Choix du retour au menu précédent
}






