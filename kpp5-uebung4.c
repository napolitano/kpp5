#include <stdio.h>

#define MAX_LAENGE 100

int main () {

    int laenge;
    char textPuffer[MAX_LAENGE];

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(textPuffer, MAX_LAENGE, stdin);

    // Remove \r and \n - But shouldn't happen
    for(laenge=0; !!textPuffer[laenge]; laenge++) {
        if(!!laenge && (textPuffer[laenge-1] == '\n' || textPuffer[laenge-1] == '\r')) {
            textPuffer[laenge-1] = 0;
            break;
        }
    }

    printf("Ihre Engabe war %d Zeichen lang", laenge-1);
    return 0;
}