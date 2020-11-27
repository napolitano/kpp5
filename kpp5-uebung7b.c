#include <stdio.h>

#define MAX_LAENGE 100

int main () {

    char eingabePuffer[MAX_LAENGE];

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(int i=0; !!eingabePuffer[i]; i++) {
        if(eingabePuffer[i] != 'e') {
            printf("%c", eingabePuffer[i]);
        }
    }

    return 0;
}