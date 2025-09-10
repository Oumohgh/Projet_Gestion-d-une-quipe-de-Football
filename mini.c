#include <stdio.h>
#include<string.h>

int j_max;
struct joueur
{
    int id;
    char full_name[50];
    int num_maillot;
    int age;
    int buts;
    char poste[4];
    char statut[2];
};

void ajouterUnJoueur();
void ajouterPlusieurs();
void afficher_ordre();
void afficherParNom();
void afficherParAge();
void afficherParPoste();
void modifierJoueur();
void supprimerJoueur();
void chercherParId();
void chercherParNom();
void statistiques();

int main() {
    int choix;

    do {
        printf("\n===== MENU GESTION EQUIPE DE FOOT =====\n");
        printf("1. Ajouter un joueur\n");
        printf("2. Ajouter plusieurs joueurs\n");
        printf("3. Afficher tous les joueurs\n");
        printf("4. Afficher joueurs par nom (\n");
        printf("5. Afficher joueurs par age \n");
        printf("6. Afficher joueurs par poste\n");
        printf("7. Modifier un joueur\n");
        printf("8. Supprimer un joueur\n");
        printf("9. Rechercher un joueur par ID\n");
        printf("10. Rechercher un joueur par nom\n");
        printf("11. Statistiques\n");
        printf("12. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterUnJoueur(); break;
            case 2: ajouterPlusieurs(); break;
            case 3: afficherTous(); break;
            case 4: afficherParNom(); break;
            case 5: afficherParAge(); break;
            case 6: afficherParPoste(); break;
            case 7: modifierJoueur(); break;
            case 8: supprimerJoueur(); break;
            case 9: chercherParId(); break;
            case 10: chercherParNom(); break;
            case 11: statistiques(); break;
            case 12: printf("Au revoir !\n"); break;
            default: printf("Choix invalide, reessayez.\n");
        }

    } while (choix != 12);

    return 0;
}

void chercherParId(){
    int rech_id;
    int x;
    struct joueur j1 [j_max];
    printf("veuillez entrer Joueur Id: ");
                   scanf("%i", &rech_id);
                   for(x=1;x<=j_max;x++)
                    {
                      if(rech_id == j1[x].id)
                       {
                        printf("Joueur %s, number:%s ,son poste:%s", j1[x].full_name, j1[x].num_maillot, j1[x].poste);
                       break;
                    }  
                    }
               }



void ajouterUnJoueur(){ 
    int id =0;
    struct joueur j1 [j_max];
     j1[j_max].id=++id;
    printf("Ajouter un joueur:");
        
         
        printf("\nEntrer le nome ");
        scanf("%s",j1[j_max].full_name);
        printf("\n  son poste :");
        scanf("%s",j1[j_max].poste);
        printf("IEntrer un numero de j: ");
        scanf("%d",&j1[j_max].num_maillot);
        printf("\nCombien de buts: ");
        scanf("%d",&j1[j_max].buts);    
    }
void ajouterPlusieurs(){
        printf("ajouter Plusieurs joueur:\n");
     struct joueur j1 [j_max];
    for(int i=0;i<j_max;i++){
        ajouterUnJoueur ();
    }
}
void afficher_paralphabetordre(){
     struct joueur j1 [j_max];
     int j,i;
     char x;
     for(i=0;i<j_max-1;i++){
        for(j=1;j<j_max;j++){
            if (strcmp(j1[i].full_name,j1[j].full_name)>0){
            strcpy(x,j1[i].full_name);
            strcpy(j1[i].full_name,j1[j].full_name);
            strcpy(j1[j].full_name,x);
        }  }  }
        printf("la liste de tous les joueurs  par ordre alphabétique (Nom):\n");
        for(i=0;i<j_max;i++){
             printf("\n nom(nom,prenom) ");
        
        printf("\n  son poste :%s",j1[j_max].poste);
        
        printf("IEntrer un numero de j: ");
      
        printf("\nbuts: ");
     

        }
        
        }

     