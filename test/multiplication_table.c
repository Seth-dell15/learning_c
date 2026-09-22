//
// Created by hugoc on 13/09/2026.
//
#include <stdio.h>

int userInput;
int i;

int main(void) {
    printf("Enter the number for multiplication table: \n ");
    scanf("%d", &userInput);
    for (i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", userInput, i, userInput*i);
    }
}