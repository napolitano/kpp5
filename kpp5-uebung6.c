#include <stdio.h>

#define MAX_LAENGE 100

/**
 * @brief Erstellen Sie ein Programm, das den 
 * Benutzer einen Text eingeben lässt und 
 * anschließend eine Statistik über die 
 * Verteilung derBuchstaben ausgibt.
 * 
 * @return int 
 */
int main () {
    int laenge, statLength = 0;
    char eingabePuffer[MAX_LAENGE];
    char statsPuffer[127];

    for(int i=0; i < 127; i++) {
        statsPuffer[i] = 0;
    }

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(laenge=0; !!eingabePuffer[laenge]; laenge++) {
        if(eingabePuffer[laenge] && eingabePuffer[laenge] < 127) {
            statsPuffer[eingabePuffer[laenge]]++;
        }
    }

    printf("Ihre Eingabe umfasste %d Zeichen\n", laenge);

    for(int i=0; i < 127; i++) {
        if(!!statsPuffer[i]) {
            printf("%c (%d) wurde %dx verwendet\n", (char)i, i, statsPuffer[i] );
        }
    }


    return 0;
}