//
// Created by colin on 12/20/2021.
//

#include "dependencies.h"
#define QUESTION 1

void charCount (char *s, char c, int *index, int *count) {

    if (!s[*index])
        return;

    if (s[*index] == c)
        (*count)++;

    (*index)++;

    charCount (s, c, index, count);

}

int main() {

    printf ("\nCurrently in Q0%i : ", QUESTION);
    printf ("Count number of times char is in string\n");

    char c;
    char string[MAX_STRING_LENGTH];
    int count, index;

    count = 0;
    index = 0;

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);
    printf ("Please enter the char to count : ");
    scanf (" %c", &c);

    charCount (string, c, &index, &count);

    printf ("The char appears in the string %i times.\n", count);

}
