#include "nim.h"
#include "nim_ihm.h"

int lire_entier(int min, int max) {
	int entier;
	do {
		printf("Saisissez un entier entre %d et %d", min, max);
		scanf("%d", &entier);
	} while (min > entier && max < entier);
	return entier;
}

void plateau_afficher(const int plateau[], int nb_colonnes) {
	int i;
	int j;
	for (i = 0; i < nb_colonnes; i++) {
		for (j = 0; j < plateau[i]; j++) {
			ihm_ajouter_piece(j,i);
		}
	}
}