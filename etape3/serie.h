#ifndef SERIE_H
#define SERIE_H

/* Affiche 'longueur' nombres successifs. */
extern void serie_afficher(int longueur);

/* Remplit 'tab' avec 'longueur' nombres successifs.
 * Retour : 0 = succes, -1 = erreur. */
extern int  serie_produire(int longueur, int *tab, int taille);

/* Configure la valeur de depart et le pas. */
extern void serie_configurer(int premier, int pas);

/* Affiche les valeurs entourees d'un prefixe et suffixe. */
extern void serie_afficher_format(int longueur,
                                   const char *prefixe,
                                   const char *suffixe);

#endif  /* SERIE_H */