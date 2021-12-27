//
// Created by colin on 12/23/2021.
//

static inline int myStrLenLastInt(char *s, int i) {

    return i;

}

int Q10() {

    printf ("\nCurrently in Q0%i : ", 9);
    printf ("Determine the number of characters in a string using the following interface: \n"
            "int myStrLen(char *s, int last) \n");

    int length = 0;
    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    //This function is redundant...
    length = myStrLenLastInt (string, strlen(string));

    printf ("Your string is %i characters long.\n", length);

    return 0;

}