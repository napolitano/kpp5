#include <stdio.h>

#define MAX_LAENGE 100

/**
 * @brief Erstellen Sie ein Programm, 
 * das den Benutzer einen Text eingeben
 * lässt und anschließend ausgibt, ob 
 * es sich dabei um ein Palindrom
 * (z.B. „rentner“ oder „lagerregal“) handelt.
 * 
 * @return int 
 */
int main () {

    int laenge, pruefungErfolgreich = 1;
    char eingabePuffer[MAX_LAENGE], reversePuffer[MAX_LAENGE];

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(laenge = 0; !!eingabePuffer[laenge]; laenge++);
    
    if(!!laenge && eingabePuffer[laenge-1] == '\n') {
        eingabePuffer[laenge-1] = 0;
        laenge--;
    }

    for(int i=0; i < laenge; i++) {
        if(eingabePuffer[i] != eingabePuffer[laenge - i -1]) {
            pruefungErfolgreich = 0;
            break;
        }
    }

    if(pruefungErfolgreich) {
       printf("Ihre Engabe war ein Palindrom");
    } else {
       printf("Ihre Engabe war kein Palindrom");
    }

    return 0;
}