#include <stdio.h>
#include "serie.h"
#include "generateur.h"

void serie_afficher(int longueur)
{
    int i;
    generateur_aller_au_debut();
    for (i = 0; i < longueur; i++) {
        printf("%d ", generateur_courant());
        generateur_avancer();
    }
    printf("\n");
}
