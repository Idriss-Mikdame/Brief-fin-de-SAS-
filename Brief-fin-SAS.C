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
     int nbr;
    /* printf("Entrer le nomber de tache : ");
     scanf("%d",&nbr);
   for(int i=0;i<nbr;i++){}*/
    if(n>=100){
        printf("les list de tache max");
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
for(int i=0;i < n;i++){
        printf("l'affichage des informations des taches N-%d\n",i+1);
        printf("Titre de la tache           -> %s\n",taches[i].titre);
        printf("La description  de la tache -> %s\n",taches[i].description);
        printf("La date d'echeance la tache -> %s\n",taches[i].date_echeance);
        printf("La priorite de la tache     -> %s\n",taches[i].priorite);
    }}
void modifierTache(){
    int nbrM;
    printf("Choisire le NBR de tache pour modifier :");
    scanf("%d",&nbrM);
       if(nbrM < 1 || nbrM > n){
        printf("le nbr de tache invalide !!!");
       }
       nbrM--;
        printf("Ajouter pour modifier la tache N : %d\n",n);
        printf("Taper la tache : ");
        scanf("%s",taches[nbrM].titre);
        printf("Taper la description de la tache : ");
        scanf("%s",taches[nbrM].description);
        printf("Taper la date d'échéance dd/mm/aa : ");
        scanf("%s",taches[nbrM].date_echeance);
        printf("Taper la priorite de la tache : ");
        scanf("%s",taches[nbrM].priorite);
        printf("La modification est succes");}
void supprimerTache(){
    int nbrS;
    printf("Entre le Nbr de  la tache ete suprimer : ");
    scanf("%d",&nbrS);
    if (nbrS < 1 || nbrS > n )
    { printf("Le Nbr de la tache invalide !!!");}
    for (int j = nbrS; j < n - 1;j++){
            taches[j] = taches[ j + 1];
             }
            n--;
}
int main(){
    int choix;
    do{
        printf("-----MENUE--------\n");
        printf("1: Ajouter une tâche au Tableau\n");
        printf("2: Afficher le tableau des Tâches\n");
        printf("3: Ajouter pour modifier une Tache\n");
        printf("4: suprimer une tache\n");
        printf("5: Quitter le programme\n");
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
        case 5: printf("BYE!!!!");
            }
    }while(choix !=5);
    return 0;
}
