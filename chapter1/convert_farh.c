//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

// affiche la table de conversion Fahrenheit-Celsius pour fahr allant de 0 à 300.
int main()
{
    int fahr, celsius;
    int mini, maxi, intervalle;

    mini = 0;//borne inférieur de la table
    maxi = 300;//borne supérieur de la table
    intervalle = 20;//intervalle entre les valeurs en degrés Fahrenheit

    fahr = mini;
    while (fahr <= maxi) {
        celsius = (5 * (fahr - 32) / 9);
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + intervalle;
    }

}
