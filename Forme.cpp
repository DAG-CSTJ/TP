#include "Forme.h"
#include <iostream>
#include <string>

using namespace std;

	
	

	void traiterRectangle( int choixDeRemplissage) // Cette fonction va initialiser la forme (dessinerRectangle) dans la console
												   // le int sera la variable pour déterminer si l'utilisateur veut la forme
												   // pleine ou pas
	{
		int H; // La hauteur
		int L; // La largeur
		cout << " Veuillez entrer la hauteur : ";  // Demande à l'utilisateur la hauteur
		cin >> H;
		cout << " Veuillez entrer la largeur : ";  // Demande à l'utilisateur la largeur
		cin >> L;
		

		dessinerRectangle(H,L,choixDeRemplissage); //Appel de la fonction dessinerRectangle pour dessiner le rectangle
	}

	void traiterTriangle(int choixDeRemplissage)   // Cette fonction va initialiser la forme (dessinerTriangle) dans la console
												   // le int sera la variable pour déterminer si l'utilisateur veut la forme
												   // pleine ou pass 
	{
		int H; // La hauteur
		cout << " Veuillez entrer la hauteur : ";  // Demade à l'utilisateur la hauteur
		cin >> H;

		int aletoire = genererNombreAleatoire(1, 2);  // Ceci génère aléatoirement 1 ou 2, c'est à dire qu'il va choisir aléatoirement les 
													  // deux cases ci-dessous pour savoir quelle triangle il va afficher. Normalement,
													  // il possède 4 triangles mais j'en ai réussi en faire seulement 2.
		
		switch (aletoire)							  // Début du switch
			{
			case 1:									  // Case 1 est égal a dessinerTriangle
			dessinerTriangle(H, choixDeRemplissage);  // Fonction 

			
			break;									  // Fin du case 1

		case 2:										  // Case 2 est dessinerTriangle2 
			dessinerTriangle2(H, choixDeRemplissage); // Fonction

			break;									  // Fin du case 2
		}
		
	}

void traiterCarre(int choixDeRemplissage)  // Cette fonction va apporter les informations nécessaire pour pouvoir
										   // Crée le carré, on va y demander sa hauteur pour tous ses côtés
										   // et on va finalement appelé la fonction dessinerCarre
										   // Int est encore là pour décider si l'utilisateur veut la forme
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
	
	system("cls");										  // Effacement de toutes les choses précédentes dans la console
	
	cout << " La hauteur est de " << H << " et la largeur est de " << L << endl;  // Cette phrase indique la hauteur et la largeur que 
																				  // l'utilisateur a choisi
	for (int i = 1; i <= H; i++)						  // 1ere boucle for: i étant disons les y dans un plan cartésien, il débute a 1
														  // tant et aussi longtemps que i ne sera pas plus petit ou égal à la hauteur
														  // le i augmentera
	{
		for (int D = 1; D <= L; D++)					  // 2e boucle for: D étant disons les x dans un plan cartésien, il débute à 1
														  // tant et aussi longtemps que D ne sera pas plus petit ou égal a la largeur
														  // D augmentera
		{
			if (i == 1 || D == 1 || i== H || D == L)      // Si i égale 1 OU D==1 OU i==H OU D==L, la forme sera en contour d'*.
			{
				cout << "*";							  // Affichage des étoiles
			}
			else										  // SINON
			{
				if (choixRemplissage == 1)                // Choix remplissage = plein on mettra à l'intérieur des #
					cout << "#";
				else
					cout << " ";                          // Sinon des espaces
			}
		}
		cout << endl;									  // Permet de séparer les étoiles
	}


	system("pause");
}

void dessinerTriangle(int H, int choixDeRemplissage)  // Ici on dessine la forme du triangle
{
	system("cls");									  // Tout ce qui est avant est supprimé
	cout << " La hauteur est de " << H << endl;       // Phrase qui montre les dimmensions choisi
	for (int i = 1; i <= H; i++)					  // 1 ere boucle for: i étant les y dans un plan cartésienil commence donc à 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou égal à la hauteur, i augmentera
	{
		
		for (int D = 1; D <= i; D++)				  // 2eme boucle for: D étant les y dans un plan cartésien, ce dernier commence à 1
													  // Tant et aussi longtemps que D ne sera pas plus petit ou égal a i, D augmentera
		{
			if (i==1 || D==1 || i==H || D==i)		  // Si i==1 OU D==1 OU i==H OU D==i
			{
				cout << "*";                          // On va afficher des * pour les contours
			}
			else                                      // SINON
			{
				if (choixDeRemplissage == 1)          // Choix remplissage = plein on mettra à l'intérieur des #
					cout << "#";

				else                                  // Sinon on met des espaces
					cout << " ";
				
			}
		
		}
		cout << endl;								  // Sert à séparer les *

	}


	system("pause");

}

void dessinerTriangle2(int H, int choixDeRemplissage) // Ici on va dessiner le 2eme triangle
{
	system("cls");									  // Tout ce qui est avant est supprimé

	cout << " La hauteur est de " << H << endl;       // La phrase qui indique les dimensions du triangle
	for (int i = 1; i <= H ; i++)					  // 1 ere boucle for: i étant les y dans un plan cartésien il commence donc à 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou égal à la hauteur, i augmentera
	{
		cout << "*";                                  // On va afficher des *
		for (int D = H; D >= i; D--)				  // 2eme boucle for: D étant les x dans un plan cartésien, il commence à la hauteur qu'on lui a donner
													  // Tant et aussi longtemps qu'il ne sera pas plus grand ou égal à i le D diminuera
		{
			if (i == 1 || D == 1 || i== H || D==i )   // Si i == 1 OU D == 1 OU i== H OU D==i 
			{
				cout << "*";					      // On va afficher des *
			}
			else									  // Sinon
			{
				if (choixDeRemplissage == 1)          // Si le choixDeRemplissage est égal a plein
													  // On y mettera des #
					cout << "#";

				else								  // SINON
				
					cout << " ";                      // On affichera des espaces
				
			}
	
		}

		cout << endl;                                // Sert à faire des espaces entre les *
	}

	system("pause");
}

void dessinerCarre(int H, int choixRemplissage) // Ici on va dessiner le carré
{
	system("cls");								// Tout ce qui est avant on va supprimer

	cout << " La hauteur est de " << H << endl;  // Ici on affiche la phrase pour montrer les dimensions qu'on a choisi
	for (int i = 1; i <= H; i++)                 //  1 ere boucle for: i étant les y dans un plan cartésienil commence donc à 1. Tant et aussi longtemps que 
													  // i ne sera pas plus petit ou égal à la hauteur, i augmentera
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

int genererNombreAleatoire(int min, int max) // Permet de générer des nombres alétoire
{
	return rand() % max + min;
}
