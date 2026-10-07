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

int serie_produire(int longueur, int *tab, int taille)
{
    int i;

    if (longueur <= 0 || longueur > taille)
        return -1;

    generateur_aller_au_debut();
    for (i = 0; i < longueur; i++) {
        tab[i] = generateur_courant();
        generateur_avancer();
    }
    return 0;
}

void serie_configurer(int premier, int pas)
{
    generateur_definir_premier(premier);
    generateur_definir_pas(pas);
}

void serie_afficher_format(int longueur,
                              const char *prefixe,
                              const char *suffixe)
{
    int i;
    generateur_aller_au_debut();
    for (i = 0; i < longueur; i++) {
        printf("%s%d%s", prefixe, generateur_courant(), suffixe);
        generateur_avancer();
    }
    printf("\n");
}