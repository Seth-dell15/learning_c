//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

#define MINI 0 //borne inférieur de la table
#define MAXI 300 //borne supérieur de la table
#define INTER 20 //intervalle entre les valeurs en degrés Fahrenheit

int main()
{
    int fahr;

    for (fahr = MINI; fahr <= MAXI; fahr = fahr + INTER) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

}