#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
class attribut
{
public:
	char nom[20];
	attribut* suivant;
	attribut();
	~attribut();
	string afficher(attribut*liste);
	int get_nbr_elm(attribut*l);
};
class noeud
{
public:
	char nom_noeud[20];
	noeud* operateur_algebr1;
	noeud* operateur_algebr2;
	noeud* operateur_logique;
	attribut * liste_attributs;
	noeud();
	noeud(char nom[20],noeud*opA1,noeud*opL,noeud*opA2,attribut*Att);
	~noeud();
	void afficher_arbre(noeud *a,int h,int r);
	void afficher_arbre2(noeud *a,int h);
	void EnregArbre(noeud* a,char* x);
	noeud* ChargerArbre(noeud* a,char* x);
	int maximum(int a,int b,int c);
	int hauteur(noeud * a);
	noeud* T1(noeud * a);
	noeud* T2(noeud * a);
	noeud* T3(noeud * a);
	noeud* T4(noeud * a);
	noeud* T5(noeud * a);
	noeud* T6(noeud * a);
	noeud* T7(noeud * a);
	noeud* Optimisation(noeud * a);
};



