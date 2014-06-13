#include"definition.h"
void main()
{
	int nb_tt;
	char i;
	char * NomFic="Fic.txt";
	noeud *n = new noeud();
choix:
	cout<<"              o_|_|| _\\|| o_|| _\\|                \n\n";
	cout<<"****************Ch@rfeddine M@hmoud******************\n";
	cout<<"*               &-Menu Arbre-&                      *\n";
	cout<<"*                                                   *\n";
    cout<<"*              A Affiche designe1                   *\n";
	cout<<"*              B Affiche designe2                   *\n";
	cout<<"*              E Enregistrer arbre                  *\n";
	cout<<"*              C Charger arbre                      *\n";
	cout<<"*              1 Transformation1                    *\n";
	cout<<"*              2 Transformation2                    *\n";
	cout<<"*              3 Transformation3                    *\n";
	cout<<"*              4 Transformation4                    *\n";    
	cout<<"*              5 Transformation5                    *\n"; 
	cout<<"*              6 Transformation6                    *\n";
	cout<<"*              7 Transformation7                    *\n";
	cout<<"*              O Optimisation                       *\n";
	cout<<"*              S Sortir                             *\n";
	cout<<"*                                                   *\n";
	cout<<"****************Master Pro SI************************\n";

	cin>>i;
	switch (i)
	{

	case 'A':
	n->afficher_arbre2(n,n->hauteur(n));		
		goto choix;
	case 'B':
	n->afficher_arbre(n,n->hauteur(n),0);		
		goto choix;
	case 'E':
	n->EnregArbre(n,NomFic);
	cout<<"Arbre enregistr\202\n"<<endl;		
		goto choix;
	case 'C':
	n->ChargerArbre(n,NomFic);
    cout<<"Arbre charg\202\n"<<endl;		
		goto choix;
   case '1':
		n=n->T1(n);
		cout<<"Transformation T1 est effectué avec succe"<<endl;
		goto choix;
   case '2':
		n=n->T2(n);
		cout<<"Transformation T2 est effectué avec succe"<<endl;
		goto choix;
   case '3':
		n=n->T3(n);
		cout<<"Transformation T3 est effectué avec succe"<<endl;
		goto choix;
   case '4':
		n=n->T4(n);
		cout<<"Transformation T4 est effectué avec succe"<<endl;
		goto choix;
   case '5':
		n=n->T5(n);
		cout<<"Transformation T5 est effectué avec succe"<<endl;
		goto choix;
   case '6':
		n=n->T6(n);
		cout<<"Transformation T6 est effectué avec succe"<<endl;
		goto choix;
   case '7':
		n=n->T7(n);
		cout<<"Transformation T7 est effectué avec succe"<<endl;
		goto choix;
   case 'O':
		n=n->Optimisation(n);
		
		cout<<"L\'optimisation est effectué avec succe"<<endl;
		goto choix;
   case 'S':		
		break;
	default:
		cout<<"verifier votre choix\n";
		goto choix;
}
	system("pause");
	
}