#include <stdio.h>

#define MAX_LAENGE 100

int inString(char haystack[], char needle) {
    for(int i=0; !!haystack[i]; i++) {
        if(haystack[i] == needle) {
            return 1;
        }
    }

    return 0;
}

int main () {
    int laenge, statLength = 0;
    char eingabePuffer[MAX_LAENGE];
    char statsPuffer[255];

    for(int i=0; i < 255; i++) {
        statsPuffer[i] = 0;
    }

    printf("Bitte geben Sie einen Text (max. 100 Zeichen, Eingabe mit <enter> abschliessen) ein:\n");
    fgets(eingabePuffer, MAX_LAENGE, stdin);

    for(laenge=0; !!eingabePuffer[laenge]; laenge++) {
        statsPuffer[eingabePuffer[laenge]]++;
    }

    printf("Ihre Eingabe umfasste %d Zeichen\n", laenge);

    for(int i=0; i < 255; i++) {
        if(!!statsPuffer[i]) {
            printf("%c (%d) wurde %dx verwendet\n", (char)i, i, statsPuffer[i] );
        }
    }


    return 0;
}