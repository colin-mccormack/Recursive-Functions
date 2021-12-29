//
// Created by colin on 12/22/2021.
//

static int myStrLen(char *s, int i) {

    if ( s[i] )
        return myStrLen(s, i + 1);

    return i;

}

int Q09() {

    printf ("\nCurrently in Q0%i : ", 9);
    printf ("Determine the number of characters in a string using the following interface: \n"
            "int myStrLen(char *s, int i) \n");

    int length = 0;
    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    length = myStrLen (string, FIRST_CHAR);

    printf ("Your string is %i characters long.\n", length);

    return 0;

}