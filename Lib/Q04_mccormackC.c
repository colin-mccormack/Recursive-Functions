//
// Created by colin on 12/20/2021.
//

#include "../dependencies.h"

void reversePrint (char *s) {

    if (! *s )
        return;

    reversePrint(s + 1);

    printf ("%c", *s);

}

int Q04() {

    printf ("\nCurrently in Q0%i : ", 4);
    printf ("Output the characters in a string in reverse order.\n");

    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    reversePrint (string);

    return 0;

}