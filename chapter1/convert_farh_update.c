//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

// affiche la table de conversion Fahrenheit-Celsius pour fahr allant de 0 à 300.
int main()
{
    float fahr, celsius;
    int mini, maxi, intervalle;

    mini = 0;//borne inférieur de la table
    maxi = 300;//borne supérieur de la table
    intervalle = 20;//intervalle entre les valeurs en degrés Fahrenheit

    fahr = mini;
    printf("Table de conversion (Fahr->Celsius) : \n");

    while (fahr <= maxi) {
        celsius = (5.0/ 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + intervalle;
    }

    celsius = mini;
    printf("Table de conversion (Celsius->Fahr) : \n");

    while (celsius <= maxi) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + intervalle;
    }

}
