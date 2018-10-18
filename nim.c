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
	if (colonne < nb_colonnes && nb_pieces <= plateau[colonne]) {

	}
}