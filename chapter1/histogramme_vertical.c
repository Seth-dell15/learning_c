//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

#define MAX_LONGUEUR 15

int main() {
    int c, i, j;
    int longueur_courante = 0;
    int longueurs[MAX_LONGUEUR + 1];
    int max_frequence = 0;

    // 1. Initialisation du tableau
    for (i = 0; i <= MAX_LONGUEUR; ++i) {
        longueurs[i] = 0;
    }

    // 2. Comptage des longueurs de mots
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (longueur_courante > 0) {
                if (longueur_courante <= MAX_LONGUEUR) {
                    ++longueurs[longueur_courante];
                } else {
                    ++longueurs[MAX_LONGUEUR];
                }
                longueur_courante = 0;
            }
        } else {
            ++longueur_courante;
        }
    }

    // Sécurité pour le dernier mot
    if (longueur_courante > 0) {
        if (longueur_courante <= MAX_LONGUEUR) {
            ++longueurs[longueur_courante];
        } else {
            ++longueurs[MAX_LONGUEUR];
        }
    }

    // 3. Recherche de la fréquence maximale (hauteur du graphique)
    for (i = 1; i <= MAX_LONGUEUR; ++i) {
        if (longueurs[i] > max_frequence) {
            max_frequence = longueurs[i];
        }
    }

    // 4. Affichage de l'histogramme VERTICAL
    printf("\n--- Histogramme Vertical ---\n\n");

    // On parcourt les lignes du HAUT (max_frequence) vers le BAS (1)
    for (i = max_frequence; i > 0; --i) {
        printf("%2d |", i); // Axe Y (effectif)

        for (j = 1; j <= MAX_LONGUEUR; ++j) {
            if (longueurs[j] >= i) {
                printf("  * "); // Si la colonne atteint cette hauteur
            } else {
                printf("    "); // Sinon, un vide
            }
        }
        putchar('\n');
    }

    // Axe X (Ligne de séparation)
    printf("   +");
    for (j = 1; j <= MAX_LONGUEUR; ++j) {
        printf("----");
    }
    printf("\n    ");

    // Légende des colonnes (Axe X : 1, 2, ..., 15+)
    for (j = 1; j <= MAX_LONGUEUR; ++j) {
        if (j == MAX_LONGUEUR) {
            printf("%2d+ ", MAX_LONGUEUR);
        } else {
            printf("%2d  ", j);
        }
    }
    printf("\n");
}