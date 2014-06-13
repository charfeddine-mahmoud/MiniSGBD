#include"Mes_classes.h"
attribut::attribut()
{ 
char i;
this->suivant=NULL;
	cout<<"donner votre chaine :"<<endl;
	cin>>nom;
	cout<<"est ce que vous voulez ajouter d'autre chaine :"<<endl;
		choix:
	cout<<"*****************************************************\n";
    cout<<"*               1 : OUI                             *\n";
	cout<<"*               2 : NON                             *\n";
	cout<<"*****************************************************\n";

	cin>>i;
	switch(i){

	case '1':
	this->suivant=new attribut();		
		
	case '2':		
		break;
	default:
		cout<<"verifier votre choix\n";
		goto choix;
}
}
string attribut::afficher(attribut*liste)
{string res1="";
	attribut*tete=liste;
	while(tete!=NULL)
	{
		res1+=tete->nom;
		res1+=",";		
		tete=tete->suivant;
	}
	return res1;
	
}
int attribut::get_nbr_elm(attribut*l)
{
	attribut*p=l;
	int i=0;
	while(p!=NULL)
	{
		i++;
		p=p->suivant;
	}
	return(i);
}
attribut::~attribut()
{
	delete[]suivant;
}
noeud::noeud(char nom[20],noeud*opA1,noeud*opL,noeud*opA2,attribut*Att)
{
	strcpy(nom_noeud,nom);
	operateur_algebr1=opA1;
	operateur_algebr2=opA2;
	operateur_logique=opL;
	liste_attributs=Att;
}
noeud::noeud()
{
	cout<<"donner le nom de noeud : "<<endl;
	cin>>nom_noeud;
	if(strcmp(nom_noeud,"PROJECT")==0)
	{
	operateur_algebr1=new noeud();
	operateur_algebr2=NULL;
	operateur_logique=NULL;
	liste_attributs=new attribut();
	}else
		if(strcmp(nom_noeud,"JOIN")==0)
		{ 
			operateur_algebr1=new noeud();
			operateur_algebr2 = new noeud();
			operateur_logique= new noeud();
			liste_attributs=NULL;
		}else
			if(strcmp(nom_noeud,"SELECT")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 = NULL;
			    operateur_logique= new noeud();
			    liste_attributs=NULL;
			}else
			if(strcmp(nom_noeud,"MINUS")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"UNION")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"INTER")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"PRODUIT")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"DIVISE")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"=")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,">")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"<")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"<=")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,">=")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"AND")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"ALL")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"XOR")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
			else
			if(strcmp(nom_noeud,"<>")==0)
			{
				operateur_algebr1=new noeud();
			    operateur_algebr2 =new noeud();
			    operateur_logique= NULL;
			    liste_attributs=NULL;
			}
		else
		{
			operateur_algebr1=NULL;
	        operateur_algebr2=NULL;
	        operateur_logique=NULL;
	        liste_attributs=NULL;
		}


}

//***********************
 void noeud::EnregArbre(noeud * Racine,char * NomFic)
     {
     char * nb;
     FILE * fic;
     fic=fopen(NomFic,"at");
     if (Racine!=NULL)
     {
		 nb=Racine->nom_noeud;
     fwrite(&nb,sizeof(char *),1,fic);
     fclose(fic);
	 if (Racine->operateur_algebr1!=NULL || Racine->operateur_algebr2!=NULL || Racine->operateur_logique!=NULL)
     {
		 EnregArbre(Racine->operateur_algebr1,NomFic);
		 EnregArbre(Racine->operateur_algebr2,NomFic);
		 EnregArbre(Racine->operateur_logique,NomFic);
     }
     }
     }
 //**********************
 int noeud::maximum(int a,int b,int c)
 {
	 if(a>b&&a>c)
		 return a;
	 else
		 if(b>a&&b>c)
			 return b;
		 else
			 if(c>a&&c>b)
				 return c;
 }
 //********************
 int noeud::hauteur(noeud*a)
 {
	 if(a==NULL)
		return 0;
	else
		return(1+maximum((hauteur(a->operateur_algebr1)),(hauteur(a->operateur_algebr2)),(hauteur(a->operateur_logique))));
}
    
     noeud * noeud::ChargerArbre(noeud * Racine,char * NomFic)
     {
     char * nb;
     FILE * fic;
     fic=fopen(NomFic,"rt");
     fread(&nb,sizeof(char *),1,fic);
     while (!feof(fic))
     {
     fread(&nb,sizeof(char *),1,fic);
     }
     fclose(fic);
     return Racine;
     }
//************
void noeud::afficher_arbre(noeud *a,int h,int r)
{int i;
	
		if (a!=NULL)
		{
		if(r==0)
			{	
				for(int i=0;i<h;i++)
		        cout<<"\t";
				cout<<"/\\\n";
				for(i=0;i<h;i++)
		        cout<<"\t";
				cout<<a->nom_noeud;
				cout<<"\t";
				cout<<"\n";
				if(a->liste_attributs!=NULL)
				{
					string x;
					for( i=0;i<h;i++)
				    {cout<<"\t";}
				   cout<<"    \\ \n";
				    for( i=0;i<h;i++)
				     { cout<<"    \t";}
					x=a->liste_attributs->afficher(a->liste_attributs);		
					cout<<x<<endl;
				}
				
			}
		    if(r==1)
			{	
				for(int i=0;i<h;i++)
		        cout<<"\t";
				cout<<"/\n";
				for(i=0;i<h;i++)
		        cout<<"\t";
				cout<<a->nom_noeud;
				cout<<"\t";
				cout<<"\n";
				if(a->liste_attributs!=NULL)
				{
					string x;
					for( i=0;i<h;i++)
				    {cout<<"\t";}
				   cout<<"    \\ \n";
				    for( i=0;i<h;i++)
				     { cout<<"    \t";}
					x=a->liste_attributs->afficher(a->liste_attributs);		
					cout<<x<<endl;
				}
			}
			if(r==2)
			{
				for(int i=0;i<h;i++)
	         	cout<<"\t";
				cout<<"\\\n";
				for(i=0;i<h;i++)
	         	cout<<"\t";
				cout<<a->nom_noeud;
				cout<<"\n";
				if(a->liste_attributs!=NULL)
				{
					string x;
					for( i=0;i<h;i++)
				    {cout<<"\t";}
				   cout<<"    \\ \n";
				    for( i=0;i<h;i++)
				     { cout<<"    \t";}
					x=a->liste_attributs->afficher(a->liste_attributs);		
					cout<<x<<endl;
				}
			}
			if(r==3)
			{
				for(int i=0;i<h;i++)
	         	cout<<"\t";
				cout<<"\\";
				//cout<<"\t";
				cout<<"\n";
				for(i=0;i<h;i++)
	         	cout<<"\t";
				cout<<a->nom_noeud;
				cout<<"\n";
				
				
			}
			afficher_arbre(a->operateur_algebr1,h-1,1);
			afficher_arbre(a->operateur_algebr2,h,2);
			afficher_arbre(a->operateur_logique,h+1,3);
		}
}

void noeud::afficher_arbre2(noeud *racine,int h)
		{
    int i;
    for (i=0; i < h; i++)
    {
        fputs("|___ ", stdout);
    }
 
	cout<<"["<<racine->nom_noeud<<"]\n";
	if (racine->operateur_algebr1) afficher_arbre2(racine->operateur_algebr1, h + 1);
	if (racine->operateur_algebr2) afficher_arbre2(racine->operateur_algebr2, h + 1);
	if (racine->operateur_logique) afficher_arbre2(racine->operateur_logique, h + 1);
	if(racine->liste_attributs!=NULL)
				{
	for (i=0; i < h+1; i++)
    {
        fputs("|___ ", stdout);
    }
    cout<<racine->liste_attributs->afficher(racine->liste_attributs)<<endl;

	}
}
noeud* noeud::T1(noeud* a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"SELECT")==0)
			{ 
				
				if(t->operateur_logique!=NULL)
				{
					if(strcmp(t->operateur_logique->nom_noeud,"AND")==0||strcmp(t->operateur_logique->nom_noeud,"XOR")==0)
					{	noeud*select=t->operateur_logique;
						strcpy(select->nom_noeud,"SELECT");
						select->operateur_logique=select->operateur_algebr2;
						select->operateur_algebr2=NULL;
						noeud* aux=	t->operateur_logique->operateur_algebr1;
						t->operateur_logique->operateur_algebr1=NULL;
						select->operateur_algebr1=t->operateur_algebr1;
						t->operateur_algebr1=NULL;
						t->operateur_algebr1=select;						
						t->operateur_logique=aux;				


					
					}
					
				}             
		    
			
		
		}
	  T1(t->operateur_algebr1);
	}
return t;
	

	
}
noeud* noeud::T2(noeud*a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"PROJECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"PROJECT")==0&&strcmp(t->operateur_algebr1->liste_attributs->nom,"*")==0||t->operateur_algebr1->liste_attributs->get_nbr_elm(t->operateur_algebr1->liste_attributs)>t->liste_attributs->get_nbr_elm(t->liste_attributs))
					{
						t->operateur_algebr1=t->operateur_algebr1->operateur_algebr1;	
						t->operateur_algebr1->operateur_algebr1=NULL;
					
					}
					
				}           
		    
		   }
	  T2(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::T3(noeud*a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"SELECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL&&t->operateur_logique!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"PROJECT")==0&&t->operateur_algebr1->liste_attributs!=NULL)
					{  
	                    strcpy(t->nom_noeud,"PROJECT");		
						strcpy(t->operateur_algebr1->nom_noeud,"SELECT");
						noeud*aux=t->operateur_logique;
						attribut*aux2=t->operateur_algebr1->liste_attributs;
						t->liste_attributs=aux2;
						t->operateur_logique=NULL;
						t->operateur_algebr1->operateur_logique=aux;
						t->operateur_algebr1->liste_attributs=NULL;							
					}
					
				}  
		    
		   }
	  T3(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::T4(noeud*a)
{
	noeud* t=a;
	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"SELECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL&&t->operateur_logique!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"PRODUIT")==0)
					{ 
						strcpy(t->nom_noeud,"PRODUIT");		
						strcpy(t->operateur_algebr1->nom_noeud,"SELECT");
						noeud*aux=t->operateur_logique;
						noeud*aux2=t->operateur_algebr1->operateur_algebr2;
						t->operateur_algebr2=aux2;
						t->operateur_logique=NULL;
						t->operateur_algebr1->operateur_logique=aux;
						t->operateur_algebr1->operateur_algebr2=NULL;				
					}
					
				} 
		    
		   }
	  T4(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::T5(noeud*a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"SELECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL&&t->operateur_logique!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"UNION")==0)
					{  	
						strcpy(t->nom_noeud,"UNION");		
						strcpy(t->operateur_algebr1->nom_noeud,"SELECT");
						t->operateur_algebr1->operateur_logique=t->operateur_algebr1->operateur_algebr2;
						t->operateur_algebr1->operateur_algebr2=NULL;
						noeud*aux=t->operateur_logique;
						noeud*aux2=t->operateur_algebr1->operateur_algebr1;
						t->operateur_logique=NULL;
						t->operateur_algebr2=new noeud("SELECT",aux2,aux,NULL,NULL);
					}
					
				} 
		    
		   }
	  T5(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::T6(noeud*a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"SELECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL&&t->operateur_logique!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"MINUS")==0)
					{ 
						strcpy(t->nom_noeud,"MINUS");		
						strcpy(t->operateur_algebr1->nom_noeud,"SELECT");
						noeud*aux=t->operateur_logique;
						noeud*aux2=t->operateur_algebr1->operateur_algebr2;
						t->operateur_algebr2=aux2;
						t->operateur_logique=NULL;
						t->operateur_algebr1->operateur_logique=aux;
						t->operateur_algebr1->operateur_algebr2=NULL;				
					}
				}
		    
		   }
	  T6(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::T7(noeud*a)
{
	noeud* t=a;

	if(t!=NULL)
	{
		
			if(strcmp(t->nom_noeud,"PROJECT")==0)
			{ 
				
				if(t->operateur_algebr1!=NULL&&t->liste_attributs!=NULL)
				{
					if(strcmp(t->operateur_algebr1->nom_noeud,"PRODUIT")==0)
					{	strcpy(t->nom_noeud,"PRODUIT");		
						strcpy(t->operateur_algebr1->nom_noeud,"PROJECT");
						noeud*aux2=t->operateur_algebr1->operateur_algebr2;
						t->operateur_algebr1->liste_attributs=t->liste_attributs;
						t->operateur_algebr1->operateur_algebr2=NULL;
						attribut*aux=t->liste_attributs;
						t->liste_attributs=NULL;
						t->operateur_algebr2=new noeud("PROJECT",aux2,NULL,NULL,aux);
					}
					
				}  
		   }
	  T7(t->operateur_algebr1);
	}
return t;
}
noeud* noeud::Optimisation(noeud*a)
{
	a=a->T1(a);
	a=a->T2(a);
	a=a->T3(a);
	a=a->T4(a);
	a=a->T5(a);
	a=a->T6(a);
	a=a->T7(a);
	return a;
}
noeud::~noeud()
{
	delete[]operateur_algebr1;
	delete[]operateur_algebr2;
	delete[]operateur_logique;
}