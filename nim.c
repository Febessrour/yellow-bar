#include "nim.h"


void nim_plateau_init(int plateau[], int nb_colonnes) {
	int i;
	for (i = 0; i < nb_colonnes; i++) {
		plateau[i] = md_randint(0, PLATEAU_MAX_PIECES);
	}
}

int nim_qui_commence(void) {
	int debut;
	debut = md_randint(0,1);
	if (debut == 0) {
		return "JOUEUR_HUMAIN";
	}
	else if (debut == 1) {
		return "JOUEUR_IA";
	}
}

int nim_jouer_tour(int plateau[], int nb_colonnes, int colonne, int nb_pieces) {
	int i;
	if (colonne >= 0 && colonne <= nb_colonnes && nb_pieces <= plateau[colonne]) {
		plateau[colonne] -= nb_pieces;
		return "Vrai";
	}
	return 0;
}

void nim_plateau_supprimer_colonne(int plateau[], int nb_colonnes, int col_a_supprimer) {
	for (; col_a_supprimer < nb_colonnes; col_a_supprimer++) {
		plateau[col_a_supprimer] = plateau[col_a_supprimer + 1];
	}
}

int nim_plateau_defragmenter(int plateau[], int nb_colonnes) {
	int i;
	for (i = 0; i < nb_colonnes; i++) {
		if (plateau[i] == 0) {
			nim_plateau_supprimer_colonne(plateau, nb_colonnes, i);
		}
	}
	return nb_colonnes;
}

void nim_choix_ia(const int plateau[], int nb_colonnes, double difficulte, int *choix_colonne, int *choix_nb_pieces) {

}

void nim_choix_ia_aleatoire(const int plateau[], int nb_colonnes, int * choix_colonne, int * choix_nb_pieces) {
	choix_colonne= md_randint(,)
}