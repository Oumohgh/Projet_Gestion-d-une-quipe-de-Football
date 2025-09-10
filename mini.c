#include <stdio.h>

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
struct joueur j1 [22] ;

void ajouterUnJoueur();
void ajouterPlusieurs();
void afficherTous();
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


void ajouterUnJoueur(){ 
    int id =0;
    struct joueur j1 [j_max];
    printf("Ajouter un joueur:");
        for(int i=0;i<23;i++){
        printf("\nEntrer le nome ");
        scanf("%s",j1[].full_name);
        printf("\n  son poste :");
        scanf("%s",j1[22].poste);
        printf("IEntrer un numero de j: ");
        scanf("%d",&j1[22].num_maillot);
        printf("\nCombien de buts: ");
        scanf("%d",&j1[22].buts);
    id++;
    }
}
void afficherTous(){
    printf("Ajouter un joueur:");
    for(int i=0)

}
