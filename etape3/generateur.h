#ifndef GENERATEUR_H
#define GENERATEUR_H

/* Commandes (renvoient void) */
extern void generateur_definir_premier(int valeur);
extern void generateur_definir_pas(int nouveau_pas);
extern void generateur_aller_au_debut(void);
extern void generateur_avancer(void);

/* Requête (lit sans modifier) */
extern int  generateur_courant(void);

#endif  /* GENERATEUR_H */
