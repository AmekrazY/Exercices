#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a, b;       // declaration des variables
    printf("entrer le premier nombre :\n");     // saisir le premier entier
    scanf("%i", &a);
    printf("entrer le deuxieme nombre :\n");    // saisir le premier entier
    scanf("%i", &b);
    printf("le produit de %i et %i est :%i\n", a, b, a * b);    // affichage de resultat de produit

}