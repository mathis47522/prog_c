#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

static void usage(const char *prog) {
    fprintf(stderr, "Usage : %s <nombre>\n", prog);
    fprintf(stderr, "  <nombre>   nombre de symboles (>= 1)\n");
    fprintf(stderr, "Exemple : %s 3\n", prog);
}

int main(int argc, char *argv[]) {
    int n;
    char reste;

    if (argc != 2
        || sscanf(argv[1], "%d%c", &n, &reste) != 1
        || n < 1) {
        usage(argv[0]);
        return EXIT_FAILURE;
    }

    serie_afficher(n);

    return EXIT_SUCCESS;
}
