#include <stdio.h>

#define MAX_LAENGE 100

/**
 * @brief Erstellen Sie ein Programm, das 
 * den Benutzer einen Text eingeben lässt 
 * und anschließend ausgibt, wie viele 
 * Zeichen dieser lang ist.
 * 
 * @return int 
 */
int main () {

    int laenge;
    char eingabePuffer[MAX_LAENGE];

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(laenge=0; !!eingabePuffer[laenge]; laenge++);
    if(!!laenge && eingabePuffer[laenge-1] == '\n') {
        eingabePuffer[laenge-1] = 0;
        laenge--;
    }

    printf("Ihre Engabe war %d Zeichen lang", laenge);

    return 0;
}