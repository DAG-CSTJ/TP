#include "Forme.h"
#include <iostream>
#include <string>

using namespace std;

	
	

	void traiterRectangle( int choixDeRemplissage) // Cette fonction va initialiser la forme (dessinerRectangle) dans la console
												   // le int sera la variable pour d�terminer si l'utilisateur veut la forme
												   // pleine ou pas
	{
		int H; // La hauteur
		int L; // La largeur
		cout << " Veuillez entrer la hauteur : ";  // Demande � l'utilisateur la hauteur
		cin >> H;
		cout << " Veuillez entrer la largeur : ";  // Demande � l'utilisateur la largeur
		cin >> L;
		

		dessinerRectangle(H,L,choixDeRemplissage); //Appel de la fonction dessinerRectangle pour dessiner le rectangle
	}

	void traiterTriangle(int choixDeRemplissage)   // Cette fonction va initialiser la forme (dessinerTriangle) dans la console
												   // le int sera la variable pour d�terminer si l'utilisateur veut la forme
												   // pleine ou pass 
	{
		int H; // La hauteur
		cout << " Veuillez entrer la hauteur : ";  // Demade � l'utilisateur la hauteur
		cin >> H;

		int aletoire = genererNombreAleatoire(1, 2);  // Ceci g�n�re al�atoirement 1 ou 2, c'est � dire qu'il va choisir al�atoirement les 
													  // deux cases ci-dessous pour savoir quelle triangle il va afficher. Normalement,
													  // il poss�de 4 triangles mais j'en ai r�ussi en faire seulement 2.
		
		switch (aletoire)							  // D�but du switch
			{
			case 1:									  // Case 1 est �gal a dessinerTriangle
			dessinerTriangle(H, choixDeRemplissage);  // Fonction 

			
			break;									  // Fin du case 1

		case 2:										  // Case 2 est dessinerTriangle2 
			dessinerTriangle2(H, choixDeRemplissage); // Fonction

			break;									  // Fin du case 2
		}
		
	}

void traiterCarre(int choixDeRemplissage)  // Cette fonction va apporter les informations n�cessaire pour pouvoir
										   // Cr�e le carr�, on va y demander sa hauteur pour tous ses c�t�s
										   // et on va finalement appel� la fonction dessinerCarre
										   // Int est encore l� pour d�cider si l'utilisateur veut la forme
										   // pleine ou vide
{
	int H; // La hauteur	
	cout << " Veuillez entrer la hauteur : ";	// Demande de la hauteur
	cin >> H;

	dessinerCarre(H, choixDeRemplissage);		// Appel de la fonction dessiner Carre
}

void traiterLosange()
{

}

void dessinerRectangle(int H, int L,int choixRemplissage)  // Ici, on va faire dessiner la forme rectangle
{
	
	system("cls");										  // Effacement de toutes les choses pr�c�dentes dans la console
	
	cout << " La hauteur est de " << H << " et la largeur est de " << L << endl;  // Cette phrase indique la hauteur et la largeur que 
																				  // l'utilisateur a choisi
	for (int i = 1; i <= H; i++)						  // 1ere boucle for: i �tant disons les y dans un plan cart�sien, il d�bute a 1
														  // tant et aussi longtemps que i ne sera pas plus petit ou �gal � la hauteur
														  // le i augmentera
	{
		for (int D = 1; D <= L; D++)					  // 2e boucle for: D �tant disons les x dans un plan cart�sien, il d�bute � 1
														  // tant et aussi longtemps que D ne sera pas plus petit ou �gal a la largeur
														  // D augmentera
		{
			if (i == 1 || D == 1 || i== H || D == L)      // Si i �gale 1 OU D==1 OU i==H OU D==L, la forme sera en contour d'*.
			{
				cout << "*";							  // Affichage des �toiles
			}
			else										  // SINON
			{
				if (choixRemplissage == 1)                // Choix remplissage = plein on mettra � l'int�rieur des #
					cout << "#";
				else
					cout << " ";                          // Sinon des espaces
			}
		}
		cout << endl;									  // Permet de s�parer les �toiles
	}


	system("pause");
}

void dessinerTriangle(int H, int choixDeRemplissage)  // Ici on dessine la forme du triangle
{
	system("cls");									  // Tout ce qui est avant est supprim�
	cout << " La hauteur est de " << H << endl;       // Phrase qui montre les dimmensions choisi
	for (int i = 1; i <= H; i++)					  // 1 ere boucle for: i �tant les y dans un plan cart�sienil commence donc � 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou �gal � la hauteur, i augmentera
	{
		
		for (int D = 1; D <= i; D++)				  // 2eme boucle for: D �tant les y dans un plan cart�sien, ce dernier commence � 1
													  // Tant et aussi longtemps que D ne sera pas plus petit ou �gal a i, D augmentera
		{
			if (i==1 || D==1 || i==H || D==i)		  // Si i==1 OU D==1 OU i==H OU D==i
			{
				cout << "*";                          // On va afficher des * pour les contours
			}
			else                                      // SINON
			{
				if (choixDeRemplissage == 1)          // Choix remplissage = plein on mettra � l'int�rieur des #
					cout << "#";

				else                                  // Sinon on met des espaces
					cout << " ";
				
			}
		
		}
		cout << endl;								  // Sert � s�parer les *

	}


	system("pause");

}

void dessinerTriangle2(int H, int choixDeRemplissage) // Ici on va dessiner le 2eme triangle
{
	system("cls");									  // Tout ce qui est avant est supprim�

	cout << " La hauteur est de " << H << endl;       // La phrase qui indique les dimensions du triangle
	for (int i = 1; i <= H ; i++)					  // 1 ere boucle for: i �tant les y dans un plan cart�sien il commence donc � 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou �gal � la hauteur, i augmentera
	{
		cout << "*";                                  // On va afficher des *
		for (int D = H; D >= i; D--)				  // 2eme boucle for: D �tant les x dans un plan cart�sien, il commence � la hauteur qu'on lui a donner
													  // Tant et aussi longtemps qu'il ne sera pas plus grand ou �gal � i le D diminuera
		{
			if (i == 1 || D == 1 || i== H || D==i )   // Si i == 1 OU D == 1 OU i== H OU D==i 
			{
				cout << "*";					      // On va afficher des *
			}
			else									  // Sinon
			{
				if (choixDeRemplissage == 1)          // Si le choixDeRemplissage est �gal a plein
													  // On y mettera des #
					cout << "#";

				else								  // SINON
				
					cout << " ";                      // On affichera des espaces
				
			}
	
		}

		cout << endl;                                // Sert � faire des espaces entre les *
	}

	system("pause");
}

void dessinerCarre(int H, int choixRemplissage) // Ici on va dessiner le carr�
{
	system("cls");								// Tout ce qui est avant on va supprimer

	cout << " La hauteur est de " << H << endl;  // Ici on affiche la phrase pour montrer les dimensions qu'on a choisi
	for (int i = 1; i <= H; i++)                 //  1 ere boucle for: i �tant les y dans un plan cart�sienil commence donc � 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou �gal � la hauteur, i augmentera
	{
		for (int i = 1; i <= H; i++)            // Meme chose car c'est un carre
		{ 
			if (i==1 || i == H )                // SI i==1 OU i == H
			{
				cout << "* ";					// On affiche des *

			}
			else // Sinon
			{
				if (choixRemplissage == 1)  // Si choixDeRemplissage = a plein
					cout << "# ";  // On affiche des #

				else // sinon
					cout << " "; // on met des espaces
				
			}
		
	
		}

		cout << endl;
	}
	system("pause");
}

void dessinerLosange()
{
	cout << "Erreur "<< endl;
	system("pause");
}

int genererNombreAleatoire(int min, int max) // Permet de g�n�rer des nombres al�toire
{
	return rand() % max + min;
}
