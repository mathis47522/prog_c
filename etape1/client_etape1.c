#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

/* ---------- DEJA FOURNI : ne pas modifier ---------- */

static void usage(const char *prog) {
    fprintf(stderr, "Usage : %s <nombre>\n", prog);
    fprintf(stderr, "  <nombre>   nombre de symboles (>= 1)\n");
    fprintf(stderr, "Exemple : %s 3\n", prog);
}

int main(int argc, char *argv[]) {
    int n, i;
    int *tab;
    char reste;

    if (argc != 2
        || sscanf(argv[1], "%d%c", &n, &reste) != 1
        || n < 1) {
        usage(argv[0]);
        return EXIT_FAILURE;
    }

    /* ---------- A COMPLETER ---------- */

    /* 1. Allouer un tableau de n entiers avec malloc.
     *    Verifier que tab != NULL. Sinon EXIT_FAILURE. */
    /* ... a completer ... */

    tab=malloc(sizeof(int)*n);
    if (tab==NULL){
        return EXIT_FAILURE;
    }

    /* 2. Appeler serie_produire(n, tab, n).
     *    Verifier que le retour vaut 0.
     *    Sinon free(tab) puis EXIT_FAILURE. */
    /* ... a completer ... */

    if (serie_produire(n, tab, n)!=0){
        free(tab);
        return EXIT_FAILURE;
    }


    /* 3. Afficher l'en-tete :
     *      "- Production de N symbole(s) :"
     *    Puis parcourir le tableau et afficher chaque valeur
     *    au format : "__GLB_%d__" suivi d'un \n. */
    /* ... a completer ... */

    printf("- Production de %d symbole(s) :\n",n);
    for (i = 0; i < n; i++) {
        printf("__GLB_%d__\n", tab[i]);
    }


    /* 4. Liberer le tableau alloue. */
    /* ... a completer ... */
    free(tab);
    return EXIT_SUCCESS;
}