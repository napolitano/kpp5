#include <stdio.h>

#define MAX_LAENGE 5

/**
 * @brief Schreiben Sie ein Programm, 
 * das eine nur aus Ziffern bestehende
 * Zeichenkette einliest und aus dem 
 * Eingabestring eine int-Zahlberechnet
 * 
 * @return int 
 */
int main () {

    int zaehler = 0;
    
    char eingabePuffer[MAX_LAENGE];

    printf("Bitte geben Sie eine Folge von Ziffern (max. 100 Ziffern, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

/*
    while (zaehler < MAX_LAENGE) {
        puffer = kbhit();

        if(puffer == '\n') {
            break;
        }

        if(puffer < 48 || puffer > 57) {
            continue;
        }
        zaehler++;
        eingabe[zaehler] = puffer;
    }
*/

    printf("%s", eingabe);

    return 0;
}
