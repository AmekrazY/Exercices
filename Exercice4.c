#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // declaration de variable sous forme de tableaux
    char m[20];
    char im[20];
    //open CSV file
    FILE *file = fopen("immatvoiture.csv", "a");
    // premier argument est le nom du ficher
    if (!file)
    {
        return 1;
    }
    printf("Le modèle :\n");        //obtenir le modele
    scanf("%s", m);
    printf("L'immatriculation :\n");    // obtenir l'immatriculation
    scanf("%s", im);
    fprintf(file, "Le modèle :%s\n,L'immatrucilation : %s\n", m, im);   // ecrire dans le fichier csv
    fclose(file);   //fermer le fichier csv
}