#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct{
    char titre[50];
    char description[100];
    char priorite[10];
    char date_echeance[20];
}Tache;
int n = 0;
Tache taches[100];

 void ajout_tache(){
    if(n>=100){
        printf("les lists de tache max");
    }
        printf("Ajouter les taches N : %d\n",n+1);
        printf("Taper la tache : ");
        scanf("%s",taches[n].titre);
        printf("Taper la description de la tache : ");
        scanf("%s",taches[n].description);
        printf("Taper la date d'échéance (dd/mm/aa) : ");
        scanf("%s",taches[n].date_echeance);
        printf("Taper la priorite de la tache (1. High / 2. Low) : ");
        scanf("%s",taches[n].priorite);
        n = n + 1;

}
void afficherTaches(){
    if(n < 1){
        printf("Exist aucun tache a afficher \n");
        printf("Merci de cree des taches dans option 1 \n");
        }
       else {
for(int i=0;i < n;i++){
        printf("l'affichage des informations des taches N-%d\n",i+1);
        printf("Titre de la tache           -> %s\n",taches[i].titre);
        printf("La description  de la tache -> %s\n",taches[i].description);
        printf("La date d'echeance la tache -> %s\n",taches[i].date_echeance);
        printf("La priorite de la tache     -> %s\n",taches[i].priorite);
    }}}


void modifierTache(){
     if(n < 1){
        printf("Exist aucun tache pour Modifier\n");
        printf("Merci de cree des taches dans option 1 \n");}
       else {
    int nbrM;
    printf("Choisire le NBR de tache pour modifier :");
    scanf("%d",&nbrM);
       if(nbrM < 1 || nbrM > n){
        printf("le nbr de tache invalide !!!");
       }
       nbrM--;
        printf("Ajouter pour modifier la tache N : %d\n",nbrM+1);
        printf("Taper la tache : ");
        scanf("%s",taches[nbrM].titre);
        printf("Taper la description de la tache : ");
        scanf("%s",taches[nbrM].description);
        printf("Taper la date d'échéance dd/mm/aa : ");
        scanf("%s",taches[nbrM].date_echeance);
        printf("Taper la priorite de la tache : ");
        scanf("%s",taches[nbrM].priorite);
        printf("La modification est succes\n");}}


void supprimerTache(){
    if(n < 1){
        printf("Exist aucun tache pour suprimer\n");
        printf("Merci de cree des taches dans option 1 \n");}
       else {
    int nbrS;
    printf("Entre le Nbr de  la tache ete suprimer : ");
    scanf("%d",&nbrS);
    if (nbrS < 1 || nbrS > n )
    { printf("Le Nbr de la tache invalide !!!");}
    nbrS--;
    for (int j = nbrS; j < n - 1;j++){
            taches[j] = taches[ j + 1];
             }
            n--;
}}
void filtrer_tache(){
    char priorite[10];
        if(n < 1){

            printf("Exist aucun tache pour filtrer\n ");
            printf("Merci de cree des taches dans option 1 \n");}
        else {
            printf("Entrez la priorite à filtrer (High/Low) : ");
            scanf("%s",&priorite);

    int touver = 0;
    for(int i=0;i < n;i++){
        if(strcmp(taches[i].priorite,priorite) == 0)
        {
        touver = 1;
        printf("\nl'affichage des informations des taches N-%d\n",i+1);
        printf("Titre de la tache           -> %s\n",taches[i].titre);
        printf("La description  de la tache -> %s\n",taches[i].description);
        printf("La date d'echeance la tache -> %s\n",taches[i].date_echeance);
        printf("La priorite de la tache     -> %s\n",taches[i].priorite);

        }
    }
    if (touver == 0)
        printf("aucun priorite trouve dans les taches pour %s\n", priorite);
}}

int main(){
    int choix;
    do{
        printf("-----MENUE--------\n");
        printf("1: Ajouter une tâche\n");
        printf("2: Afficher les taches\n");
        printf("3: Modifier une Tache\n");
        printf("4: suprimer une tache\n");
        printf("5: filtrer les taches\n");
        printf("6: Quitter le programme\n");
        printf("Entrer le choix :");
        scanf("%d",&choix);
        switch(choix){
        case 1: ajout_tache();
            break;
        case 2:
            afficherTaches();
            break;
        case 3:
            modifierTache();
            break;
        case 4:
            supprimerTache();
            break;
        case 5:
            filtrer_tache();
            break;
        case 6:
            printf("BYE!!!!");
            break;

        default:
            printf("choix invalide\n");
            break;
            }
    }while(choix !=6);
    return 0;
}
