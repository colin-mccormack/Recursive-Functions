//
// Created by colin on 12/25/2021.
//

int isPalindrome (char *s, int lo, int hi) {

    // check if low > hi

    if (lo > hi)
        return 1;

    if (s[lo] != s[hi])
        return 0;

    return isPalindrome (s, lo + 1, hi - 1);

}

int Q12() {

    printf ("\nCurrently in Q0%i : ", 12);
    printf ("Determine if a given string is a Palindrome using the following interface: \n"
            "int isPalindrome (char *s, int lo, int hi)  \n");

    int isP;
    char string[MAX_STRING_LENGTH];

    printf ("Please enter the sting : ");
    scanf ("%s", string);
    fflush(stdin);

    isP = isPalindrome (string, 0, ( strlen(string) - 1 ) );

    printf ("Your string %s a palindrome.\n", ( isP ) ? "is" : "is not");

    return 0;

}

