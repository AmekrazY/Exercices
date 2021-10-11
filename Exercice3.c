#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    // declaration des variable
    int x, y, z;
    int max = 0;
    printf("entrer le premier entier :\n"); // demander le premier nombre
    scanf("%i", &x);
    printf("entrer le deuxieme entier :\n");//demander le deuxieme nombre
    scanf("%i", &y);
    printf("entrer le troixieme entier :\n");//demander le deuxieme nombre
    scanf("%i", &z);
    if (x > y)
    {
        max = x ;
    }
    else if (y > z)
    {
        max = y;
    }
    else
    {
        max = z ;
    }
    printf("Le nombre le plus grand est : %i \n ", max);

}