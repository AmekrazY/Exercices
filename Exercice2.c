#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int x, y, e;  // declaration des variable
    printf("entrer le premier entier :\n"); // demander le premier nombre
    scanf("%i", &x);
    printf("entrer le deuxieme entier :\n");//demander le deuxieme nombre
    scanf("%i", &y);
    printf("les entier avant l'echange :\n%i %i :\n", x, y); // avant lechange
    e = x;                          // on utilise variable temporaire pour faire l'echange
    x = y;
    y = e;
    printf("les entiers apres l'echange:\n%i %i :\n", x, y); // apres l'echange


}