//
// Created by colin on 12/20/2021.
//

#include "../dependencies.h"

static int charCount (char *s, char c) {

    if (! ( *s ) )
        return 0;

    if (*s == c)
        return charCount (s + 1, c) + 1;

    else
        return charCount (s + 1, c);

}

int Q01() {

    printf ("\nCurrently in Q0%i : ", 1);
    printf ("Count number of times char is in string\n");

    char c;
    char string[MAX_STRING_LENGTH];
    int count;

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);
    printf ("Please enter the char to count : ");
    scanf (" %c", &c);

    count = charCount (string, c);

    printf ("The char appears in the string %i times.\n", count);

    return 0;

}
