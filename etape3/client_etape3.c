#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

/* ---------- DEJA FOURNI : ne pas modifier ---------- */

static void usage(const char *prog) {
    fprintf(stderr, "Usage : %s <nombre> [<premier> <pas>]\n", prog);
    fprintf(stderr, "  <nombre>   nombre de symboles (>= 1)\n");
    fprintf(stderr, "  <premier>  valeur de depart (defaut : 1)\n");
    fprintf(stderr, "  <pas>      increment (defaut : 1, non nul)\n");
    fprintf(stderr, "Exemples :\n");
    fprintf(stderr, "  %s 3\n", prog);
    fprintf(stderr, "  %s 3 10 5\n", prog);
}

int main(int argc, char *argv[]) {
    int n;
    int premier = 1, pas = 1;
    char reste;

    /* --- Parsing fourni : DEJA ECRIT --- */
    if (argc < 2 || argc > 4) {
        usage(argv[0]);
        return EXIT_FAILURE;
    }
    if (sscanf(argv[1], "%d%c", &n, &reste) != 1 || n < 1) {
        usage(argv[0]);
        return EXIT_FAILURE;
    }
    if (argc >= 3 && sscanf(argv[2], "%d%c", &premier, &reste) != 1) {
        usage(argv[0]);
        return EXIT_FAILURE;
    }
    if (argc == 4) {
        if (sscanf(argv[3], "%d%c", &pas, &reste) != 1 || pas == 0) {
            usage(argv[0]);
            return EXIT_FAILURE;
        }
    }

    /* ---------- A COMPLETER ---------- */

    /* 1. Configurer via serie_configurer(premier, pas). */
    /* ... a completer ... */
    serie_configurer(premier, pas);

    /* 2. Afficher la serie avec UN SEUL appel :
     *      serie_afficher_format(n, prefixe, suffixe)
     *    ou :
     *      - prefixe = "\"__GLB_"   (guillemet + __GLB_)
     *      - suffixe = "__\"\n"     (__ + guillemet + retour a la ligne)
     *
     *    Plus de malloc, plus de boucle, plus de free :
     *    serie s'occupe de tout. */
    /* ... a completer ... */

    serie_afficher_format(n, "\"__GLB_", "__\"\n");

    return EXIT_SUCCESS;
}