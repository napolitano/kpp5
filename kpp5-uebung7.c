#include <stdio.h>

#define MAX_LAENGE 100

/**
 * @brief Schreiben Sie ein Programm, 
 * das alle „e“ aus einem eingegebenen
 * String entfernt.
 * 
 * @return int 
 */
int main () {

    int zaehler = 0;
    char eingabePuffer[MAX_LAENGE];

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(int i=0; !!eingabePuffer[i]; i++) {
        if(eingabePuffer[i] != 'e') {
            eingabePuffer[zaehler++] = eingabePuffer[i];
        }
    }
    eingabePuffer[zaehler++] = 0;

    printf("%s", eingabePuffer);

    return 0;
}