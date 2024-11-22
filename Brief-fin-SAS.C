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
     printf("Entrer le nomber de tache : ");
     scanf("%d",&nbr);
   for(int i=0;i<nbr;i++){
        printf("Ajouter les taches N : %d\n",n+1);
        printf("Taper la tache : ");
        scanf("%s",taches[n].titre);
        printf("Taper la description de la tache : ");
        scanf("%s",taches[n].description);
        printf("Taper la date d'échéance dd/mm/aa : ");
        scanf("%s",taches[n].date_echeance);
        printf("Taper la priorite de la tache : ");
        scanf("%s",taches[n].priorite);
        n = n + 1;
        }
}
void afficherTaches(){
for(int i=0;i < n;i++){
        printf("l'affichage des informations des taches N-%d\n",i+1);
        printf("Titre de la tache           -> %s\n",taches[i].titre);
        printf("La description  de la tache -> %s\n",taches[i].description);
        printf("La date d'echeance la tache -> %s\n",taches[i].date_echeance);
        printf("La priorite de la tache     -> %s\n",taches[i].priorite);
    }}

int main(){
    int choix;
    do{
        printf("-----MENUE--------\n");
        printf("1: Ajouter une tâche au tableau\n");
        printf("2: Afficher le tableau des tâches\n");
        printf("3: Quitter le programme\n");
        printf("Entrer le choix :");
        scanf("%d",&choix);
        switch(choix){
        case 1: ajout_tache();
            break;
        case 2:
            afficherTaches();
            break;
        case 3: printf("BYE!!!!");
            }
    }while(choix !=3);
    return 0;
}
