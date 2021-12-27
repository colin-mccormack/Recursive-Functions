//
// Created by colin on 12/23/2021.
//

static int myStrLenStringParam(char *s) {

    if ( ! ( *s ) )
        return 0;

    return ( myStrLenStringParam( s + 1 ) + 1 );

}

int Q11() {

    printf ("\nCurrently in Q0%i : ", 11);
    printf ("Determine the number of characters in a string using the following interface: \n"
            "int myStrLen(char *s) \n");

    int length = 0;
    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    length = myStrLenStringParam (string);

    printf ("Your string is %i characters long.\n", length);

    return 0;

}

