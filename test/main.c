#include <stdio.h>

char yourName[];

int main(void) {
    printf("Quel est ton prénom ?\n");
    scanf("%s", yourName);  // Donc en gros on fait %s pour sortir un string et %c pour un char donc un seul caractère. Si %c alors préciser index : [0]
    printf("Bonjour %s, bienvenue en C\n", yourName);
    return 0;
}
