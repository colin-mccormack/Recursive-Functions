//
// Created by colin on 12/25/2021.
//

int stringValue (char *s, int points) {

    if ( ! (*s) )
        return points;

    if ( (*s) == '*')
        return stringValue(s + 1, points + STAR_POINTS);

    else if ( (*s) >= 'a' && (*s) <= 'z')
        return stringValue(s + 1, points + LOWER_POINTS);

    else if ( (*s) >= 'A' && (*s) <= 'Z')
        return stringValue(s + 1, points + UPPER_POINTS);

    else if ( (*s) >= '0' && (*s) <= '9')
        return stringValue(s + 1, points + NUMBER_POINTS);

    else
        return stringValue(s + 1, points);

}

int Q13() {

    printf ("\nCurrently in Q0%i : ", 13);
    printf ("Determine the value of a given string according to the following rules: \n"
            "10 points for lowercase chars, \n"
            "20 points for uppercase chars, \n"
            "50 points for number chars, \n"
            "100 points for ‘*’, \n"
            "and zero points for all other characters.\n");

    int value;
    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    value = stringValue (string, 0);

    printf ("Your string has a value of %i.\n", value);

    return 0;

}